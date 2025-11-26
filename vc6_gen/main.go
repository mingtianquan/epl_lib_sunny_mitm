package main

import (
	"flag"
	"fmt"
	"io"
	"os"
	"path/filepath"

	"encoding/json"
	"strings"

	"golang.org/x/text/encoding/simplifiedchinese"
	"golang.org/x/text/transform"
)

func main() {
	projectName := flag.String("name", "", "Name of the project to generate")
	configPath := flag.String("config", "", "Optional JSON config path")
	flag.Parse()

	// Allow project name from config when -name is not provided
	var name string
	if *projectName != "" {
		name = *projectName
	} else {
		if *configPath != "" {
			if cfg, ok := loadProjectConfig(*configPath); ok && cfg.ProjectName != "" {
				name = cfg.ProjectName
			}
		} else {
			if cfg, ok := loadProjectConfig("vc6_gen_config.json"); ok && cfg.ProjectName != "" {
				name = cfg.ProjectName
			}
		}
		if name == "" {
			fmt.Println("Please provide project name via -name or config 'ProjectName'")
			os.Exit(1)
		}
	}
	fmt.Printf("Generating VC6 project for: %s\n", name)

	// Create project directory
	if err := os.MkdirAll(name, 0755); err != nil {
		fmt.Printf("Error creating directory %s: %v\n", name, err)
		os.Exit(1)
	}

	// Copy dependencies
	// Try to find elib and 3rdparty in current directory or parent directory
	fmt.Println("Copying dependencies...")

	elibSrc := findDependency("elib")
	if elibSrc != "" {
		if err := copyDir(elibSrc, filepath.Join(name, "elib")); err != nil {
			fmt.Printf("Warning: Error copying elib: %v\n", err)
		}
	} else {
		fmt.Println("Warning: elib directory not found")
	}

	// Copy 3rdparty structure
	thirdpartySrc := findDependency("3rdparty")
	if thirdpartySrc != "" {
		if err := copyDir(thirdpartySrc, filepath.Join(name, "3rdparty")); err != nil {
			fmt.Printf("Warning: Error copying 3rdparty: %v\n", err)
		}
	} else {
		fmt.Println("Warning: 3rdparty directory not found")
	}

	// Rename 3rdparty/sunny_mitm to 3rdparty/ProjectName if it was copied
	// Actually, we should probably just create the new structure
	// But if we copied 3rdparty, we might have copied the old project's folder too.
	// Let's clean up or adjust.
	// If the source had 3rdparty/sunny_mitm, we now have name/3rdparty/sunny_mitm.
	// We want name/3rdparty/name/x86.

	// Let's create the specific directory for the new project
	newLibDir := filepath.Join(name, "3rdparty", name, "x86")
	if err := os.MkdirAll(newLibDir, 0755); err != nil {
		fmt.Printf("Error creating %s: %v\n", newLibDir, err)
	}

	cfg := defaultProjectConfig(name)
	if cp := *configPath; cp != "" {
		if loaded, ok := loadProjectConfig(cp); ok {
			cfg = mergeProjectConfig(cfg, loaded)
		}
	} else {
		if loaded, ok := loadProjectConfig("vc6_gen_config.json"); ok {
			cfg = mergeProjectConfig(cfg, loaded)
		}
	}

	files := map[string]string{
		name + ".dsp":        fmt.Sprintf(DspTemplate, name),
		name + "_static.dsp": fmt.Sprintf(DspStaticTemplate, name),
		name + ".dsw":        fmt.Sprintf(DswTemplate, name),
		"build_Release.bat":  fmt.Sprintf(BatTemplate, name),
		name + ".cpp": fmt.Sprintf(CppTemplate, name,
			cfg.Guid,
			cfg.MajorVersion,
			cfg.MinorVersion,
			cfg.BuildNumber,
			cfg.RqSysMajorVersion,
			cfg.RqSysMinorVersion,
			cfg.RqKrnlLibMajorVersion,
			cfg.RqKrnlLibMinorVersion,
			cfg.Explain,
			cfg.Author,
			cfg.ZipCode,
			cfg.Address,
			cfg.Photo,
			cfg.Fax,
			cfg.Email,
			cfg.HomePage,
			cfg.Other,
		),
		name + ".def": fmt.Sprintf(DefTemplate, name),
		"StdAfx.h":    StdAfxHTemplate,
		"StdAfx.cpp":  StdAfxCppTemplate,
	}

	for filename, content := range files {
		// Ensure CRLF line endings for VC6 compatibility
		content = strings.ReplaceAll(content, "\n", "\r\n")
		// Handle potential double CR if original already had CRLF (though unlikely with Go backticks)
		content = strings.ReplaceAll(content, "\r\r\n", "\r\n")

		path := filepath.Join(name, filename)

		// For .cpp files, use GBK encoding (ANSI for VC6)
		if strings.HasSuffix(filename, ".cpp") {
			// Convert UTF-8 to GBK
			encoder := simplifiedchinese.GBK.NewEncoder()
			gbkContent, err := io.ReadAll(transform.NewReader(strings.NewReader(content), encoder))
			if err != nil {
				fmt.Printf("Error encoding %s to GBK: %v\n", filename, err)
				continue
			}
			if err := os.WriteFile(path, gbkContent, 0644); err != nil {
				fmt.Printf("Error writing %s: %v\n", path, err)
			} else {
				fmt.Printf("Generated %s (GBK encoding)\n", path)
			}
		} else {
			// Other files use UTF-8
			if err := os.WriteFile(path, []byte(content), 0644); err != nil {
				fmt.Printf("Error writing %s: %v\n", path, err)
			} else {
				fmt.Printf("Generated %s\n", path)
			}
		}
	}

	if src := findFile("gen_h.e"); src != "" {
		if err := copyFile(src, filepath.Join(name, "gen_h.e")); err != nil {
			fmt.Printf("Warning: Error copying gen_h.e: %v\n", err)
		} else {
			fmt.Printf("Copied %s to %s\n", src, filepath.Join(name, "gen_h.e"))
		}
	} else {
		fmt.Println("Warning: gen_h.e file not found")
	}

	fmt.Println("Done! Please ensure gen.h and your .a/.h files are placed correctly.")
}

