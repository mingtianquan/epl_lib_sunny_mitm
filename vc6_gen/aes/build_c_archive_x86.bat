set CGO_ENABLED=1
set GOOS=windows
set GOARCH=386
set ProjectName=AES_library
set ProjectOutDir=%~dp0bin\windows\%ProjectName%\x86\
set ProjectOutPath_Lib=%ProjectOutDir%%ProjectName%.a
set ProjectOutPath_DLL=%ProjectOutDir%%ProjectName%.dll
go build -buildmode=c-archive -ldflags "-s -w" -o "%ProjectOutPath_Lib%"
go build -buildmode=c-shared -ldflags "-s -w" -o "%ProjectOutPath_DLL%"
pause