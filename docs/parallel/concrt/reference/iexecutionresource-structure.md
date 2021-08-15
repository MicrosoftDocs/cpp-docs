---
description: "Learn more about: IExecutionResource Structure"
title: "IExecutionResource Structure"
ms.date: "11/04/2016"
f1_keywords: ["IExecutionResource", "CONCRTRM/concurrency::IExecutionResource", "CONCRTRM/concurrency::IExecutionResource::IExecutionResource::CurrentSubscriptionLevel", "CONCRTRM/concurrency::IExecutionResource::IExecutionResource::GetExecutionResourceId", "CONCRTRM/concurrency::IExecutionResource::IExecutionResource::GetNodeId", "CONCRTRM/concurrency::IExecutionResource::IExecutionResource::Remove"]
helpviewer_keywords: ["IExecutionResource structure"]
ms.assetid: 6b27042b-b98c-4f7f-b831-566950af84cd
---
# IExecutionResource Structure

An abstraction for a hardware thread.

## Syntax

```cpp
struct IExecutionResource;
```

## Members

### Public Methods

|Name|Description|
|----------|-----------------|
|[IExecutionResource::CurrentSubscriptionLevel](#currentsubscriptionlevel)|Returns the number of activated virtual processor roots and subscribed external threads currently associated with the underlying hardware thread this execution resource represents.|
|[IExecutionResource::GetExecutionResourceId](#getexecutionresourceid)|Returns a unique identifier for the hardware thread that this execution resource represents.|
|[IExecutionResource::GetNodeId](#getnodeid)|Returns a unique identifier for the processor node that this execution resource belongs to.|
|[IExecutionResource::Remove](#remove)|Returns this execution resource to the Resource Manager.|

## Remarks

Execution resources can be standalone or associated with virtual processor roots. A standalone execution resource is created when a thread in your application creates a thread subscription. The methods [ISchedulerProxy::SubscribeThread](ischedulerproxy-structure.md#subscribecurrentthread) and [ISchedulerProxy::RequestInitialVirtualProcessors](ischedulerproxy-structure.md#requestinitialvirtualprocessors) create thread subscriptions, and return an `IExecutionResource` interface representing the subscription. Creating a thread subscription is a way to inform the Resource Manager that a given thread will participate in the work queued to a scheduler, along with the virtual processor roots Resource Manager assigns to the scheduler. The Resource Manager uses the information to avoid oversubscribing hardware threads where it can.

## Inheritance Hierarchy

`IExecutionResource`

## Requirements

**Header:** concrtrm.h

**Namespace:** concurrency

## <a name="currentsubscriptionlevel"></a> IExecutionResource::CurrentSubscriptionLevel Method

Returns the number of activated virtual processor roots and subscribed external threads currently associated with the underlying hardware thread this execution resource represents.

```cpp
virtual unsigned int CurrentSubscriptionLevel() const = 0;
```

### Return Value

The current subscription level.

### Remarks

The subscription level tells you how many running threads are associated with the hardware thread. This only includes threads the Resource Manager is aware of in the form of subscribed threads, and virtual processor roots that are actively executing thread proxies.

Calling the method [ISchedulerProxy::SubscribeCurrentThread](ischedulerproxy-structure.md#subscribecurrentthread), or the method [ISchedulerProxy::RequestInitialVirtualProcessors](ischedulerproxy-structure.md#requestinitialvirtualprocessors) with the parameter `doSubscribeCurrentThread` set to the value **`true`** increments the subscription level of a hardware thread by one. They also return an `IExecutionResource` interface representing the subscription. A corresponding call to the [IExecutionResource::Remove](#remove) decrements the hardware thread's subscription level by one.

The act of activating a virtual processor root using the method [IVirtualProcessorRoot::Activate](ivirtualprocessorroot-structure.md#activate) increments the subscription level of a hardware thread by one. The methods [IVirtualProcessorRoot::Deactivate](ivirtualprocessorroot-structure.md#deactivate), or [IExecutionResource::Remove](#remove) decrement the subscription level by one when invoked on an activated virtual processor root.

The Resource Manager uses subscription level information as one of the ways in which to determine when to move resources between schedulers.

## <a name="getexecutionresourceid"></a> IExecutionResource::GetExecutionResourceId Method

Returns a unique identifier for the hardware thread that this execution resource represents.

```cpp
virtual unsigned int GetExecutionResourceId() const = 0;
```

### Return Value

A unique identifier for the hardware thread underlying this execution resource.

### Remarks

Each hardware thread is assigned a unique identifier by the Concurrency Runtime. If multiple execution resources are associated hardware thread, they will all have the same execution resource identifier.

## <a name="getnodeid"></a> IExecutionResource::GetNodeId Method

Returns a unique identifier for the processor node that this execution resource belongs to.

```cpp
virtual unsigned int GetNodeId() const = 0;
```

### Return Value

A unique identifier for a processor node.

### Remarks

The Concurrency Runtime represents hardware threads on the system in groups of processor nodes. Nodes are usually derived from the hardware topology of the system. For example, all processors on a specific socket or a specific NUMA node may belong to the same processor node. The Resource Manager assigns unique identifiers to these nodes starting with `0` up to and including `nodeCount - 1`, where `nodeCount` represents the total number of processor nodes on the system.

The count of nodes can be obtained from the function [GetProcessorNodeCount](concurrency-namespace-functions.md).

## <a name="remove"></a> IExecutionResource::Remove Method

Returns this execution resource to the Resource Manager.

```cpp
virtual void Remove(_Inout_ IScheduler* pScheduler) = 0;
```

### Parameters

*pScheduler*<br/>
An interface to the scheduler making the request to remove this execution resource.

### Remarks

Use this method to return standalone execution resources as well as execution resources associated with virtual processor roots to the Resource Manager.

If this is a standalone execution resource you received from either of the methods [ISchedulerProxy::SubscribeCurrentThread](ischedulerproxy-structure.md#subscribecurrentthread) or [ISchedulerProxy::RequestInitialVirtualProcessors](ischedulerproxy-structure.md#requestinitialvirtualprocessors), calling the method `Remove` will end the thread subscription that the resource was created to represent. You are required to end all thread subscriptions before shutting down a scheduler proxy, and must call `Remove` from the thread that created the subscription.

Virtual processor roots, too, can be returned to the Resource Manager by invoking the `Remove` method, because the interface `IVirtualProcessorRoot` inherits from the `IExecutionResource` interface. You may need to return a virtual processor root either in response to a call to the [IScheduler::RemoveVirtualProcessors](ischeduler-structure.md#removevirtualprocessors) method, or when you are done with an oversubscribed virtual processor root you obtained from the [ISchedulerProxy::CreateOversubscriber](ischedulerproxy-structure.md#createoversubscriber) method. For virtual processor roots, there are no restrictions on which thread can invoke the `Remove` method.

`invalid_argument` is thrown if the parameter `pScheduler` is set to `NULL`.

`invalid_operation` is thrown if the parameter `pScheduler` is different from the scheduler that this execution resource was created for, or, with a standalone execution resource, if the current thread is different from the thread that created the thread subscription.

## See also

[concurrency Namespace](concurrency-namespace.md)<br/>
[IVirtualProcessorRoot Structure](ivirtualprocessorroot-structure.md)