// findDependency searches for a dependency directory in current and parent directories
func findDependency(name string) string {
	// Try current directory
	if _, err := os.Stat(name); err == nil {
		return name
	}

	// Try parent directory
	parentPath := filepath.Join("..", name)
	if _, err := os.Stat(parentPath); err == nil {
		return parentPath
	}

	return ""
}

func findFile(name string) string {
	if _, err := os.Stat(name); err == nil {
		return name
	}
	parentPath := filepath.Join("..", name)
	if _, err := os.Stat(parentPath); err == nil {
		return parentPath
	}
	return ""
}

func copyDir(src, dst string) error {
	src = filepath.Clean(src)
	dst = filepath.Clean(dst)

	si, err := os.Stat(src)
	if err != nil {
		return err
	}
	if !si.IsDir() {
		return fmt.Errorf("source is not a directory")
	}

	err = os.MkdirAll(dst, si.Mode())
	if err != nil {
		return err
	}

	entries, err := os.ReadDir(src)
	if err != nil {
		return err
	}

	for _, entry := range entries {
		srcPath := filepath.Join(src, entry.Name())
		dstPath := filepath.Join(dst, entry.Name())

		if entry.IsDir() {
			// Exclude sunny_mitm directory from 3rdparty
			if strings.Contains(src, "3rdparty") && entry.Name() == "sunny_mitm" {
				fmt.Printf("Skipping %s\n", srcPath)
				continue
			}

			err = copyDir(srcPath, dstPath)
			if err != nil {
				return err
			}
		} else {
			// Copy file
			if err := copyFile(srcPath, dstPath); err != nil {
				return err
			}
		}
	}

	return nil
}

