#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

//void* __mingw_vfprintf = _vsnprintf;

int __cdecl __mingw_vsnprintf(
     char *buffer,
     size_t count,
     const char *format,
     va_list argptr
)
{
    return _vsnprintf(buffer, count, format, argptr);
}

//void* __mingw_vfprintf = vfprintf;

int __cdecl __mingw_vfprintf(
     FILE *stream,
     const char *format,
     va_list argptr
)
{
    return vfprintf(stream, format, argptr);
}

FILE* __cdecl __acrt_iob_func(unsigned i)
{
	return &_iob[i];
}

#include <process.h>
//void* __imp___beginthread = _beginthread;

#ifndef _UINTPTR_T_DEFINED
    #define _UINTPTR_T_DEFINED
    #ifdef _WIN64
        typedef unsigned __int64  uintptr_t;
    #else
        typedef unsigned int uintptr_t;
    #endif
#endif

typedef void     (__cdecl*   _beginthread_proc_type  )(void*);
typedef unsigned (__stdcall* _beginthreadex_proc_type)(void*);

uintptr_t __cdecl __beginthread(
    _beginthread_proc_type _StartAddress,
    unsigned               _StackSize,
    void* _ArgList
)
{
    return _beginthread(_StartAddress, _StackSize, _ArgList);
}

typedef struct _OVERLAPPED_ENTRY {
    void* lpCompletionKey;
    LPOVERLAPPED lpOverlapped;
    void* Internal;
    DWORD dwNumberOfBytesTransferred;
} OVERLAPPED_ENTRY, *LPOVERLAPPED_ENTRY;

BOOL
WINAPI
GetQueuedCompletionStatusEx(
     HANDLE CompletionPort,
    LPOVERLAPPED_ENTRY lpCompletionPortEntries,
     ULONG ulCount,
     PULONG ulNumEntriesRemoved,
     DWORD dwMilliseconds,
     BOOL fAlertable
)
{
    typedef BOOL(WINAPI* TFunc)(HANDLE CompletionPort,
        LPOVERLAPPED_ENTRY lpCompletionPortEntries,
        ULONG ulCount,
        PULONG ulNumEntriesRemoved,
        DWORD dwMilliseconds,
            BOOL fAlertable);
    static TFunc func = NULL;
    if(func == NULL){
        HMODULE h = GetModuleHandleA("Kernel32.dll");

        func = (TFunc)GetProcAddress(h, "GetQueuedCompletionStatusEx");

    }

    return func(CompletionPort, lpCompletionPortEntries, ulCount, ulNumEntriesRemoved, dwMilliseconds, fAlertable);
}

HANDLE
WINAPI
CreateWaitableTimerExW(
     LPSECURITY_ATTRIBUTES lpTimerAttributes,
     LPCWSTR lpTimerName,
     DWORD dwFlags,
     DWORD dwDesiredAccess
)
{
    HMODULE h = GetModuleHandleA("Kernel32.dll");
    typedef HANDLE(WINAPI* TFunc)(LPSECURITY_ATTRIBUTES lpTimerAttributes,
        LPCWSTR lpTimerName,
        DWORD dwFlags,
        DWORD dwDesiredAccess);
    TFunc func = (TFunc)GetProcAddress(h, "CreateWaitableTimerExW");
    return func(lpTimerAttributes, lpTimerName, dwFlags, dwDesiredAccess);
}

typedef LONG (NTAPI *PVECTORED_EXCEPTION_HANDLER)(
    struct _EXCEPTION_POINTERS *ExceptionInfo
    );
PVOID
WINAPI
AddVectoredExceptionHandler(
     ULONG First,
     PVECTORED_EXCEPTION_HANDLER Handler
    )
{
    HMODULE h = GetModuleHandleA("Kernel32.dll");
    typedef HANDLE(WINAPI* TFunc)(ULONG First,
     PVECTORED_EXCEPTION_HANDLER Handler);
    TFunc func = (TFunc)GetProcAddress(h, "AddVectoredExceptionHandler");
    return func(First, Handler);

}

// Shim for WerSetFlags (Windows 7+)
typedef HRESULT (WINAPI *WerSetFlags_t)(DWORD dwFlags);
HRESULT WINAPI WerSetFlags(DWORD dwFlags) {
    static WerSetFlags_t func = NULL;
    if (!func) {
        HMODULE h = GetModuleHandleA("kernel32.dll");
        if (h) func = (WerSetFlags_t)GetProcAddress(h, "WerSetFlags");
    }
    if (func) return func(dwFlags);
    return S_OK;
}

// Shim for WerGetFlags (Windows 7+)
typedef HRESULT (WINAPI *WerGetFlags_t)(HANDLE hProcess, PDWORD pdwFlags);
HRESULT WINAPI WerGetFlags(HANDLE hProcess, PDWORD pdwFlags) {
    static WerGetFlags_t func = NULL;
    if (!func) {
        HMODULE h = GetModuleHandleA("kernel32.dll");
        if (h) func = (WerGetFlags_t)GetProcAddress(h, "WerGetFlags");
    }
    if (func) return func(hProcess, pdwFlags);
    if (pdwFlags) *pdwFlags = 0;
    return S_OK;
}

// Shim for RaiseFailFastException (Windows 7+)
typedef void (WINAPI *RaiseFailFastException_t)(PEXCEPTION_RECORD pExceptionRecord, PCONTEXT pContextRecord, DWORD dwFlags);
void WINAPI RaiseFailFastException(PEXCEPTION_RECORD pExceptionRecord, PCONTEXT pContextRecord, DWORD dwFlags) {
    static RaiseFailFastException_t func = NULL;
    if (!func) {
        HMODULE h = GetModuleHandleA("kernel32.dll");
        if (h) func = (RaiseFailFastException_t)GetProcAddress(h, "RaiseFailFastException");
    }
    if (func) func(pExceptionRecord, pContextRecord, dwFlags);
    else TerminateProcess(GetCurrentProcess(), 0xC0000409);
}

// Shim for GetErrorMode (Windows Vista+)
typedef UINT (WINAPI *GetErrorMode_t)(void);
UINT WINAPI GetErrorMode(void) {
    static GetErrorMode_t func = NULL;
    if (!func) {
        HMODULE h = GetModuleHandleA("kernel32.dll");
        if (h) func = (GetErrorMode_t)GetProcAddress(h, "GetErrorMode");
    }
    if (func) return func();
    return 0;
}