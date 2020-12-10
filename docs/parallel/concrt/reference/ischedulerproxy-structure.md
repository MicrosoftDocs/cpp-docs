---
description: "Learn more about: ISchedulerProxy Structure"
title: "ISchedulerProxy Structure"
ms.date: "11/04/2016"
f1_keywords: ["ISchedulerProxy", "CONCRTRM/concurrency::ISchedulerProxy", "CONCRTRM/concurrency::ISchedulerProxy::ISchedulerProxy::BindContext", "CONCRTRM/concurrency::ISchedulerProxy::ISchedulerProxy::CreateOversubscriber", "CONCRTRM/concurrency::ISchedulerProxy::ISchedulerProxy::RequestInitialVirtualProcessors", "CONCRTRM/concurrency::ISchedulerProxy::ISchedulerProxy::Shutdown", "CONCRTRM/concurrency::ISchedulerProxy::ISchedulerProxy::SubscribeCurrentThread", "CONCRTRM/concurrency::ISchedulerProxy::ISchedulerProxy::UnbindContext"]
helpviewer_keywords: ["ISchedulerProxy structure"]
ms.assetid: af416973-7a1c-4c30-aa3b-4161c2aaea54
---
# ISchedulerProxy Structure

The interface by which schedulers communicate with the Concurrency Runtime's Resource Manager to negotiate resource allocation.

## Syntax

```cpp
struct ISchedulerProxy;
```

## Members

### Public Methods

