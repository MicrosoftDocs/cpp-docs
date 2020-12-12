---
description: "Learn more about: CWorkerThread Class"
title: "CWorkerThread Class"
ms.date: "11/04/2016"
f1_keywords: ["CWorkerThread", "ATLUTIL/ATL::CWorkerThread", "ATLUTIL/ATL::CWorkerThread::CWorkerThread", "ATLUTIL/ATL::CWorkerThread::AddHandle", "ATLUTIL/ATL::CWorkerThread::AddTimer", "ATLUTIL/ATL::CWorkerThread::GetThreadHandle", "ATLUTIL/ATL::CWorkerThread::GetThreadId", "ATLUTIL/ATL::CWorkerThread::Initialize", "ATLUTIL/ATL::CWorkerThread::RemoveHandle", "ATLUTIL/ATL::CWorkerThread::Shutdown"]
helpviewer_keywords: ["CWorkerThread class"]
ms.assetid: be79a832-1345-4a36-a13e-a406cc65286f
---
# CWorkerThread Class

This class creates a worker thread or uses an existing one, waits on one or more kernel object handles, and executes a specified client function when one of the handles is signaled.

> [!IMPORTANT]
> This class and its members cannot be used in applications that execute in the Windows Runtime.

## Syntax

```
template <class ThreadTraits = DefaultThreadTraits>
class CWorkerThread
```

### Parameters

*ThreadTraits*<br/>
The class providing the thread creation function, such as [CRTThreadTraits](../../atl/reference/crtthreadtraits-class.md) or [Win32ThreadTraits](../../atl/reference/win32threadtraits-class.md).

## Members

### Protected Structures

