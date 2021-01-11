---
description: "Learn more about: IUMSScheduler Structure"
title: "IUMSScheduler Structure"
ms.date: "11/04/2016"
f1_keywords: ["IUMSScheduler", "CONCRTRM/concurrency::IUMSScheduler", "CONCRTRM/concurrency::IUMSScheduler::IUMSScheduler::SetCompletionList"]
helpviewer_keywords: ["IUMSScheduler structure"]
ms.assetid: 3a500225-4e02-4849-bb56-d744865f5870
---
# IUMSScheduler Structure

An interface to an abstraction of a work scheduler that wants the Concurrency Runtime's Resource Manager to hand it user-mode schedulable (UMS) threads. The Resource Manager uses this interface to communicate with UMS thread schedulers. The `IUMSScheduler` interface inherits from the `IScheduler` interface.

## Syntax

```cpp
struct IUMSScheduler : public IScheduler;
```

## Members

### Public Methods

|Name|Description|
|----------|-----------------|
|[IUMSScheduler::SetCompletionList](#setcompletionlist)|Assigns an `IUMSCompletionList` interface to a UMS thread scheduler.|

## Remarks

If you are implementing a custom scheduler that communicates with the Resource Manager, and you want UMS threads to be handed to your scheduler instead of ordinary Win32 threads, you should provide an implementation of the `IUMSScheduler` interface. In addition, you should set the policy value for the scheduler policy key `SchedulerKind` to be `UmsThreadDefault`. If the policy specifies UMS thread, the `IScheduler` interface that is passed as a parameter to the [IResourceManager::RegisterScheduler](iresourcemanager-structure.md#registerscheduler) method must be an `IUMSScheduler` interface.

The Resource Manager is able to hand you UMS threads only on operating systems that have the UMS feature. 64-bit operating systems with version Windows 7 and higher support UMS threads. If you create a scheduler policy with the `SchedulerKind` key set to the value `UmsThreadDefault` and the underlying platform does not support UMS, the value of the `SchedulerKind` key on that policy will be changed to the value `ThreadScheduler`. You should always read back this policy value before expecting to receive UMS threads.

The `IUMSScheduler` interface is one end of a two-way channel of communication between a scheduler and the Resource Manager. The other end is represented by the `IResourceManager` and `ISchedulerProxy` interfaces, which are implemented by the Resource Manager.

## Inheritance Hierarchy

[IScheduler](ischeduler-structure.md)

`IUMSScheduler`

## Requirements

**Header:** concrtrm.h

**Namespace:** concurrency

## <a name="setcompletionlist"></a> IUMSScheduler::SetCompletionList Method

Assigns an `IUMSCompletionList` interface to a UMS thread scheduler.

```cpp
virtual void SetCompletionList(_Inout_ IUMSCompletionList* pCompletionList) = 0;
```

### Parameters

*pCompletionList*<br/>
The completion list interface for the scheduler. There is a single list per scheduler.

### Remarks

The Resource Manager will invoke this method on a scheduler that specifies it wants UMS threads, after the scheduler has requested an initial allocation of resources. The scheduler can use the `IUMSCompletionList` interface to determine when UMS thread proxies have unblocked. It is only valid to access this interface from a thread proxy running on a virtual processor root assigned to the UMS scheduler.

## See also

[concurrency Namespace](concurrency-namespace.md)<br/>
[PolicyElementKey](concurrency-namespace-enums.md)<br/>
[IScheduler Structure](ischeduler-structure.md)<br/>
[IUMSCompletionList Structure](iumscompletionlist-structure.md)<br/>
[IResourceManager Structure](iresourcemanager-structure.md)
