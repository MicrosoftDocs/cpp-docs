---
description: "Learn more about: CNoWorkerThread Class"
title: "CNoWorkerThread Class"
ms.date: "11/04/2016"
f1_keywords: ["CNoWorkerThread", "ATLUTIL/ATL::CNoWorkerThread", "ATLUTIL/ATL::CNoWorkerThread::AddHandle", "ATLUTIL/ATL::CNoWorkerThread::AddTimer", "ATLUTIL/ATL::CNoWorkerThread::GetThreadHandle", "ATLUTIL/ATL::CNoWorkerThread::GetThreadId", "ATLUTIL/ATL::CNoWorkerThread::Initialize", "ATLUTIL/ATL::CNoWorkerThread::RemoveHandle", "ATLUTIL/ATL::CNoWorkerThread::Shutdown"]
helpviewer_keywords: ["CNoWorkerThread class"]
ms.assetid: 29f06bae-b658-4aac-9c14-331e996d25d1
---
# CNoWorkerThread Class

Use this class as the argument for the `MonitorClass` template parameter to cache classes if you want to disable dynamic cache maintenance.

> [!IMPORTANT]
> This class and its members cannot be used in applications that execute in the Windows Runtime.

## Syntax

```
class CNoWorkerThread
```

## Members

### Public Methods

|Name|Description|
|----------|-----------------|
|[CNoWorkerThread::AddHandle](#addhandle)|Non-functional equivalent of [CWorkerThread::AddHandle](../../atl/reference/cworkerthread-class.md#addhandle).|
|[CNoWorkerThread::AddTimer](#addtimer)|Non-functional equivalent of [CWorkerThread::AddTimer](../../atl/reference/cworkerthread-class.md#addtimer).|
|[CNoWorkerThread::GetThreadHandle](#getthreadhandle)|Non-functional equivalent of [CWorkerThread::GetThreadHandle](../../atl/reference/cworkerthread-class.md#getthreadhandle).|
|[CNoWorkerThread::GetThreadId](#getthreadid)|Non-functional equivalent of [CWorkerThread::GetThreadId](../../atl/reference/cworkerthread-class.md#getthreadid).|
|[CNoWorkerThread::Initialize](#initialize)|Non-functional equivalent of [CWorkerThread::Initialize](../../atl/reference/cworkerthread-class.md#initialize).|
|[CNoWorkerThread::RemoveHandle](#removehandle)|Non-functional equivalent of [CWorkerThread::RemoveHandle](../../atl/reference/cworkerthread-class.md#removehandle).|
|[CNoWorkerThread::Shutdown](#shutdown)|Non-functional equivalent of [CWorkerThread::Shutdown](../../atl/reference/cworkerthread-class.md#shutdown).|

## Remarks

This class provides the same public interface as [CWorkerThread](../../atl/reference/cworkerthread-class.md). This interface is expected to be provided by the `MonitorClass` template parameter to cache classes.

The methods in this class are implemented to do nothing. The methods that return an HRESULT always return S_OK, and the methods that return a HANDLE or thread ID always return 0.

## Requirements

**Header:** atlutil.h

## <a name="addhandle"></a> CNoWorkerThread::AddHandle

Non-functional equivalent of [CWorkerThread::AddHandle](../../atl/reference/cworkerthread-class.md#addhandle).

```
HRESULT AddHandle(HANDLE /* hObject */,
    IWorkerThreadClient* /* pClient */,
    DWORD_PTR /* dwParam */) throw();
```

### Return Value

Always returns S_OK.

### Remarks

The implementation provided by this class does nothing.

## <a name="addtimer"></a> CNoWorkerThread::AddTimer

Non-functional equivalent of [CWorkerThread::AddTimer](../../atl/reference/cworkerthread-class.md#addtimer).

```
HRESULT AddTimer(DWORD /* dwInterval */,
    IWorkerThreadClient* /* pClient */,
    DWORD_PTR /* dwParam */,
    HANDLE* /* phTimer */) throw();
```

### Return Value

Always returns S_OK.

### Remarks

The implementation provided by this class does nothing.

## <a name="getthreadhandle"></a> CNoWorkerThread::GetThreadHandle

Non-functional equivalent of [CWorkerThread::GetThreadHandle](../../atl/reference/cworkerthread-class.md#getthreadhandle).

```
HANDLE GetThreadHandle() throw();
```

### Return Value

Always returns NULL.

### Remarks

The implementation provided by this class does nothing.

## <a name="getthreadid"></a> CNoWorkerThread::GetThreadId

Non-functional equivalent of [CWorkerThread::GetThreadId](../../atl/reference/cworkerthread-class.md#getthreadid).

```
DWORD GetThreadId() throw();
```

### Return Value

Always returns 0.

### Remarks

The implementation provided by this class does nothing.

## <a name="initialize"></a> CNoWorkerThread::Initialize

Non-functional equivalent of [CWorkerThread::Initialize](../../atl/reference/cworkerthread-class.md#initialize).

```
HRESULT Initialize() throw();
```

### Return Value

Always returns S_OK.

### Remarks

The implementation provided by this class does nothing.

## <a name="removehandle"></a> CNoWorkerThread::RemoveHandle

Non-functional equivalent of [CWorkerThread::RemoveHandle](../../atl/reference/cworkerthread-class.md#removehandle).

```
HRESULT RemoveHandle(HANDLE /* hObject */) throw();
```

### Return Value

Always returns S_OK.

### Remarks

The implementation provided by this class does nothing.

## <a name="shutdown"></a> CNoWorkerThread::Shutdown

Non-functional equivalent of [CWorkerThread::Shutdown](../../atl/reference/cworkerthread-class.md#shutdown).

```
HRESULT Shutdown(DWORD dwWait = ATL_WORKER_THREAD_WAIT) throw();
```

### Return Value

Always returns S_OK.

### Remarks

The implementation provided by this class does nothing.