func copyFile(src, dst string) error {
	in, err := os.Open(src)
	if err != nil {
		return err
	}
	defer in.Close()

	out, err := os.Create(dst)
	if err != nil {
		return err
	}
	defer out.Close()

	_, err = io.Copy(out, in)
	if err != nil {
		return err
	}
	return out.Close()
}

type ProjectConfig struct {
	ProjectName           string `json:"ProjectName"`
	Guid                  string `json:"Guid"`
	MajorVersion          int    `json:"MajorVersion"`
	MinorVersion          int    `json:"MinorVersion"`
	BuildNumber           int    `json:"BuildNumber"`
	RqSysMajorVersion     int    `json:"RqSysMajorVersion"`
	RqSysMinorVersion     int    `json:"RqSysMinorVersion"`
	RqKrnlLibMajorVersion int    `json:"RqKrnlLibMajorVersion"`
	RqKrnlLibMinorVersion int    `json:"RqKrnlLibMinorVersion"`
	Explain               string `json:"Explain"`
	Author                string `json:"Author"`
	ZipCode               string `json:"ZipCode"`
	Address               string `json:"Address"`
	Photo                 string `json:"Photo"`
	Fax                   string `json:"Fax"`
	Email                 string `json:"Email"`
	HomePage              string `json:"HomePage"`
	Other                 string `json:"Other"`
}

func defaultProjectConfig(name string) ProjectConfig {
	return ProjectConfig{
		ProjectName:           name,
		Guid:                  "10AC3E31106D4e42841087115EB9EA85",
		MajorVersion:          1,
		MinorVersion:          0,
		BuildNumber:           51,
		RqSysMajorVersion:     3,
		RqSysMinorVersion:     0,
		RqKrnlLibMajorVersion: 3,
		RqKrnlLibMinorVersion: 0,
		Explain:               name + "支持库",
		Author:                "欧阳逸洛",
		ZipCode:               "",
		Address:               "",
		Photo:                 "",
		Fax:                   "",
		Email:                 "",
		HomePage:              "",
		Other:                 "",
	}
}

func loadProjectConfig(path string) (ProjectConfig, bool) {
	b, err := os.ReadFile(path)
	if err != nil {
		return ProjectConfig{}, false
	}
	var c ProjectConfig
	if err := json.Unmarshal(b, &c); err != nil {
		return ProjectConfig{}, false
	}
	return c, true
}

func mergeProjectConfig(base, override ProjectConfig) ProjectConfig {
	res := base
	if override.ProjectName != "" {
		res.ProjectName = override.ProjectName
	}
	if override.Guid != "" {
		res.Guid = override.Guid
	}
	if override.MajorVersion != 0 {
		res.MajorVersion = override.MajorVersion
	}
	if override.MinorVersion != 0 {
		res.MinorVersion = override.MinorVersion
	}
	if override.BuildNumber != 0 {
		res.BuildNumber = override.BuildNumber
	}
	if override.RqSysMajorVersion != 0 {
		res.RqSysMajorVersion = override.RqSysMajorVersion
	}
	if override.RqSysMinorVersion != 0 {
		res.RqSysMinorVersion = override.RqSysMinorVersion
	}
	if override.RqKrnlLibMajorVersion != 0 {
		res.RqKrnlLibMajorVersion = override.RqKrnlLibMajorVersion
	}
	if override.RqKrnlLibMinorVersion != 0 {
		res.RqKrnlLibMinorVersion = override.RqKrnlLibMinorVersion
	}
	if override.Explain != "" {
		res.Explain = override.Explain
	}
	if override.Author != "" {
		res.Author = override.Author
	}
	if override.ZipCode != "" {
		res.ZipCode = override.ZipCode
	}
	if override.Address != "" {
		res.Address = override.Address
	}
	if override.Photo != "" {
		res.Photo = override.Photo
	}
	if override.Fax != "" {
		res.Fax = override.Fax
	}
	if override.Email != "" {
		res.Email = override.Email
	}
	if override.HomePage != "" {
		res.HomePage = override.HomePage
	}
	if override.Other != "" {
		res.Other = override.Other
	}
	return res
}
