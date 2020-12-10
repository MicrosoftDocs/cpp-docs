---
description: "Learn more about: IScheduler Structure"
title: "IScheduler Structure"
ms.date: "11/04/2016"
f1_keywords: ["IScheduler", "CONCRTRM/concurrency::IScheduler", "CONCRTRM/concurrency::IScheduler::IScheduler::AddVirtualProcessors", "CONCRTRM/concurrency::IScheduler::IScheduler::GetId", "CONCRTRM/concurrency::IScheduler::IScheduler::GetPolicy", "CONCRTRM/concurrency::IScheduler::IScheduler::NotifyResourcesExternallyBusy", "CONCRTRM/concurrency::IScheduler::IScheduler::NotifyResourcesExternallyIdle", "CONCRTRM/concurrency::IScheduler::IScheduler::RemoveVirtualProcessors", "CONCRTRM/concurrency::IScheduler::IScheduler::Statistics"]
helpviewer_keywords: ["IScheduler structure"]
ms.assetid: 471de85a-2b1a-4b6d-ab81-2eff2737161e
---
# IScheduler Structure

An interface to an abstraction of a work scheduler. The Concurrency Runtime's Resource Manager uses this interface to communicate with work schedulers.

## Syntax

```cpp
struct IScheduler;
```

## Members

### Public Methods

