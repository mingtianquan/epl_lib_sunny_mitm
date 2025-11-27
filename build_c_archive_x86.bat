set CGO_ENABLED=1
set GOOS=windows
set GOARCH=386
set ProjectName=sunny_mitm
set ProjectOutDir=%~dp0bin\windows\%ProjectName%\x86\
set ProjectOutPath_Lib=%ProjectOutDir%%ProjectName%.a
go build -buildmode=c-archive -ldflags "-s -w" -o "%ProjectOutPath_Lib%"
pause