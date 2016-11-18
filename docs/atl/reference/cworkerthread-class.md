---
title: "CWorkerThread Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL::CWorkerThread<ThreadTraits>"
  - "ATL::CWorkerThread"
  - "ATL.CWorkerThread"
  - "ATL.CWorkerThread<ThreadTraits>"
  - "CWorkerThread"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CWorkerThread class"
ms.assetid: be79a832-1345-4a36-a13e-a406cc65286f
caps.latest.revision: 24
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# CWorkerThread Class
This class creates a worker thread or uses an existing one, waits on one or more kernel object handles, and executes a specified client function when one of the handles is signaled.  
  
> [!IMPORTANT]
>  This class and its members cannot be used in applications that execute in the Windows Runtime.  
  
## Syntax  
  
```
template <class   ThreadTraits = DefaultThreadTraits>
    class CWorkerThread
```  
  
#### Parameters  
 `ThreadTraits`  
 The class providing the thread creation function, such as [CRTThreadTraits](../../atl/reference/crtthreadtraits-class.md) or [Win32ThreadTraits](../../atl/reference/win32threadtraits-class.md).  
  
## Members  
  
### Protected Structures  
  
|Name|Description|  
|----------|-----------------|  
|`WorkerClientEntry`||  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CWorkerThread::CWorkerThread](#cworkerthread__cworkerthread)|The constructor for the worker thread.|  
|[CWorkerThread::~CWorkerThread](#cworkerthread___dtorcworkerthread)|The destructor for the worker thread.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CWorkerThread::AddHandle](#cworkerthread__addhandle)|Call this method to add a waitable object's handle to the list maintained by the worker thread.|  
|[CWorkerThread::AddTimer](#cworkerthread__addtimer)|Call this method to add a periodic waitable timer to the list maintained by the worker thread.|  
|[CWorkerThread::GetThreadHandle](#cworkerthread__getthreadhandle)|Call this method to get the thread handle of the worker thread.|  
|[CWorkerThread::GetThreadId](#cworkerthread__getthreadid)|Call this method to get the thread ID of the worker thread.|  
|[CWorkerThread::Initialize](#cworkerthread__initialize)|Call this method to initialize the worker thread.|  
|[CWorkerThread::RemoveHandle](#cworkerthread__removehandle)|Call this method to remove a handle from the list of waitable objects.|  
|[CWorkerThread::Shutdown](#cworkerthread__shutdown)|Call this method to shut down the worker thread.|  
  
## Remarks  
  
### To use CWorkerThread  
  
1.  Create an instance of this class.  
  
2.  Call [CWorkerThread::Initialize](#cworkerthread__initialize).  
  
3.  Call [CWorkerThread::AddHandle](#cworkerthread__addhandle) with the handle of a kernel object and a pointer to an implementation of [IWorkerThreadClient](../../atl/reference/iworkerthreadclient-interface.md).  
  
     – or –  
  
     Call [CWorkerThread::AddTimer](#cworkerthread__addtimer) with a pointer to an implementation of [IWorkerThreadClient](../../atl/reference/iworkerthreadclient-interface.md).  
  
4.  Implement [IWorkerThreadClient::Execute](../../atl/reference/iworkerthreadclient-interface.md#iworkerthreadclient__execute) to take some action when the handle or timer is signaled.  
  
5.  To remove an object from the list of waitable objects, call [CWorkerThread::RemoveHandle](#cworkerthread__removehandle).  
  
6.  To terminate the thread, call [CWorkerThread::Shutdown](#cworkerthread__shutdown).  
  
## Requirements  
 **Header:** atlutil.h  
  
##  <a name="cworkerthread__addhandle"></a>  CWorkerThread::AddHandle  
 Call this method to add a waitable object's handle to the list maintained by the worker thread.  
  
```
HRESULT AddHandle(
    HANDLE hObject,
    IWorkerThreadClient* pClient,
    DWORD_PTR dwParam) throw();
```  
  
### Parameters  
 `hObject`  
 The handle to a waitable object.  
  
 `pClient`  
 The pointer to the [IWorkerThreadClient](../../atl/reference/iworkerthreadclient-interface.md) interface on the object to be called when the handle is signaled.  
  
 `dwParam`  
 The parameter to be passed to [IWorkerThreadClient::Execute](../../atl/reference/iworkerthreadclient-interface.md#iworkerthreadclient__execute) when the handle is signaled.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 [IWorkerThreadClient::Execute](../../atl/reference/iworkerthreadclient-interface.md#iworkerthreadclient__execute) will be called through `pClient` when the handle, `hObject`, is signaled.  
  
##  <a name="cworkerthread__addtimer"></a>  CWorkerThread::AddTimer  
 Call this method to add a periodic waitable timer to the list maintained by the worker thread.  
  
```
HRESULT AddTimer(
    DWORD dwInterval,
    IWorkerThreadClient* pClient,
    DWORD_PTR dwParam,
    HANDLE* phTimer) throw();
```  
  
### Parameters  
 *dwInterval*  
 Specifies the period of the timer in milliseconds.  
  
 `pClient`  
 The pointer to the [IWorkerThreadClient](../../atl/reference/iworkerthreadclient-interface.md) interface on the object to be called when the handle is signaled.  
  
 `dwParam`  
 The parameter to be passed to [IWorkerThreadClient::Execute](../../atl/reference/iworkerthreadclient-interface.md#iworkerthreadclient__execute) when the handle is signaled.  
  
 `phTimer`  
 [out] Address of the HANDLE variable that, on success, receives the handle to the newly created timer.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 [IWorkerThreadClient::Execute](../../atl/reference/iworkerthreadclient-interface.md#iworkerthreadclient__execute) will be called through `pClient` when the timer is signaled.  
  
 Pass the timer handle from `phTimer` to [CWorkerThread::RemoveHandle](#cworkerthread__removehandle) to close the timer.  
  
##  <a name="cworkerthread__cworkerthread"></a>  CWorkerThread::CWorkerThread  
 The constructor.  
  
```
CWorkerThread() throw();
```  
  
##  <a name="cworkerthread___dtorcworkerthread"></a>  CWorkerThread::~CWorkerThread  
 The destructor.  
  
```
~CWorkerThread() throw();
```  
  
### Remarks  
 Calls [CWorkerThread::Shutdown](#cworkerthread__shutdown).  
  
##  <a name="cworkerthread__getthreadhandle"></a>  CWorkerThread::GetThreadHandle  
 Call this method to get the thread handle of the worker thread.  
  
```
HANDLE GetThreadHandle() throw();
```  
  
### Return Value  
 Returns the thread handle or NULL if the worker thread has not been initialized.  
  
##  <a name="cworkerthread__getthreadid"></a>  CWorkerThread::GetThreadId  
 Call this method to get the thread ID of the worker thread.  
  
```
DWORD GetThreadId() throw();
```  
  
### Return Value  
 Returns the thread ID or NULL if the worker thread has not been initialized.  
  
##  <a name="cworkerthread__initialize"></a>  CWorkerThread::Initialize  
 Call this method to initialize the worker thread.  
  
```
HRESULT Initialize() throw();
HRESULT Initialize(CWorkerThread<ThreadTraits>* pThread) throw();
```  
  
### Parameters  
 `pThread`  
 An existing worker thread.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 This method should be called to initialize the object after creation or after a call to [CWorkerThread::Shutdown](#cworkerthread__shutdown).  
  
 To have two or more `CWorkerThread` objects use the same worker thread, initialize one of them without passing any arguments then pass a pointer to that object to the `Initialize` methods of the others. The objects initialized using the pointer should be shut down before the object used to initialize them.  
  
 See [CWorkerThread::Shutdown](#cworkerthread__shutdown) for information on how that method's behavior changes when initialized using a pointer to an existing object.  
  
##  <a name="cworkerthread__removehandle"></a>  CWorkerThread::RemoveHandle  
 Call this method to remove a handle from the list of waitable objects.  
  
```
HRESULT RemoveHandle(HANDLE   hObject) throw();
```  
  
### Parameters  
 `hObject`  
 The handle to remove.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 When the handle is removed [IWorkerThreadClient::CloseHandle](../../atl/reference/iworkerthreadclient-interface.md#iworkerthreadclient__closehandle) will be called on the associated object that was passed to [AddHandle](#cworkerthread__addhandle). If this call fails, `CWorkerThread` will call the Windows [CloseHandle](http://msdn.microsoft.com/library/windows/desktop/ms724211) function on the handle.  
  
##  <a name="cworkerthread__shutdown"></a>  CWorkerThread::Shutdown  
 Call this method to shut down the worker thread.  
  
```
HRESULT Shutdown(DWORD   dwWait = ATL_WORKER_THREAD_WAIT) throw();
```  
  
### Parameters  
 `dwWait`  
 The time in milliseconds to wait for the worker thread to shut down.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure, such as if the timeout value, `dwWait`, is exceeded.  
  
### Remarks  
 To reuse the object, call [CWorkerThread::Initialize](#cworkerthread__initialize) after calling this method.  
  
 Note that calling **Shutdown** on an object initialized with a pointer to another `CWorkerThread` object has no effect and always returns S_OK.  
  
## See Also  
 [DefaultThreadTraits](atl-typedefs.md#defaultthreadtraits)   
 [Classes](../../atl/reference/atl-classes.md)   
 [Multithreading: Creating Worker Threads](../../parallel/multithreading-creating-worker-threads.md)   
 [IWorkerThreadClient Interface](../../atl/reference/iworkerthreadclient-interface.md)
