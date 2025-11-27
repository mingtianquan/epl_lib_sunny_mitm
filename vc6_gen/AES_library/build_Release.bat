@echo off
cd /d %~dp0
set MSDev98="D:\vc6-toolset\vc60\Common\MSDev98\Bin\MSDEV.EXE"

call %MSDev98% AES_library.dsw /MAKE "AES_library - Win32 Release" /REBUILD
call %MSDev98% AES_library.dsw /MAKE "AES_library_static - Win32 Release" /REBUILD
pause
