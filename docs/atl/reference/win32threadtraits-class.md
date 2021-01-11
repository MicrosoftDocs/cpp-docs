---
description: "Learn more about: Win32ThreadTraits Class"
title: "Win32ThreadTraits Class"
ms.date: "11/04/2016"
f1_keywords: ["Win32ThreadTraits", "ATLBASE/ATL::Win32ThreadTraits", "ATLBASE/ATL::Win32ThreadTraits::CreateThread"]
helpviewer_keywords: ["threading [ATL], Windows threads", "threading [ATL], creation functions", "Win32ThreadTraits class"]
ms.assetid: 50279c38-eae1-4301-9ea6-97ccea580f3e
---
# Win32ThreadTraits Class

This class provides the creation function for a Windows thread. Use this class if the thread will not use CRT functions.

> [!IMPORTANT]
> This class and its members cannot be used in applications that execute in the Windows Runtime.

## Syntax

```
class Win32ThreadTraits
```

## Members

### Public Methods

|Name|Description|
|----------|-----------------|
|[Win32ThreadTraits::CreateThread](#createthread)|(Static) Call this function to create a thread that should not use CRT functions.|

## Remarks

Thread traits are classes that provide a creation function for a particular type of thread. The creation function has the same signature and semantics as the Windows [CreateThread](/windows/win32/api/processthreadsapi/nf-processthreadsapi-createthread) function.

Thread traits are used by the following classes:

- [CThreadPool](../../atl/reference/cthreadpool-class.md)

- [CWorkerThread](../../atl/reference/cworkerthread-class.md)

If the thread will be using CRT functions, use [CRTThreadTraits](../../atl/reference/crtthreadtraits-class.md) instead.

## Requirements

**Header:** atlbase.h

## <a name="createthread"></a> Win32ThreadTraits::CreateThread

Call this function to create a thread that should not use CRT functions.

```
static HANDLE CreateThread(
    LPSECURITY_ATTRIBUTES lpsa,
    DWORD dwStackSize,
    LPTHREAD_START_ROUTINE pfnThreadProc,
    void* pvParam,
    DWORD dwCreationFlags,
    DWORD* pdwThreadId) throw();
```

### Parameters

*lpsa*<br/>
The security attributes for the new thread.

*dwStackSize*<br/>
The stack size for the new thread.

*pfnThreadProc*<br/>
The thread procedure of the new thread.

*pvParam*<br/>
The parameter to be passed to the thread procedure.

*dwCreationFlags*<br/>
The creation flags (0 or CREATE_SUSPENDED).

*pdwThreadId*<br/>
[out] Address of the DWORD variable that, on success, receives the thread ID of the newly created thread.

### Return Value

Returns the handle to the newly created thread or NULL on failure. Call [GetLastError](/windows/win32/api/errhandlingapi/nf-errhandlingapi-getlasterror) to get extended error information.

### Remarks

See [CreateThread](/windows/win32/api/processthreadsapi/nf-processthreadsapi-createthread) for further information on the parameters to this function.

This function calls `CreateThread` to create the thread.

## See also

[Class Overview](../../atl/atl-class-overview.md)