|Name|Description|
|----------|-----------------|
|`WorkerClientEntry`||

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CWorkerThread::CWorkerThread](#cworkerthread)|The constructor for the worker thread.|
|[CWorkerThread::~CWorkerThread](#dtor)|The destructor for the worker thread.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CWorkerThread::AddHandle](#addhandle)|Call this method to add a waitable object's handle to the list maintained by the worker thread.|
|[CWorkerThread::AddTimer](#addtimer)|Call this method to add a periodic waitable timer to the list maintained by the worker thread.|
|[CWorkerThread::GetThreadHandle](#getthreadhandle)|Call this method to get the thread handle of the worker thread.|
|[CWorkerThread::GetThreadId](#getthreadid)|Call this method to get the thread ID of the worker thread.|
|[CWorkerThread::Initialize](#initialize)|Call this method to initialize the worker thread.|
|[CWorkerThread::RemoveHandle](#removehandle)|Call this method to remove a handle from the list of waitable objects.|
|[CWorkerThread::Shutdown](#shutdown)|Call this method to shut down the worker thread.|

## Remarks

### To use CWorkerThread

1. Create an instance of this class.

1. Call [CWorkerThread::Initialize](#initialize).

1. Call [CWorkerThread::AddHandle](#addhandle) with the handle of a kernel object and a pointer to an implementation of [IWorkerThreadClient](../../atl/reference/iworkerthreadclient-interface.md).

   \- or -

   Call [CWorkerThread::AddTimer](#addtimer) with a pointer to an implementation of [IWorkerThreadClient](../../atl/reference/iworkerthreadclient-interface.md).

1. Implement [IWorkerThreadClient::Execute](../../atl/reference/iworkerthreadclient-interface.md#execute) to take some action when the handle or timer is signaled.

1. To remove an object from the list of waitable objects, call [CWorkerThread::RemoveHandle](#removehandle).

1. To terminate the thread, call [CWorkerThread::Shutdown](#shutdown).

## Requirements

**Header:** atlutil.h

## <a name="addhandle"></a> CWorkerThread::AddHandle

Call this method to add a waitable object's handle to the list maintained by the worker thread.

```
HRESULT AddHandle(
    HANDLE hObject,
    IWorkerThreadClient* pClient,
    DWORD_PTR dwParam) throw();
```

### Parameters

*hObject*<br/>
The handle to a waitable object.

*pClient*<br/>
The pointer to the [IWorkerThreadClient](../../atl/reference/iworkerthreadclient-interface.md) interface on the object to be called when the handle is signaled.

*dwParam*<br/>
The parameter to be passed to [IWorkerThreadClient::Execute](../../atl/reference/iworkerthreadclient-interface.md#execute) when the handle is signaled.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

### Remarks

[IWorkerThreadClient::Execute](../../atl/reference/iworkerthreadclient-interface.md#execute) will be called through *pClient* when the handle, *hObject*, is signaled.

## <a name="addtimer"></a> CWorkerThread::AddTimer

Call this method to add a periodic waitable timer to the list maintained by the worker thread.

```
HRESULT AddTimer(
    DWORD dwInterval,
    IWorkerThreadClient* pClient,
    DWORD_PTR dwParam,
    HANDLE* phTimer) throw();
```

### Parameters

*dwInterval*<br/>
Specifies the period of the timer in milliseconds.

*pClient*<br/>
The pointer to the [IWorkerThreadClient](../../atl/reference/iworkerthreadclient-interface.md) interface on the object to be called when the handle is signaled.

*dwParam*<br/>
The parameter to be passed to [IWorkerThreadClient::Execute](../../atl/reference/iworkerthreadclient-interface.md#execute) when the handle is signaled.

*phTimer*<br/>
[out] Address of the HANDLE variable that, on success, receives the handle to the newly created timer.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

### Remarks

[IWorkerThreadClient::Execute](../../atl/reference/iworkerthreadclient-interface.md#execute) will be called through *pClient* when the timer is signaled.

Pass the timer handle from *phTimer* to [CWorkerThread::RemoveHandle](#removehandle) to close the timer.

## <a name="cworkerthread"></a> CWorkerThread::CWorkerThread

The constructor.

```
CWorkerThread() throw();
```

## <a name="dtor"></a> CWorkerThread::~CWorkerThread

The destructor.

```
~CWorkerThread() throw();
```

### Remarks

Calls [CWorkerThread::Shutdown](#shutdown).

## <a name="getthreadhandle"></a> CWorkerThread::GetThreadHandle

Call this method to get the thread handle of the worker thread.

```
HANDLE GetThreadHandle() throw();
```

### Return Value

Returns the thread handle or NULL if the worker thread has not been initialized.

## <a name="getthreadid"></a> CWorkerThread::GetThreadId

Call this method to get the thread ID of the worker thread.

```
DWORD GetThreadId() throw();
```

### Return Value

Returns the thread ID or NULL if the worker thread has not been initialized.

## <a name="initialize"></a> CWorkerThread::Initialize

Call this method to initialize the worker thread.

```
HRESULT Initialize() throw();

HRESULT Initialize(CWorkerThread<ThreadTraits>* pThread) throw();
```

### Parameters

*pThread*<br/>
An existing worker thread.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

### Remarks

This method should be called to initialize the object after creation or after a call to [CWorkerThread::Shutdown](#shutdown).

To have two or more `CWorkerThread` objects use the same worker thread, initialize one of them without passing any arguments then pass a pointer to that object to the `Initialize` methods of the others. The objects initialized using the pointer should be shut down before the object used to initialize them.

See [CWorkerThread::Shutdown](#shutdown) for information on how that method's behavior changes when initialized using a pointer to an existing object.

## <a name="removehandle"></a> CWorkerThread::RemoveHandle

Call this method to remove a handle from the list of waitable objects.

```
HRESULT RemoveHandle(HANDLE hObject) throw();
```

### Parameters

*hObject*<br/>
The handle to remove.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

### Remarks

When the handle is removed [IWorkerThreadClient::CloseHandle](../../atl/reference/iworkerthreadclient-interface.md#closehandle) will be called on the associated object that was passed to [AddHandle](#addhandle). If this call fails, `CWorkerThread` will call the Windows [CloseHandle](/windows/win32/api/handleapi/nf-handleapi-closehandle) function on the handle.

## <a name="shutdown"></a> CWorkerThread::Shutdown

Call this method to shut down the worker thread.

```
HRESULT Shutdown(DWORD dwWait = ATL_WORKER_THREAD_WAIT) throw();
```

### Parameters

*dwWait*<br/>
The time in milliseconds to wait for the worker thread to shut down. ATL_WORKER_THREAD_WAIT defaults to 10 seconds. If necessary, you can define your own value for this symbol before including atlutil.h.

### Return Value

Returns S_OK on success, or an error HRESULT on failure, such as if the timeout value, *dwWait*, is exceeded.

### Remarks

To reuse the object, call [CWorkerThread::Initialize](#initialize) after calling this method.

Note that calling `Shutdown` on an object initialized with a pointer to another `CWorkerThread` object has no effect and always returns S_OK.

## See also

[DefaultThreadTraits](atl-typedefs.md#defaultthreadtraits)<br/>
[Classes](../../atl/reference/atl-classes.md)<br/>
[Multithreading: Creating Worker Threads](../../parallel/multithreading-creating-worker-threads.md)<br/>
[IWorkerThreadClient Interface](../../atl/reference/iworkerthreadclient-interface.md)
