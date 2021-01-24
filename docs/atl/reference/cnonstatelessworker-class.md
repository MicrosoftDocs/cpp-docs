---
description: "Learn more about: CNonStatelessWorker Class"
title: "CNonStatelessWorker Class"
ms.date: "11/04/2016"
f1_keywords: ["CNonStatelessWorker", "ATLUTIL/ATL::CNonStatelessWorker", "ATLUTIL/ATL::CNonStatelessWorker::RequestType", "ATLUTIL/ATL::CNonStatelessWorker::Execute", "ATLUTIL/ATL::CNonStatelessWorker::Initialize", "ATLUTIL/ATL::CNonStatelessWorker::Terminate"]
helpviewer_keywords: ["CNonStatelessWorker class"]
ms.assetid: d00936c6-9e7d-49fb-b87d-417b963367d1
---
# CNonStatelessWorker Class

Receives requests from a thread pool and passes them on to a worker object that is created and destroyed on each request.

> [!IMPORTANT]
> This class and its members cannot be used in applications that execute in the Windows Runtime.

## Syntax

```
template <class Worker>
class CNonStatelessWorker
```

#### Parameters

*Worker*<br/>
A worker thread class conforming to the [worker archetype](../../atl/reference/worker-archetype.md) suitable for handling requests queued on [CThreadPool](../../atl/reference/cthreadpool-class.md).

## Members

### Public Typedefs

|Name|Description|
|----------|-----------------|
|[CNonStatelessWorker::RequestType](#requesttype)|Implementation of [WorkerArchetype::RequestType](worker-archetype.md#requesttype).|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CNonStatelessWorker::Execute](#execute)|Implementation of [WorkerArchetype::Execute](worker-archetype.md#execute).|
|[CNonStatelessWorker::Initialize](#initialize)|Implementation of [WorkerArchetype::Initialize](worker-archetype.md#initialize).|
|[CNonStatelessWorker::Terminate](#terminate)|Implementation of [WorkerArchetype::Terminate](worker-archetype.md#terminate).|

## Remarks

This class is a simple worker thread for use with [CThreadPool](../../atl/reference/cthreadpool-class.md). This class doesn't provide any request-handling capabilities of its own. Instead, it instantiates one instance of *Worker* per request and delegates the implementation of its methods to that instance.

The benefit of this class is that it provides a convenient way to change the state model for existing worker thread classes. `CThreadPool` will create a single worker for the lifetime of the thread, so if the worker class holds state, it will hold it across multiple requests. By simply wrapping that class in the `CNonStatelessWorker` template before using it with `CThreadPool`, the lifetime of the worker and the state it holds is limited to a single request.

## Requirements

**Header:** atlutil.h

## <a name="execute"></a> CNonStatelessWorker::Execute

Implementation of [WorkerArchetype::Execute](worker-archetype.md#execute).

```cpp
void Execute(
    Worker::RequestType request,
    void* pvWorkerParam,
    OVERLAPPED* pOverlapped);
```

### Remarks

This method creates an instance of the *Worker* class on the stack and calls [Initialize](worker-archetype.md#initialize) on that object. If the initialization is successful, this method also calls [Execute](worker-archetype.md#execute) and [Terminate](worker-archetype.md#terminate) on the same object.

## <a name="initialize"></a> CNonStatelessWorker::Initialize

Implementation of [WorkerArchetype::Initialize](worker-archetype.md#initialize).

```
BOOL Initialize(void* /* pvParam */) throw();
```

### Return Value

Always returns TRUE.

### Remarks

This class does not do any initialization in `Initialize`.

## <a name="requesttype"></a> CNonStatelessWorker::RequestType

Implementation of [WorkerArchetype::RequestType](worker-archetype.md#requesttype).

```
typedef Worker::RequestType RequestType;
```

### Remarks

This class handles the same type of work item as the class used for the *Worker* template parameter. See [CNonStatelessWorker Overview](../../atl/reference/cnonstatelessworker-class.md) for details.

## <a name="terminate"></a> CNonStatelessWorker::Terminate

Implementation of [WorkerArchetype::Terminate](worker-archetype.md#terminate).

```cpp
void Terminate(void* /* pvParam */) throw();
```

### Remarks

This class does not do any cleanup in `Terminate`.

## See also

[CThreadPool Class](../../atl/reference/cthreadpool-class.md)<br/>
[Worker Archetype](../../atl/reference/worker-archetype.md)<br/>
[Classes](../../atl/reference/atl-classes.md)