|Name|Description|
|----------|-----------------|
|[IScheduler::AddVirtualProcessors](#addvirtualprocessors)|Provides a scheduler with a set of virtual processor roots for its use. Each `IVirtualProcessorRoot` interface represents the right to execute a single thread that can perform work on behalf of the scheduler.|
|[IScheduler::GetId](#getid)|Returns a unique identifier for the scheduler.|
|[IScheduler::GetPolicy](#getpolicy)|Returns a copy of the scheduler's policy. For more information on scheduler policies, see [SchedulerPolicy](schedulerpolicy-class.md).|
|[IScheduler::NotifyResourcesExternallyBusy](#notifyresourcesexternallybusy)|Notifies this scheduler that the hardware threads represented by the set of virtual processor roots in the array `ppVirtualProcessorRoots` are now being used by other schedulers.|
|[IScheduler::NotifyResourcesExternallyIdle](#notifyresourcesexternallyidle)|Notifies this scheduler that the hardware threads represented by the set of virtual processor roots in the array `ppVirtualProcessorRoots` are not being used by other schedulers.|
|[IScheduler::RemoveVirtualProcessors](#removevirtualprocessors)|Initiates the removal of virtual processor roots that were previously allocated to this scheduler.|
|[IScheduler::Statistics](#statistics)|Provides information related to task arrival and completion rates, and change in queue length for a scheduler.|

## Remarks

If you are implementing a custom scheduler that communicates with the Resource Manager, you should provide an implementation of the `IScheduler` interface. This interface is one end of a two-way channel of communication between a scheduler and the Resource Manager. The other end is represented by the `IResourceManager` and `ISchedulerProxy` interfaces which are implemented by the Resource Manager.

## Inheritance Hierarchy

`IScheduler`

## Requirements

**Header:** concrtrm.h

**Namespace:** concurrency

## <a name="addvirtualprocessors"></a> IScheduler::AddVirtualProcessors Method

Provides a scheduler with a set of virtual processor roots for its use. Each `IVirtualProcessorRoot` interface represents the right to execute a single thread that can perform work on behalf of the scheduler.

```cpp
virtual void AddVirtualProcessors(
    _In_reads_(count) IVirtualProcessorRoot** ppVirtualProcessorRoots,
    unsigned int count) = 0;
```

### Parameters

*ppVirtualProcessorRoots*<br/>
An array of `IVirtualProcessorRoot` interfaces representing the virtual processor roots being added to the scheduler.

*count*<br/>
The number of `IVirtualProcessorRoot` interfaces in the array.

### Remarks

The Resource Manager invokes the `AddVirtualProcessor` method to grant an initial set of virtual processor roots to a scheduler. It could also invoke the method to add virtual processor roots to the scheduler when it rebalances resources among schedulers.

## <a name="getid"></a> IScheduler::GetId Method

Returns a unique identifier for the scheduler.

```cpp
virtual unsigned int GetId() const = 0;
```

### Return Value

A unique integer identifier.

### Remarks

You should use the [GetSchedulerId](concurrency-namespace-functions.md) function to obtain a unique identifier for the object that implements the `IScheduler` interface, before you use the interface as a parameter to methods supplied by the Resource Manager. You are expected to return the same identifier when the `GetId` function is invoked.

An identifier obtained from a different source could result in undefined behavior.

## <a name="getpolicy"></a> IScheduler::GetPolicy Method

Returns a copy of the scheduler's policy. For more information on scheduler policies, see [SchedulerPolicy](schedulerpolicy-class.md).

```cpp
virtual SchedulerPolicy GetPolicy() const = 0;
```

### Return Value

A copy of the scheduler's policy.

## <a name="notifyresourcesexternallybusy"></a> IScheduler::NotifyResourcesExternallyBusy Method

Notifies this scheduler that the hardware threads represented by the set of virtual processor roots in the array `ppVirtualProcessorRoots` are now being used by other schedulers.

```cpp
virtual void NotifyResourcesExternallyBusy(
    _In_reads_(count) IVirtualProcessorRoot** ppVirtualProcessorRoots,
    unsigned int count) = 0;
```

### Parameters

*ppVirtualProcessorRoots*<br/>
An array of `IVirtualProcessorRoot` interfaces associated with the hardware threads on which other schedulers have become busy.

*count*<br/>
The number of `IVirtualProcessorRoot` interfaces in the array.

### Remarks

It is possible for a particular hardware thread to be assigned to multiple schedulers at the same time. One reason for this could be that there are not enough hardware threads on the system to satisfy the minimum concurrency for all schedulers, without sharing resources. Another possibility is that resources are temporarily assigned to other schedulers when the owning scheduler is not using them, by way of all its virtual processor roots on that hardware thread being deactivated.

The subscription level of a hardware thread is denoted by the number of subscribed threads and activated virtual processor roots associated with that hardware thread. From a particular scheduler's point of view, the external subscription level of a hardware thread is the portion of the subscription other schedulers contribute to. Notifications that resources are externally busy are sent to a scheduler when the external subscription level for a hardware thread moves from zero into positive territory.

Notifications via this method are only sent to schedulers that have a policy where the value for the `MinConcurrency` policy key is equal to the value for the `MaxConcurrency` policy key. For more information on scheduler policies, see [SchedulerPolicy](schedulerpolicy-class.md).

A scheduler that qualifies for notifications gets a set of initial notifications when it is created, informing it whether the resources it was just assigned are externally busy or idle.

## <a name="notifyresourcesexternallyidle"></a> IScheduler::NotifyResourcesExternallyIdle Method

Notifies this scheduler that the hardware threads represented by the set of virtual processor roots in the array `ppVirtualProcessorRoots` are not being used by other schedulers.

```cpp
virtual void NotifyResourcesExternallyIdle(
    _In_reads_(count) IVirtualProcessorRoot** ppVirtualProcessorRoots,
    unsigned int count) = 0;
```

### Parameters

*ppVirtualProcessorRoots*<br/>
An array of `IVirtualProcessorRoot` interfaces associated with hardware threads on which other schedulers have become idle.

*count*<br/>
The number of `IVirtualProcessorRoot` interfaces in the array.

### Remarks

It is possible for a particular hardware thread to be assigned to multiple schedulers at the same time. One reason for this could be that there are not enough hardware threads on the system to satisfy the minimum concurrency for all schedulers, without sharing resources. Another possibility is that resources are temporarily assigned to other schedulers when the owning scheduler is not using them, by way of all its virtual processor roots on that hardware thread being deactivated.

The subscription level of a hardware thread is denoted by the number of subscribed threads and activated virtual processor roots associated with that hardware thread. From a particular scheduler's point of view, the external subscription level of a hardware thread is the portion of the subscription other schedulers contribute to. Notifications that resources are externally busy are sent to a scheduler when the external subscription level for a hardware thread falls to zero from a previous positive value.

Notifications via this method are only sent to schedulers that have a policy where the value for the `MinConcurrency` policy key is equal to the value for the `MaxConcurrency` policy key. For more information on scheduler policies, see [SchedulerPolicy](schedulerpolicy-class.md).

A scheduler that qualifies for notifications gets a set of initial notifications when it is created, informing it whether the resources it was just assigned are externally busy or idle.

## <a name="removevirtualprocessors"></a> IScheduler::RemoveVirtualProcessors Method

Initiates the removal of virtual processor roots that were previously allocated to this scheduler.

```cpp
virtual void RemoveVirtualProcessors(
    _In_reads_(count) IVirtualProcessorRoot** ppVirtualProcessorRoots,
    unsigned int count) = 0;
```

### Parameters

*ppVirtualProcessorRoots*<br/>
An array of `IVirtualProcessorRoot` interfaces representing the virtual processor roots to be removed.

*count*<br/>
The number of `IVirtualProcessorRoot` interfaces in the array.

### Remarks

The Resource Manager invokes the `RemoveVirtualProcessors` method to take back a set of virtual processor roots from a scheduler. The scheduler is expected to invoke the [Remove](iexecutionresource-structure.md#remove) method on each interface when it is done with the virtual processor roots. Do not use an `IVirtualProcessorRoot` interface once you have invoked the `Remove` method on it.

The parameter `ppVirtualProcessorRoots` points to an array of interfaces. Among the set of virtual processor roots to be removed, the roots have never been activated can be returned immediately using the `Remove` method. The roots that have been activated and are either executing work, or have been deactivated and are waiting for work to arrive, should be returned asynchronously. The scheduler must make every attempt to remove the virtual processor root as quickly as possible. Delaying removal of the virtual processor roots may result in unintentional oversubscription within the scheduler.

## <a name="statistics"></a> IScheduler::Statistics Method

Provides information related to task arrival and completion rates, and change in queue length for a scheduler.

```cpp
virtual void Statistics(
    _Out_ unsigned int* pTaskCompletionRate,
    _Out_ unsigned int* pTaskArrivalRate,
    _Out_ unsigned int* pNumberOfTasksEnqueued) = 0;
```

### Parameters

*pTaskCompletionRate*<br/>
The number of tasks that have been completed by the scheduler since the last call to this method.

*pTaskArrivalRate*<br/>
The number of tasks that have arrived in the scheduler since the last call to this method.

*pNumberOfTasksEnqueued*<br/>
The total number of tasks in all scheduler queues.

### Remarks

This method is invoked by the Resource Manager in order to gather statistics for a scheduler. The statistics gathered here will be used to drive dynamic feedback algorithms to determine when it is appropriate to assign more resources to the scheduler and when to take resources away. The values provided by the scheduler can be optimistic and do not necessarily have to reflect the current count accurately.

You should implement this method if you want the Resource Manager to use feedback about such things as task arrival to determine how to balance resource between your scheduler and other schedulers registered with the Resource Manager. If you choose not to gather statistics, you can set the policy key `DynamicProgressFeedback` to the value `DynamicProgressFeedbackDisabled` in your scheduler's policy, and the Resource Manager will not invoke this method on your scheduler.

In the absence of statistical information, the Resource Manager will use hardware thread subscription levels to make resource allocation and migration decisions. For more information on subscription levels, see [IExecutionResource::CurrentSubscriptionLevel](iexecutionresource-structure.md#currentsubscriptionlevel).

## See also

[concurrency Namespace](concurrency-namespace.md)<br/>
[PolicyElementKey](concurrency-namespace-enums.md)<br/>
[SchedulerPolicy Class](schedulerpolicy-class.md)<br/>
[IExecutionContext Structure](iexecutioncontext-structure.md)<br/>
[IThreadProxy Structure](ithreadproxy-structure.md)<br/>
[IVirtualProcessorRoot Structure](ivirtualprocessorroot-structure.md)<br/>
[IResourceManager Structure](iresourcemanager-structure.md)
