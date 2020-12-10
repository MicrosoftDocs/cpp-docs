---
description: "Learn more about: Worker Archetype"
title: "Worker Archetype"
ms.date: "11/04/2016"
helpviewer_keywords: ["Worker archetype"]
ms.assetid: 834145cd-09d3-4149-bc99-620e1871cbfb
---
# Worker Archetype

Classes that conform to the *worker* archetype provide the code to process work items queued on a thread pool.

**Implementation**

To implement a class conforming to this archetype, the class must provide the following features:

|Method|Description|
|------------|-----------------|
|[Initialize](#initialize)|Called to initialize the worker object before any requests are passed to [Execute](#execute).|
|[Execute](#execute)|Called to process a work item.|
|[Terminate](#terminate)|Called to uninitialize the worker object after all requests have been passed to [Execute](#execute).|

|Typedef|Description|
|-------------|-----------------|
|[RequestType](#requesttype)|A typedef for the type of work item that can be processed by the worker class.|

A typical *worker* class looks like this:

[!code-cpp[NVC_ATL_Utilities#137](../../atl/codesnippet/cpp/worker-archetype_1.cpp)]

**Existing Implementations**

These classes conform to this archetype:

|Class|Description|
|-----------|-----------------|
|[CNonStatelessWorker](../../atl/reference/cnonstatelessworker-class.md)|Receives requests from the thread pool and passes them on to a worker object that is created and destroyed for each request.|

**Use**

These template parameters expect the class to conform to this archetype:

|Parameter name|Used by|
|--------------------|-------------|
|*Worker*|[CThreadPool](../../atl/reference/cthreadpool-class.md)|
|*Worker*|[CNonStatelessWorker](../../atl/reference/cnonstatelessworker-class.md)|

### Requirements

**Header:** atlutil.h

## <a name="execute"></a> WorkerArchetype::Execute

Called to process a work item.

```cpp
void Execute(
    RequestType request,
    void* pvWorkerParam,
    OVERLAPPED* pOverlapped);
```

#### Parameters

*request*<br/>
The work item to be processed. The work item is of the same type as `RequestType`.

*pvWorkerParam*<br/>
A custom parameter understood by the worker class. Also passed to `WorkerArchetype::Initialize` and `Terminate`.

*pOverlapped*<br/>
A pointer to the [OVERLAPPED](/windows/win32/api/minwinbase/ns-minwinbase-overlapped) structure used to create the queue on which work items were queued.

## <a name="initialize"></a> WorkerArchetype::Initialize

Called to initialize the worker object before any requests are passed to `WorkerArchetype::Execute`.

```
BOOL Initialize(void* pvParam) throw();
```

#### Parameters

*pvParam*<br/>
A custom parameter understood by the worker class. Also passed to `WorkerArchetype::Terminate` and `WorkerArchetype::Execute`.

### Return Value

Return TRUE on success, FALSE on failure.

## <a name="requesttype"></a> WorkerArchetype::RequestType

A typedef for the type of work item that can be processed by the worker class.

```
typedef MyRequestType RequestType;
```

### Remarks

This type must be used as the first parameter of `WorkerArchetype::Execute` and must be capable of being cast to and from a ULONG_PTR.

## <a name="terminate"></a> WorkerArchetype::Terminate

Called to uninitialize the worker object after all requests have been passed to `WorkerArchetype::Execute`).

```cpp
void Terminate(void* pvParam) throw();
```

#### Parameters

*pvParam*<br/>
A custom parameter understood by the worker class. Also passed to `WorkerArchetype::Initialize` and `WorkerArchetype::Execute`.

## See also

[Concepts](../../atl/active-template-library-atl-concepts.md)<br/>
[ATL COM Desktop Components](../../atl/atl-com-desktop-components.md)
