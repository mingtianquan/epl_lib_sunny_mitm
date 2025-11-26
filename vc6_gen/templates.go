package main

const DspTemplate = `# Microsoft Developer Studio Project File - Name="%[1]s" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Dynamic-Link Library" 0x0102

CFG=%[1]s - Win32 Debug
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "%[1]s.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "%[1]s.mak" CFG="%[1]s - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "%[1]s - Win32 Release" (based on "Win32 (x86) Dynamic-Link Library")
!MESSAGE "%[1]s - Win32 Debug" (based on "Win32 (x86) Dynamic-Link Library")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
MTL=midl.exe
RSC=rc.exe

!IF  "$(CFG)" == "%[1]s - Win32 Release"

# PROP BASE Use_MFC 5
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Release"
# PROP BASE Intermediate_Dir "Release"
# PROP BASE Target_Dir ""
# PROP Use_MFC 6
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "Release"
# PROP Intermediate_Dir "Release"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MT /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_WINDLL" /Yu"stdafx.h" /FD /c
# ADD CPP /nologo /MT /W3 /GX /Od /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_MBCS" /D "_USRDLL" /D "_WINDLL" /D "_AFXDLL" /FR /YX /FD /c
# ADD BASE MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x804 /d "NDEBUG"
# ADD RSC /l 0x804 /d "NDEBUG" /d "_DLL"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo /o"Release/%[1]s.bsc"
LINK32=link.exe
# ADD BASE LINK32 /nologo /subsystem:windows /dll /machine:I386
# ADD LINK32 User32.lib 3rdparty\%[1]s\x86\%[1]s.a /nologo /subsystem:windows /dll /machine:I386 /out:"Release\%[1]s.fne"

!ELSEIF  "$(CFG)" == "%[1]s - Win32 Debug"

# PROP BASE Use_MFC 5
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "Debug"
# PROP BASE Intermediate_Dir "Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 6
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "Debug"
# PROP Intermediate_Dir "Debug"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MTd /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_WINDLL" /Yu"stdafx.h" /FD /GZ /c
# ADD CPP /nologo /MTd /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_MBCS" /D "_USRDLL" /D "_WINDLL" /D "_AFXDLL" /FR /YX /FD /GZ /c
# ADD BASE MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x804 /d "_DEBUG"
# ADD RSC /l 0x804 /d "_DEBUG" /d "_DLL"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 /nologo /subsystem:windows /dll /debug /machine:I386 /pdbtype:sept
# ADD LINK32 User32.lib 3rdparty\%[1]s\x86\%[1]s.a /nologo /subsystem:windows /dll /debug /machine:I386 /out:"Debug\%[1]s.fne" /pdbtype:sept
# SUBTRACT LINK32 /pdb:none

!ENDIF 

# Begin Target

# Name "%[1]s - Win32 Release"
# Name "%[1]s - Win32 Debug"
# Begin Group "Source Files"

# PROP Default_Filter "cpp;c;cxx;rc;def;r;odl;idl;hpj;bat"
# Begin Source File

SOURCE=.\3rdparty\go_archive_mingw_shim.c
# End Source File
# Begin Source File

SOURCE=.\StdAfx.cpp

!IF  "$(CFG)" == "%[1]s - Win32 Release"

# ADD CPP /YX

!ELSEIF  "$(CFG)" == "%[1]s - Win32 Debug"

!ENDIF 

# End Source File
# Begin Source File

SOURCE=.\%[1]s.cpp
# End Source File
# Begin Source File

SOURCE=.\%[1]s.def
# End Source File
# End Group
# Begin Group "Header Files"

# PROP Default_Filter "h;hpp;hxx;hm;inl"
# Begin Source File

SOURCE=.\gen.h
# End Source File
# Begin Source File

SOURCE=.\StdAfx.h
# End Source File
# Begin Source File

SOURCE=.\%[1]s.h
# End Source File
# End Group
# End Target
# End Project
`

