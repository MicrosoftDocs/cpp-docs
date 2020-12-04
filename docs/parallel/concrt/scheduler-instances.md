---
description: "Learn more about: Scheduler Instances"
title: "Scheduler Instances"
ms.date: "11/04/2016"
helpviewer_keywords: ["scheduler instances"]
ms.assetid: 4819365f-ef99-49cc-963e-50a2a35a8d6b
---
# Scheduler Instances

This document describes the role of scheduler instances in the Concurrency Runtime and how to use the [concurrency::Scheduler](../../parallel/concrt/reference/scheduler-class.md) and [concurrency::CurrentScheduler](../../parallel/concrt/reference/currentscheduler-class.md) classes to create and manage scheduler instances. Scheduler instances are useful when you want to associate explicit scheduling policies with specific types of workloads. For example, you can create one scheduler instance to run some tasks at an elevated thread priority and use the default scheduler to run other tasks at the normal thread priority.

> [!TIP]
> The Concurrency Runtime provides a default scheduler, and therefore you are not required to create one in your application. Because the Task Scheduler helps you fine-tune the performance of your applications, we recommend that you start with the [Parallel Patterns Library (PPL)](../../parallel/concrt/parallel-patterns-library-ppl.md) or the [Asynchronous Agents Library](../../parallel/concrt/asynchronous-agents-library.md) if you are new to the Concurrency Runtime.

## <a name="top"></a> Sections

