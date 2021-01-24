---
description: "Learn more about: IThreadProxy Structure"
title: "IThreadProxy Structure"
ms.date: "11/04/2016"
f1_keywords: ["IThreadProxy", "CONCRTRM/concurrency::IThreadProxy", "CONCRTRM/concurrency::IThreadProxy::IThreadProxy::GetId", "CONCRTRM/concurrency::IThreadProxy::IThreadProxy::SwitchOut", "CONCRTRM/concurrency::IThreadProxy::IThreadProxy::SwitchTo", "CONCRTRM/concurrency::IThreadProxy::IThreadProxy::YieldToSystem"]
helpviewer_keywords: ["IThreadProxy structure"]
ms.assetid: feb89241-a555-4e61-ad48-40add54daeca
---
# IThreadProxy Structure

An abstraction for a thread of execution. Depending on the `SchedulerType` policy key of the scheduler you create, the Resource Manager will grant you a thread proxy that is backed by either a regular Win32 thread or a user-mode schedulable (UMS) thread. UMS threads are supported on 64-bit operating systems with version Windows 7 and higher.

## Syntax

```cpp
struct IThreadProxy;
```

## Members

### Public Methods

|Name|Description|
|----------|-----------------|
|[IThreadProxy::GetId](#getid)|Returns a unique identifier for the thread proxy.|
|[IThreadProxy::SwitchOut](#switchout)|Disassociates the context from the underlying virtual processor root.|
|[IThreadProxy::SwitchTo](#switchto)|Performs a cooperative context switch from the currently executing context to a different one.|
|[IThreadProxy::YieldToSystem](#yieldtosystem)|Causes the calling thread to yield execution to another thread that is ready to run on the current processor. The operating system selects the next thread to be executed.|

## Remarks

Thread proxies are coupled to execution contexts represented by the interface `IExecutionContext` as a means of dispatching work.

## Inheritance Hierarchy

`IThreadProxy`

## Requirements

**Header:** concrtrm.h

**Namespace:** concurrency

## <a name="getid"></a> IThreadProxy::GetId Method

Returns a unique identifier for the thread proxy.

```cpp
virtual unsigned int GetId() const = 0;
```

### Return Value

A unique integer identifier.

## <a name="switchout"></a> IThreadProxy::SwitchOut Method

Disassociates the context from the underlying virtual processor root.

```cpp
virtual void SwitchOut(SwitchingProxyState switchState = Blocking) = 0;
```

### Parameters

*switchState*<br/>
Indicates the state of the thread proxy that is executing the switch. The parameter is of type `SwitchingProxyState`.

### Remarks

Use `SwitchOut` if you need to disassociate a context from the virtual processor root it is executing on, for any reason. Depending on the value you pass in to the parameter `switchState`, and whether or not it is executing on a virtual processor root, the call will either return immediately or block the thread proxy associated with the context. It is an error to call `SwitchOut` with the parameter set to `Idle`. Doing so will result in an [invalid_argument](../../../standard-library/invalid-argument-class.md) exception.

`SwitchOut` is useful when you want to reduce the number of virtual processor roots your scheduler has, either because the Resource Manager has instructed you to do so, or because you requested a temporary oversubscribed virtual processor root, and are done with it. In this case you should invoke the method [IVirtualProcessorRoot::Remove](iexecutionresource-structure.md#remove) on the virtual processor root, before making a call to `SwitchOut` with the parameter `switchState` set to `Blocking`. This will block the thread proxy and it will resume execution when a different virtual processor root in the scheduler is available to execute it. The blocking thread proxy can be resumed by calling the function `SwitchTo` to switch to this thread proxy's execution context. You can also resume the thread proxy, by using its associated context to activate a virtual processor root. For more information on how to do this, see [IVirtualProcessorRoot::Activate](ivirtualprocessorroot-structure.md#activate).

`SwitchOut` may also be used when you want reinitialize the virtual processor so it may be activated in the future while either blocking the thread proxy or temporarily detaching it from the virtual processor root it is running on, and the scheduler it is dispatching work for. Use `SwitchOut` with the parameter `switchState` set to `Blocking` if you wish to block the thread proxy. It can later be resumed using either `SwitchTo` or `IVirtualProcessorRoot::Activate` as noted above. Use `SwitchOut` with the parameter set to `Nesting` when you want to temporarily detach this thread proxy from the virtual processor root it is running on, and the scheduler the virtual processor is associated with. Calling `SwitchOut` with the parameter `switchState` set to `Nesting` while it is executing on a virtual processor root will cause the root to be reinitialized and the current thread proxy to continue executing without the need for one. The thread proxy is considered to have left the scheduler until it calls the [IThreadProxy::SwitchOut](#switchout) method with `Blocking` at a later point in time. The second call to `SwitchOut` with the parameter set to `Blocking` is intended to return the context to a blocked state so that it can be resumed by either `SwitchTo` or `IVirtualProcessorRoot::Activate` in the scheduler it detached from. Because it was not executing on a virtual processor root, no reinitialization takes place.

A reinitialized virtual processor root is no different from a brand new virtual processor root your scheduler has been granted by the Resource Manager. You can use it for execution by activating it with an execution context using `IVirtualProcessorRoot::Activate`.

`SwitchOut` must be called on the `IThreadProxy` interface that represents the currently executing thread or the results are undefined.

In the libraries and headers that shipped with Visual Studio 2010, this method did not take a parameter and did not reinitialize the virtual processor root. To preserve old behavior, the default parameter value of `Blocking` is supplied.

## <a name="switchto"></a> IThreadProxy::SwitchTo Method

Performs a cooperative context switch from the currently executing context to a different one.

```cpp
virtual void SwitchTo(
    _Inout_ IExecutionContext* pContext,
    SwitchingProxyState switchState) = 0;
```

### Parameters

*pContext*<br/>
The execution context to cooperatively switch to.

*switchState*<br/>
Indicates the state of the thread proxy that is executing the switch. The parameter is of type `SwitchingProxyState`.

### Remarks

Use this method to switch from one execution context to another, from the [IExecutionContext::Dispatch](iexecutioncontext-structure.md#dispatch) method of the first execution context. The method associates the execution context `pContext` with a thread proxy if it is not already associated with one. The ownership of the current thread proxy is determined by the value you specify for the `switchState` argument.

Use the value `Idle` when you want to return the currently executing thread proxy to the Resource Manager. Calling `SwitchTo` with the parameter `switchState` set to `Idle` will cause the execution context `pContext` to start executing on the underlying execution resource. Ownership of this thread proxy is transferred to the Resource Manager, and you are expected to return from the execution context's `Dispatch` method soon after `SwitchTo` returns, in order to complete the transfer. The execution context that the thread proxy was dispatching is disassociated from the thread proxy, and the scheduler is free to reuse it or destroy it as it sees fit.

Use the value `Blocking` when you want this thread proxy to enter a blocked state. Calling `SwitchTo` with the parameter `switchState` set to `Blocking` will cause the execution context `pContext` to start executing, and block the current thread proxy until it is resumed. The scheduler retains ownership of the thread proxy when the thread proxy is in the `Blocking` state. The blocking thread proxy can be resumed by calling the function `SwitchTo` to switch to this thread proxy's execution context. You can also resume the thread proxy, by using its associated context to activate a virtual processor root. For more information on how to do this, see [IVirtualProcessorRoot::Activate](ivirtualprocessorroot-structure.md#activate).

Use the value `Nesting` when you want to temporarily detach this thread proxy from the virtual processor root it is running on, and the scheduler it is dispatching work for. Calling `SwitchTo` with the parameter `switchState` set to `Nesting` will cause the execution context `pContext` to start executing and the current thread proxy also continues executing without the need for a virtual processor root. The thread proxy is considered to have left the scheduler until it calls the [IThreadProxy::SwitchOut](#switchout) method at a later point in time. The `IThreadProxy::SwitchOut` method could block the thread proxy until a virtual processor root is available to reschedule it.

`SwitchTo` must be called on the `IThreadProxy` interface that represents the currently executing thread or the results are undefined. The function throws `invalid_argument` if the parameter `pContext` is set to `NULL`.

## <a name="yieldtosystem"></a> IThreadProxy::YieldToSystem Method

Causes the calling thread to yield execution to another thread that is ready to run on the current processor. The operating system selects the next thread to be executed.

```cpp
virtual void YieldToSystem() = 0;
```

### Remarks

When called by a thread proxy backed by a regular Windows thread, `YieldToSystem` behaves exactly like the Windows function `SwitchToThread`. However, when called from user-mode schedulable (UMS) threads, the `SwitchToThread` function delegates the task of picking the next thread to run to the user mode scheduler, not the operating system. To achieve the desired effect of switching to a different ready thread in the system, use `YieldToSystem`.

`YieldToSystem` must be called on the `IThreadProxy` interface that represents the currently executing thread or the results are undefined.

## See also

[concurrency Namespace](concurrency-namespace.md)<br/>
[IExecutionContext Structure](iexecutioncontext-structure.md)<br/>
[IScheduler Structure](ischeduler-structure.md)<br/>
[IVirtualProcessorRoot Structure](ivirtualprocessorroot-structure.md)