|Name|Description|
|----------|-----------------|
|[ISchedulerProxy::BindContext](#bindcontext)|Associates an execution context with a thread proxy, if it is not already associated with one.|
|[ISchedulerProxy::CreateOversubscriber](#createoversubscriber)|Creates a new virtual processor root on the hardware thread associated with an existing execution resource.|
|[ISchedulerProxy::RequestInitialVirtualProcessors](#requestinitialvirtualprocessors)|Requests an initial allocation of virtual processor roots. Every virtual processor root represents the ability to execute one thread that can perform work for the scheduler.|
|[ISchedulerProxy::Shutdown](#shutdown)|Notifies the Resource Manager that the scheduler is shutting down. This will cause the Resource Manager to immediately reclaim all resources granted to the scheduler.|
|[ISchedulerProxy::SubscribeCurrentThread](#subscribecurrentthread)|Registers the current thread with the Resource Manager, associating it with this scheduler.|
|[ISchedulerProxy::UnbindContext](#unbindcontext)|Disassociates a thread proxy from the execution context specified by the `pContext` parameter and returns it to the thread proxy factory's free pool. This method may only be called on an execution context which was bound via the [ISchedulerProxy::BindContext](#bindcontext) method and has not yet been started via being the `pContext` parameter of an [IThreadProxy::SwitchTo](ithreadproxy-structure.md#switchto) method call.|

## Remarks

The Resource Manager hands an `ISchedulerProxy` interface to every scheduler that registers with it using the [IResourceManager::RegisterScheduler](iresourcemanager-structure.md#registerscheduler) method.

## Inheritance Hierarchy

`ISchedulerProxy`

## Requirements

**Header:** concrtrm.h

**Namespace:** concurrency

## <a name="bindcontext"></a> ISchedulerProxy::BindContext Method

Associates an execution context with a thread proxy, if it is not already associated with one.

```cpp
virtual void BindContext(_Inout_ IExecutionContext* pContext) = 0;
```

### Parameters

*pContext*<br/>
An interface to the execution context to associate with a thread proxy.

### Remarks

Normally, the [IThreadProxy::SwitchTo](ithreadproxy-structure.md#switchto) method will bind a thread proxy to an execution context on demand. There are, however, circumstances where it is necessary to bind a context in advance to ensure that the `SwitchTo` method switches to an already bound context. This is the case on a UMS scheduling context as it cannot call methods that allocate memory, and binding a thread proxy may involve memory allocation if a thread proxy is not readily available in the free pool of the thread proxy factory.

`invalid_argument` is thrown if the parameter `pContext` has the value `NULL`.

## <a name="createoversubscriber"></a> ISchedulerProxy::CreateOversubscriber Method

Creates a new virtual processor root on the hardware thread associated with an existing execution resource.

```cpp
virtual IVirtualProcessorRoot* CreateOversubscriber(_Inout_ IExecutionResource* pExecutionResource) = 0;
```

### Parameters

*pExecutionResource*<br/>
An `IExecutionResource` interface that represents the hardware thread you want to oversubscribe.

### Return Value

An `IVirtualProcessorRoot` interface.

### Remarks

Use this method when your scheduler wants to oversubscribe a particular hardware thread for a limited amount of time. Once you are done with the virtual processor root, you should return it to the resource manager by calling the [Remove](iexecutionresource-structure.md#remove) method on the `IVirtualProcessorRoot` interface.

You can even oversubscribe an existing virtual processor root, because the `IVirtualProcessorRoot` interface inherits from the `IExecutionResource` interface.

## <a name="requestinitialvirtualprocessors"></a> ISchedulerProxy::RequestInitialVirtualProcessors Method

Requests an initial allocation of virtual processor roots. Every virtual processor root represents the ability to execute one thread that can perform work for the scheduler.

```cpp
virtual IExecutionResource* RequestInitialVirtualProcessors(bool doSubscribeCurrentThread) = 0;
```

### Parameters

*doSubscribeCurrentThread*<br/>
Whether to subscribe the current thread and account for it during resource allocation.

### Return Value

The `IExecutionResource` interface for the current thread, if the parameter `doSubscribeCurrentThread` has the value **`true`**. If the value is **`false`**, the method returns NULL.

### Remarks

Before a scheduler executes any work, it should use this method to request virtual processor roots from the Resource Manager. The Resource Manager will access the scheduler's policy using [IScheduler::GetPolicy](ischeduler-structure.md#getpolicy) and use the values for the policy keys `MinConcurrency`, `MaxConcurrency` and `TargetOversubscriptionFactor` to determine how many hardware threads to assign to the scheduler initially and how many virtual processor roots to create for every hardware thread. For more information on how scheduler policies are used to determine a scheduler's initial allocation, see [PolicyElementKey](concurrency-namespace-enums.md).

The Resource Manager grants resources to a scheduler by calling the method [IScheduler::AddVirtualProcessors](ischeduler-structure.md#addvirtualprocessors) with a list of virtual processor roots. The method is invoked as a callback into the scheduler before this method returns.

If the scheduler requested subscription for the current thread by setting the parameter `doSubscribeCurrentThread` to **`true`**, the method returns an `IExecutionResource` interface. The subscription must be terminated at a later point by using the [IExecutionResource::Remove](iexecutionresource-structure.md#remove) method.

When determining which hardware threads are selected, the Resource Manager will attempt to optimize for processor node affinity. If subscription is requested for the current thread, it is an indication that the current thread intends to participate in the work assigned to this scheduler. In such a case, the allocated virtual processors roots are located on the processor node the current thread is executing on, if possible.

The act of subscribing a thread increases the subscription level of the underlying hardware thread by one. The subscription level is reduced by one when the subscription is terminated. For more information on subscription levels, see [IExecutionResource::CurrentSubscriptionLevel](iexecutionresource-structure.md#currentsubscriptionlevel).

## <a name="shutdown"></a> ISchedulerProxy::Shutdown Method

Notifies the Resource Manager that the scheduler is shutting down. This will cause the Resource Manager to immediately reclaim all resources granted to the scheduler.

```cpp
virtual void Shutdown() = 0;
```

### Remarks

All `IExecutionContext` interfaces the scheduler received as a result of subscribing an external thread using the methods `ISchedulerProxy::RequestInitialVirtualProcessors` or `ISchedulerProxy::SubscribeCurrentThread` must be returned to the Resource Manager using `IExecutionResource::Remove` before a scheduler shuts itself down.

If your scheduler had any deactivated virtual processor roots, you must activate them using [IVirtualProcessorRoot::Activate](ivirtualprocessorroot-structure.md#activate), and have the thread proxies executing on them leave the `Dispatch` method of the execution contexts they are dispatching before you invoke `Shutdown` on a scheduler proxy.

It is not necessary for the scheduler to individually return all of the virtual processor roots the Resource Manager granted to it via calls to the `Remove` method because all virtual processors roots will be returned to the Resource Manager at shutdown.

## <a name="subscribecurrentthread"></a> ISchedulerProxy::SubscribeCurrentThread Method

Registers the current thread with the Resource Manager, associating it with this scheduler.

```cpp
virtual IExecutionResource* SubscribeCurrentThread() = 0;
```

### Return Value

The `IExecutionResource` interfacing representing the current thread in the runtime.

### Remarks

Use this method if you want the Resource Manager to account for the current thread while allocating resources to your scheduler and other schedulers. It is especially useful when the thread plans to participate in the work queued to your scheduler, along with the virtual processor roots the scheduler receives from the Resource Manager. The Resource Manager uses information to prevent unnecessary oversubscription of hardware threads on the system.

The execution resource received via this method should be returned to the Resource Manager using the [IExecutionResource::Remove](iexecutionresource-structure.md#remove) method. The thread that calls the `Remove` method must be the same thread that previously called the `SubscribeCurrentThread` method.

The act of subscribing a thread increases the subscription level of the underlying hardware thread by one. The subscription level is reduced by one when the subscription is terminated. For more information on subscription levels, see [IExecutionResource::CurrentSubscriptionLevel](iexecutionresource-structure.md#currentsubscriptionlevel).

## <a name="unbindcontext"></a> ISchedulerProxy::UnbindContext Method

Disassociates a thread proxy from the execution context specified by the `pContext` parameter and returns it to the thread proxy factory's free pool. This method may only be called on an execution context which was bound via the [ISchedulerProxy::BindContext](#bindcontext) method and has not yet been started via being the `pContext` parameter of an [IThreadProxy::SwitchTo](ithreadproxy-structure.md#switchto) method call.

```cpp
virtual void UnbindContext(_Inout_ IExecutionContext* pContext) = 0;
```

### Parameters

*pContext*<br/>
The execution context to disassociate from its thread proxy.

## See also

[concurrency Namespace](concurrency-namespace.md)<br/>
[IScheduler Structure](ischeduler-structure.md)<br/>
[IThreadProxy Structure](ithreadproxy-structure.md)<br/>
[IVirtualProcessorRoot Structure](ivirtualprocessorroot-structure.md)<br/>
[IResourceManager Structure](iresourcemanager-structure.md)
