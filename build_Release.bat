@echo off
cd /d %~dp0
set MSDev98="D:\vc6-toolset\vc60\Common\MSDev98\Bin\MSDEV.EXE"

call %MSDev98% sunny_mitm.dsw /MAKE "sunny_mitm - Win32 Release" /REBUILD
call %MSDev98% sunny_mitm.dsw /MAKE "sunny_mitm_static - Win32 Release" /REBUILD
pause