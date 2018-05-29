---
title: "CRTThreadTraits Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-atl"]
ms.topic: "reference"
f1_keywords: ["CRTThreadTraits", "ATLBASE/ATL::CRTThreadTraits", "ATLBASE/ATL::CRTThreadTraits::CreateThread"]
dev_langs: ["C++"]
helpviewer_keywords: ["CRTThreadTraits class", "threading [ATL], creation functions", "threading [ATL], CRT threads"]
ms.assetid: eb6e20b0-c2aa-4170-8e34-aaeeacc86343
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# CRTThreadTraits Class
This class provides the creation function for a CRT thread. Use this class if the thread will use CRT functions.  
  
> [!IMPORTANT]
>  This class and its members cannot be used in applications that execute in the Windows Runtime.  
  
## Syntax  
  
```
class CRTThreadTraits
```  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CRTThreadTraits::CreateThread](#createthread)|(Static) Call this function to create a thread that can use CRT functions.|  
  
## Remarks  
 Thread traits are classes that provide a creation function for a particular type of thread. The creation function has the same signature and semantics as the Windows [CreateThread](http://msdn.microsoft.com/library/windows/desktop/ms682453) function.  
  
 Thread traits are used by the following classes:  
  
- [CThreadPool](../../atl/reference/cthreadpool-class.md)  
  
- [CWorkerThread](../../atl/reference/cworkerthread-class.md)  
  
 If the thread will not be using CRT functions, use [Win32ThreadTraits](../../atl/reference/win32threadtraits-class.md) instead.  
  
## Requirements  
 **Header:** atlbase.h  
  
##  <a name="createthread"></a>  CRTThreadTraits::CreateThread  
 Call this function to create a thread that can use CRT functions.  
  
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
 `lpsa`  
 The security attributes for the new thread.  
  
 `dwStackSize`  
 The stack size for the new thread.  
  
 `pfnThreadProc`  
 The thread procedure of the new thread.  
  
 `pvParam`  
 The parameter to be passed to the thread procedure.  
  
 `dwCreationFlags`  
 The creation flags (0 or CREATE_SUSPENDED).  
  
 `pdwThreadId`  
 [out] Address of the DWORD variable that, on success, receives the thread ID of the newly created thread.  
  
### Return Value  
 Returns the handle to the newly created thread or NULL on failure. Call [GetLastError](http://msdn.microsoft.com/library/windows/desktop/ms679360) to get extended error information.  
  
### Remarks  
 See [CreateThread](http://msdn.microsoft.com/library/windows/desktop/ms682453) for further information on the parameters to this function.  
  
 This function calls [_beginthreadex](../../c-runtime-library/reference/beginthread-beginthreadex.md) to create the thread.  
  
## See Also  
 [Class Overview](../../atl/atl-class-overview.md)
