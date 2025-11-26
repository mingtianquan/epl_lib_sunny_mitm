#include "stdafx.h"
#include "elib/lib2.h"
#include "elib/lang.h"
#include <stddef.h>
#include "3rdparty/stdint.h"
#include "3rdparty/go_cgo_prologue.h"

#include "3rdparty/sunny_mitm/x86/sunny_mitm.h"

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

EXTERN_C INT WINAPI sunny_mitm_ProcessNotifyLib (INT nMsg, DWORD dwParam1, DWORD dwParam2)
{
#ifndef __E_STATIC_LIB
    if(nMsg == NL_GET_CMD_FUNC_NAMES)
        return (INT) g_CmdNames;
    else if(nMsg == NL_GET_NOTIFY_LIB_FUNC_NAME)
        return (INT) "sunny_mitm_ProcessNotifyLib";
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
#define		LI_LIB_GUID_STR	"10AC3E31106D4e42841087115EB9EA85"
/*guid str*/			_T (LI_LIB_GUID_STR),

/*m_nMajorVersion*/		1,
/*m_nMinorVersion*/		0,

//!!!	注意：凡是增删或更改了命令、窗口组件、数据类型、帮助信息等，只要对帮助
//!!! 文件生成会产生影响，都必须升级版本号，而不能只修改BuildNumber。
//!!!   改动后尽量升级版本号!!!
/*m_nBuildNumber*/		51,	// 1: 2.5;  2: 2.5补遗版; 3: 3.0版;  50: 3.39; 51: 4.11
		// 构建版本号，无需对此版本号作任何处理。
		//   本版本号仅用作区分相同正式版本号的库（譬如仅仅修改了几个 BUG）。
		// 任何公布过给用户使用的版本其此版本号都应该不一样。
		//   赋值时应该顺序递增。

/*m_nRqSysMajorVer*/		3,
/*m_nRqSysMinorVer*/		0,
/*m_nRqSysKrnlLibMajorVer*/	3,
/*m_nRqSysKrnlLibMinorVer*/	0,

/*name*/				_T ("sunny_mitm"),
/*lang*/				__GBK_LANG_VER,
/*explain*/				_T("sunny中间件支持库"),
/*dwState*/				NULL,

/*szAuthor*/	_T("欧阳逸洛"),
/*szZipCode*/	_T(""),
/*szAddress*/	_T(""),
/*szPhoto*/		_T(""),
/*szFax*/		_T(""),
/*szEmail*/		_T(""),
/*szHomePage*/	_T(""),
/*szOther*/		_T(""),

/*type count*/			0,
/*PLIB_DATA_TYPE_INFO*/	NULL,

/*CategoryCount*/ g_CategoryCount,	
/*category*/_T(g_Category),
				
/*CmdCount*/				sizeof (g_CmdInfo) / sizeof (g_CmdInfo [0]),
/*BeginCmd*/				g_CmdInfo,
/*m_pCmdsFunc*/             g_RunFunc,
/*pfnRunAddInFn*/			NULL,
/*szzAddInFnInfo*/			NULL,

/*pfnNotify*/				sunny_mitm_ProcessNotifyLib,

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