const DspStaticTemplate = `# Microsoft Developer Studio Project File - Name="%[1]s_static" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Static Library" 0x0104

CFG=%[1]s_static - Win32 Debug
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "%[1]s_static.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "%[1]s_static.mak" CFG="%[1]s_static - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "%[1]s_static - Win32 Release" (based on "Win32 (x86) Static Library")
!MESSAGE "%[1]s_static - Win32 Debug" (based on "Win32 (x86) Static Library")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
RSC=rc.exe

!IF  "$(CFG)" == "%[1]s_static - Win32 Release"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Release"
# PROP BASE Intermediate_Dir "Release"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "Release"
# PROP Intermediate_Dir "Release"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_MBCS" /D "_LIB" /YX /FD /c
# ADD CPP /nologo /MT /W3 /GX /Od /D "WIN32" /D "NDEBUG" /D "_MBCS" /D "_LIB" /D "__E_STATIC_LIB" /FR /YX /FD /c
# ADD BASE RSC /l 0x804 /d "NDEBUG"
# ADD RSC /l 0x804 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LIB32=link.exe -lib
# ADD BASE LIB32 /nologo
# ADD LIB32 "3rdparty\%[1]s\x86\%[1]s.a" /nologo

!ELSEIF  "$(CFG)" == "%[1]s_static - Win32 Debug"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "Debug"
# PROP BASE Intermediate_Dir "Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "Debug"
# PROP Intermediate_Dir "Debug"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_MBCS" /D "_LIB" /YX /FD /GZ /c
# ADD CPP /nologo /MTd /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_MBCS" /D "_LIB" /D "__E_STATIC_LIB" /YX /FD /GZ /c
# ADD BASE RSC /l 0x804 /d "_DEBUG"
# ADD RSC /l 0x804 /d "_DEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LIB32=link.exe -lib
# ADD BASE LIB32 /nologo
# ADD LIB32 "3rdparty\%[1]s\x86\%[1]s.a" /nologo

!ENDIF 

# Begin Target

# Name "%[1]s_static - Win32 Release"
# Name "%[1]s_static - Win32 Debug"
# Begin Group "Header Files No. 1"

# PROP Default_Filter ""
# Begin Source File

SOURCE=.\gen.h
# End Source File
# Begin Source File

SOURCE=.\3rdparty\go_cgo_prologue.h
# End Source File
# Begin Source File

SOURCE=.\StdAfx.h
# End Source File
# Begin Source File

SOURCE=.\%[1]s.h
# End Source File
# End Group
# Begin Group "Source Files No. 1"

# PROP Default_Filter ""
# Begin Source File

SOURCE=.\3rdparty\go_archive_mingw_shim.c
# End Source File
# Begin Source File

SOURCE=.\StdAfx.cpp
# End Source File
# Begin Source File

SOURCE=.\%[1]s.cpp
# End Source File
# End Group
# End Target
# End Project
`

const DswTemplate = `Microsoft Developer Studio Workspace File, Format Version 6.00
# WARNING: DO NOT EDIT OR DELETE THIS WORKSPACE FILE!

###############################################################################

Project: "%[1]s"=.\%[1]s.dsp - Package Owner=<4>

Package=<5>
{{{
}}}

Package=<4>
{{{
}}}

###############################################################################

Project: "%[1]s_static"=.\%[1]s_static.dsp - Package Owner=<4>

Package=<5>
{{{
}}}

Package=<4>
{{{
}}}

###############################################################################

Global:

Package=<5>
{{{
}}}

Package=<3>
{{{
}}}

###############################################################################
`

const BatTemplate = `@echo off
cd /d %%~dp0
set MSDev98="D:\vc6-toolset\vc60\Common\MSDev98\Bin\MSDEV.EXE"

call %%MSDev98%% %[1]s.dsw /MAKE "%[1]s - Win32 Release" /REBUILD
call %%MSDev98%% %[1]s.dsw /MAKE "%[1]s_static - Win32 Release" /REBUILD
pause
`