- [The Scheduler and CurrentScheduler Classes](#classes)

- [Creating a Scheduler Instance](#creating)

- [Managing the Lifetime of a Scheduler Instance](#managing)

- [Methods and Features](#features)

- [Example](#example)

## <a name="classes"></a> The Scheduler and CurrentScheduler Classes

The Task Scheduler enables applications to use one or more *scheduler instances* to schedule work. The [concurrency::Scheduler](../../parallel/concrt/reference/scheduler-class.md) class represents a scheduler instance and encapsulates the functionality that is related to scheduling tasks.

A thread that is attached to a scheduler is known as an *execution context*, or just *context*. One scheduler can be active on the current context at any time. The active scheduler is also known as the *current scheduler*. The Concurrency Runtime uses the [concurrency::CurrentScheduler](../../parallel/concrt/reference/currentscheduler-class.md) class to provide access to the current scheduler. The current scheduler for one context can differ from the current scheduler for another context. The runtime does not provide a process-level representation of the current scheduler.

Typically, the `CurrentScheduler` class is used to access the current scheduler. The `Scheduler` class is useful when you need to manage a scheduler that is not the current one.

The following sections describe how to create and manage a scheduler instance. For a complete example that illustrates these tasks, see [How to: Manage a Scheduler Instance](../../parallel/concrt/how-to-manage-a-scheduler-instance.md).

[[Top](#top)]

## <a name="creating"></a> Creating a Scheduler Instance

There are these three ways to create a `Scheduler` object:

- If no scheduler exists, the runtime creates a default scheduler for you when you use runtime functionality, for example, a parallel algorithm, to perform work. The default scheduler becomes the current scheduler for the context that initiates the parallel work.

- The [concurrency::CurrentScheduler::Create](reference/currentscheduler-class.md#create) method creates a `Scheduler` object that uses a specific policy and associates that scheduler with the current context.

- The [concurrency::Scheduler::Create](reference/scheduler-class.md#create) method creates a `Scheduler` object that uses a specific policy, but does not associate it with the current context.

Allowing the runtime to create a default scheduler enables all concurrent tasks to share the same scheduler. Typically, the functionality that is provided by the [Parallel Patterns Library](../../parallel/concrt/parallel-patterns-library-ppl.md) (PPL) or the [Asynchronous Agents Library](../../parallel/concrt/asynchronous-agents-library.md) is used to perform parallel work. Therefore, you do not have to work directly with the scheduler to control its policy or lifetime. When you use the PPL or the Agents Library, the runtime creates the default scheduler if it does not exist and makes it the current scheduler for each context. When you create a scheduler and set it as the current scheduler, then the runtime uses that scheduler to schedule tasks. Create additional scheduler instances only when you require a specific scheduling policy. For more information about the policies that are associated with a scheduler, see [Scheduler Policies](../../parallel/concrt/scheduler-policies.md).

[[Top](#top)]

## <a name="managing"></a> Managing the Lifetime of a Scheduler Instance

The runtime uses a reference-counting mechanism to control the lifetime of `Scheduler` objects.

When you use the `CurrentScheduler::Create` method or the `Scheduler::Create` method to create a `Scheduler` object, the runtime sets the initial reference count of that scheduler to one. The runtime increments the reference count when you call the [concurrency::Scheduler::Attach](reference/scheduler-class.md#attach) method. The `Scheduler::Attach` method associates the `Scheduler` object together with the current context. This makes it the current scheduler. When you call the `CurrentScheduler::Create` method, the runtime both creates a `Scheduler` object and attaches it to the current context (and sets the reference count to one). You can also use the [concurrency::Scheduler::Reference](reference/scheduler-class.md#reference) method to increment the reference count of a `Scheduler` object.

The runtime decrements the reference count when you call the [concurrency::CurrentScheduler::Detach](reference/currentscheduler-class.md#detach) method to detach the current scheduler, or call the [concurrency::Scheduler::Release](reference/scheduler-class.md#release) method. When the reference count reaches zero, the runtime destroys the `Scheduler` object after all scheduled tasks finish. A running task is allowed to increment the reference count of the current scheduler. Therefore, if the reference count reaches zero and a task increments the reference count, the runtime does not destroy the `Scheduler` object until the reference count again reaches zero and all tasks finish.

The runtime maintains an internal stack of `Scheduler` objects for each context. When you call the `Scheduler::Attach` or `CurrentScheduler::Create` method, the runtime pushes that `Scheduler` object onto the stack for the current context. This makes it the current scheduler. When you call `CurrentScheduler::Detach`, the runtime pops the current scheduler from the stack for current context and sets the previous one as the current scheduler.

The runtime provides several ways to manage the lifetime of a scheduler instance. The following table shows the appropriate method that releases or detaches the scheduler from the current context for each method that creates or attaches a scheduler to the current context.

|Create or attach method|Release or detach method|
|-----------------------------|------------------------------|
|`CurrentScheduler::Create`|`CurrentScheduler::Detach`|
|`Scheduler::Create`|`Scheduler::Release`|
|`Scheduler::Attach`|`CurrentScheduler::Detach`|
|`Scheduler::Reference`|`Scheduler::Release`|

Calling the inappropriate release or detach method produces unspecified behavior in the runtime.

When you use functionality, for example, the PPL, that causes the runtime to create the default scheduler for you, do not release or detach this scheduler. The runtime manages the lifetime of any scheduler that it creates.

Because the runtime does not destroy a `Scheduler` object before all tasks have finished, you can use the [concurrency::Scheduler::RegisterShutdownEvent](reference/scheduler-class.md#registershutdownevent) method or the [concurrency::CurrentScheduler::RegisterShutdownEvent](reference/currentscheduler-class.md#registershutdownevent) method to receive a notification when a `Scheduler` object is destroyed. This is useful when you must wait for every task that is scheduled by a `Scheduler` object to finish.

[[Top](#top)]

## <a name="features"></a> Methods and Features

This section summarizes the important methods of the `CurrentScheduler` and `Scheduler` classes.

Think of the `CurrentScheduler` class as a helper for creating a scheduler for use on the current context. The `Scheduler` class lets you control a scheduler that belongs to another context.

The following table shows the important methods that are defined by the `CurrentScheduler` class.

|Method|Description|
|------------|-----------------|
|[Create](reference/currentscheduler-class.md#create)|Creates a `Scheduler` object that uses the specified policy and associates it with the current context.|
|[Get](reference/currentscheduler-class.md#get)|Retrieves a pointer to the `Scheduler` object that is associated with the current context. This method does not increment the reference count of the `Scheduler` object.|
|[Detach](reference/currentscheduler-class.md#detach)|Detaches the current scheduler from the current context and sets the previous one as the current scheduler.|
|[RegisterShutdownEvent](reference/currentscheduler-class.md#registershutdownevent)|Registers an event that the runtime sets when the current scheduler is destroyed.|
|[CreateScheduleGroup](reference/currentscheduler-class.md#createschedulegroup)|Creates a [concurrency::ScheduleGroup](../../parallel/concrt/reference/schedulegroup-class.md) object in the current scheduler.|
|[ScheduleTask](reference/currentscheduler-class.md#scheduletask)|Adds a lightweight task to the scheduling queue of the current scheduler.|
|[GetPolicy](reference/currentscheduler-class.md#getpolicy)|Retrieves a copy of the policy that is associated with the current scheduler.|

The following table shows the important methods that are defined by the `Scheduler` class.

|Method|Description|
|------------|-----------------|
|[Create](reference/scheduler-class.md#create)|Creates a `Scheduler` object that uses the specified policy.|
|[Attach](reference/scheduler-class.md#attach)|Associates the `Scheduler` object together with the current context.|
|[Reference](reference/scheduler-class.md#reference)|Increments the reference counter of the `Scheduler` object.|
|[Release](reference/scheduler-class.md#release)|Decrements the reference counter of the `Scheduler` object.|
|[RegisterShutdownEvent](reference/scheduler-class.md#registershutdownevent)|Registers an event that the runtime sets when the `Scheduler` object is destroyed.|
|[CreateScheduleGroup](reference/scheduler-class.md#createschedulegroup)|Creates a [concurrency::ScheduleGroup](../../parallel/concrt/reference/schedulegroup-class.md) object in the `Scheduler` object.|
|[ScheduleTask](reference/scheduler-class.md#scheduletask)|Schedules a lightweight task from the `Scheduler` object.|
|[GetPolicy](reference/scheduler-class.md#getpolicy)|Retrieves a copy of the policy that is associated with the `Scheduler` object.|
|[SetDefaultSchedulerPolicy](reference/scheduler-class.md#setdefaultschedulerpolicy)|Sets the policy for the runtime to use when it creates the default scheduler.|
|[ResetDefaultSchedulerPolicy](reference/scheduler-class.md#resetdefaultschedulerpolicy)|Restores the default policy to the one that was active before the call to `SetDefaultSchedulerPolicy`. If the default scheduler is created after this call, the runtime uses default policy settings to create the scheduler.|

[[Top](#top)]

## <a name="example"></a> Example

For basic examples of how to create and manage a scheduler instance, see [How to: Manage a Scheduler Instance](../../parallel/concrt/how-to-manage-a-scheduler-instance.md).

## See also

[Task Scheduler](../../parallel/concrt/task-scheduler-concurrency-runtime.md)<br/>
[How to: Manage a Scheduler Instance](../../parallel/concrt/how-to-manage-a-scheduler-instance.md)<br/>
[Scheduler Policies](../../parallel/concrt/scheduler-policies.md)<br/>
[Schedule Groups](../../parallel/concrt/schedule-groups.md)