const CppTemplate = `#include "stdafx.h"
#include "elib/lib2.h"
#include "elib/lang.h"
#include <stddef.h>
#include "3rdparty/stdint.h"
#include "3rdparty/go_cgo_prologue.h"

#include "3rdparty/%[1]s/x86/%[1]s.h"

//#ifdef __E_STATIC_LIB
#define GO_ARCHIVE
//#endif
#ifdef GO_ARCHIVE
#ifndef _WIN64
extern "C" void rt0_386_windows_lib();
#else
extern "C" void rt0_amd64_windows_lib();
#endif
struct GlobalGoInit {
    GlobalGoInit() {
#ifndef _WIN64
       rt0_386_windows_lib();
#else
       rt0_amd64_windows_lib();
#endif
    }
} global_go_init;
#endif

#define DTT_IS_NULL_DATA_TYPE   0
#define DTT_IS_SYS_DATA_TYPE    1
#define DTT_IS_USER_DATA_TYPE   2
#define DTT_IS_LIB_DATA_TYPE    3
// 取回数据类型的类别。
INT GetDataTypeType (DATA_TYPE dtDataType)
{
    if (dtDataType == _SDT_NULL)
        return DTT_IS_NULL_DATA_TYPE;
    
    DWORD dw = dtDataType & 0xC0000000;
    return dw == DTM_SYS_DATA_TYPE_MASK ? DTT_IS_SYS_DATA_TYPE :
    dw == DTM_USER_DATA_TYPE_MASK ? DTT_IS_USER_DATA_TYPE :
    DTT_IS_LIB_DATA_TYPE;
}

LPBYTE GetMDataPtr(PMDATA_INF pInf)
{
    ASSERT(GetDataTypeType(pInf->m_dtDataType) == DTT_IS_SYS_DATA_TYPE);
    switch (pInf->m_dtDataType)
    {
    case SDT_BYTE:
        return (LPBYTE)&pInf->m_byte;
    case SDT_SHORT:
        return (LPBYTE)&pInf->m_short;
    case SDT_INT:
        return (LPBYTE)&pInf->m_int;
    case SDT_INT64:
        return (LPBYTE)&pInf->m_int64;
    case SDT_FLOAT:
        return (LPBYTE)&pInf->m_float;
    case SDT_DOUBLE:
        return (LPBYTE)&pInf->m_double;
    case SDT_BOOL:
        return (LPBYTE)&pInf->m_bool;
    case SDT_DATE_TIME:
        return (LPBYTE)&pInf->m_date;
    case SDT_SUB_PTR:
        return (LPBYTE)&pInf->m_dwSubCodeAdr;
    case SDT_TEXT:
        return (LPBYTE)pInf->m_pText;
    case SDT_BIN: {
        LPBYTE pBinData = pInf->m_pBin + sizeof(INT) * 2;
        return pBinData; }
    default:
        ASSERT(FALSE);
        return NULL;
    }
}

char* CloneTextData (char* ps)
{
    if (ps == NULL || *ps == '\0')
        return NULL;
    
    INT nTextLen = strlen (ps);
    INT WINAPI NotifySys (INT nMsg, DWORD dwParam1, DWORD dwParam2);
    char* pd = (char*)NotifySys (NRS_MALLOC, (DWORD)(nTextLen + 1), 0);
    memcpy (pd, ps, nTextLen);
    pd [nTextLen] = '\0';
    return pd;
}

#include "gen.h"

/////////////////////////////////////////////////////////////////////////////

INT g_nLastNotifyResult;
PFN_NOTIFY_SYS g_fnNotifySys = NULL;

INT WINAPI NotifySys (INT nMsg, DWORD dwParam1, DWORD dwParam2)
{
	ASSERT (g_fnNotifySys != NULL);
	if (g_fnNotifySys != NULL)
		return g_nLastNotifyResult = g_fnNotifySys (nMsg, dwParam1, dwParam2);
	else
		return g_nLastNotifyResult = 0;
}

/////////////////////////////////////////////////////////////////////////////

INT WINAPI ProcessNotifyLib (INT nMsg, DWORD dwParam1, DWORD dwParam2)
{
    INT nRet = NR_OK;
    switch (nMsg)
    {
    case NL_SYS_NOTIFY_FUNCTION:
        g_fnNotifySys = (PFN_NOTIFY_SYS)dwParam1;
        break;
    default:
        nRet = NR_ERR;
        break;
    }
    
    return nRet;
}

EXTERN_C INT WINAPI %[1]s_ProcessNotifyLib (INT nMsg, DWORD dwParam1, DWORD dwParam2)
{
#ifndef __E_STATIC_LIB
    if(nMsg == NL_GET_CMD_FUNC_NAMES)
        return (INT) g_CmdNames;
    else if(nMsg == NL_GET_NOTIFY_LIB_FUNC_NAME)
        return (INT) "%[1]s_ProcessNotifyLib";
    else if(nMsg == NL_GET_DEPENDENT_LIBS)
        return NULL;
#endif
    return ProcessNotifyLib(nMsg, dwParam1, dwParam2);
}

#ifndef __E_STATIC_LIB


/////////////////////////////////////////////////////////////////////////////

//////////// 库定义开始
static LIB_INFO s_LibInfo =
{
/*Lib Format Ver*/		LIB_FORMAT_VER,		// 保留未用。

// 本支持库的GUID串：
// guid: {5014D8FA-6DCA-40b6-8FA6-26D8183666EB}
#define		LI_LIB_GUID_STR	"%[2]s"
/*guid str*/			_T (LI_LIB_GUID_STR),

/*m_nMajorVersion*/		%[3]d,
/*m_nMinorVersion*/		%[4]d,

//!!!	注意：凡是增删或更改了命令、窗口组件、数据类型、帮助信息等，只要对帮助
//!!! 文件生成会产生影响，都必须升级版本号，而不能只修改BuildNumber。
//!!!   改动后尽量升级版本号!!!
/*m_nBuildNumber*/		%[5]d,
		// 构建版本号，无需对此版本号作任何处理。
		//   本版本号仅用作区分相同正式版本号的库（譬如仅仅修改了几个 BUG）。
		// 任何公布过给用户使用的版本其此版本号都应该不一样。
		//   赋值时应该顺序递增。

/*m_nRqSysMajorVer*/		%[6]d,
/*m_nRqSysMinorVer*/		%[7]d,
/*m_nRqSysKrnlLibMajorVer*/	%[8]d,
/*m_nRqSysKrnlLibMinorVer*/	%[9]d,

/*name*/				_T ("%[1]s"),
/*lang*/				__GBK_LANG_VER,
/*explain*/				_T("%[10]s"),
/*dwState*/				NULL,

/*szAuthor*/	_T("%[11]s"),
/*szZipCode*/	_T("%[12]s"),
/*szAddress*/	_T("%[13]s"),
/*szPhoto*/		_T("%[14]s"),
/*szFax*/		_T("%[15]s"),
/*szEmail*/		_T("%[16]s"),
/*szHomePage*/	_T("%[17]s"),
/*szOther*/		_T("%[18]s"),

/*type count*/			0,
/*PLIB_DATA_TYPE_INFO*/	NULL,

/*CategoryCount*/ g_CategoryCount,	
/*category*/_T(g_Category),
				
/*CmdCount*/				sizeof (g_CmdInfo) / sizeof (g_CmdInfo [0]),
/*BeginCmd*/				g_CmdInfo,
/*m_pCmdsFunc*/             g_RunFunc,
/*pfnRunAddInFn*/			NULL,
/*szzAddInFnInfo*/			NULL,

/*pfnNotify*/				%[1]s_ProcessNotifyLib,

/*pfnRunSuperTemplate*/		NULL,
/*szzSuperTemplateInfo*/	NULL,

/*nLibConstCount*/			0,
/*pLibConst*/				NULL,

/*szzDependFiles*/			NULL,
};

PLIB_INFO WINAPI GetNewInf ()
{ 
	return &s_LibInfo;
}

#ifndef _LIB
int LockLibraryIntoProcessMem(HMODULE DllHandle, HMODULE *LocalDllHandle)
{
    if(NULL == LocalDllHandle)
    {
        return ERROR_INVALID_PARAMETER;
    }
    *LocalDllHandle = NULL;
    TCHAR moduleName[1024];
    
    if(0 == GetModuleFileName(DllHandle, moduleName, sizeof(moduleName)/ sizeof(TCHAR)))
    {
        return GetLastError();
    }
    *LocalDllHandle = LoadLibrary(moduleName);
    
    if(NULL == *LocalDllHandle){
        return GetLastError();
    }
    return NO_ERROR;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD  ul_reason_for_call, LPVOID lpReserved)
{ 
    switch(ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        {
            static HMODULE self = NULL;
            LockLibraryIntoProcessMem(hModule, &self);
            break;
        }
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}
#endif

#endif



`

const DefTemplate = `; %[1]s.def : Declares the module parameters for the DLL.

LIBRARY      "%[1]s"
DESCRIPTION  '%[1]s Library'

EXPORTS
GetNewInf
`

const StdAfxHTemplate = `#if !defined(AFX_STDAFX_H__4D6496D3_54D2_4AFE_8364_A760988C8963__INCLUDED_)
#define AFX_STDAFX_H__4D6496D3_54D2_4AFE_8364_A760988C8963__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include <WINDOWS.H>
#include <ASSERT.H>
#include <tchar.h>

#define ASSERT assert
//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STDAFX_H__4D6496D3_54D2_4AFE_8364_A760988C8963__INCLUDED_)
`

const StdAfxCppTemplate = `// stdafx.cpp : source file that includes just the standard includes
//	HtmlView.pch will be the pre-compiled header
//	stdafx.obj will contain the pre-compiled type information

#include "stdafx.h"
`
