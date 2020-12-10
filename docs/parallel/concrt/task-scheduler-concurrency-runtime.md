---
description: "Learn more about: Task Scheduler (Concurrency Runtime)"
title: "Task Scheduler (Concurrency Runtime)"
ms.date: "11/04/2016"
helpviewer_keywords: ["oversubscription [Concurrency Runtime]", "task scheduler [Concurrency Runtime], oversubscription", "schedule groups [Concurrency Runtime]", "task scheduler [Concurrency Runtime], lightweight tasks", "task scheduler [Concurrency Runtime]", "lightweight tasks [Concurrency Runtime]", "task scheduler [Concurrency Runtime], scheduler policies", "task scheduler [Concurrency Runtime], schedule groups", "wait function [Concurrency Runtime]", "task scheduler [Concurrency Runtime], scheduler instances", "scheduler instances [Concurrency Runtime]", "scheduler policies [Concurrency Runtime]", "task scheduler [Concurrency Runtime], wait function"]
ms.assetid: 9aba278c-e0c9-4ede-b7c6-fedf7a365d90
---
# Task Scheduler (Concurrency Runtime)

The topics in this part of the documentation describe the important features of the Concurrency Runtime Task Scheduler. The Task Scheduler is useful when you want fine-tune the performance of your existing code that uses the Concurrency Runtime.

> [!IMPORTANT]
> The Task Scheduler is not available from a Universal Windows Platform (UWP) app. For more information, see [Creating Asynchronous Operations in C++ for UWP Apps](../../parallel/concrt/creating-asynchronous-operations-in-cpp-for-windows-store-apps.md).
>
> In Visual Studio 2015 and later, the [concurrency::task](../../parallel/concrt/reference/task-class.md) class and related types in ppltasks.h use the Windows ThreadPool as their scheduler. This topic no longer applies to types that are defined in ppltasks.h. Parallel algorithms such as parallel_for continue to use the Concurrency Runtime as the default scheduler.

> [!TIP]
> The Concurrency Runtime provides a default scheduler, and therefore you are not required to create one in your application. Because the Task Scheduler helps you fine-tune the performance of your applications, we recommend that you start with the [Parallel Patterns Library (PPL)](../../parallel/concrt/parallel-patterns-library-ppl.md) or the [Asynchronous Agents Library](../../parallel/concrt/asynchronous-agents-library.md) if you are new to the Concurrency Runtime.

The Task Scheduler schedules and coordinates tasks at run time. A *task* is a unit of work that performs a specific job. A task can typically run in parallel with other tasks. The work that is performed by task group items, parallel algorithms, and asynchronous agents are all examples of tasks.

The Task Scheduler manages the details that are related to efficiently scheduling tasks on computers that have multiple computing resources. The Task Scheduler also uses the newest features of the underlying operating system. Therefore, applications that use the Concurrency Runtime automatically scale and improve on hardware that has expanded capabilities.

[Comparing to Other Concurrency Models](../../parallel/concrt/comparing-the-concurrency-runtime-to-other-concurrency-models.md) describes the differences between preemptive and cooperative scheduling mechanisms. The Task Scheduler uses cooperative scheduling and a work-stealing algorithm together with the preemptive scheduler of the operating system to achieve maximum usage of processing resources.

The Concurrency Runtime provides a default scheduler so that you do not have to manage infrastructure details. Therefore, you typically do not use the Task Scheduler directly. However, to meet the quality needs of your application, you can use the Task Scheduler to provide your own scheduling policy or associate schedulers with specific tasks. For example, suppose you have a parallel sorting routine that does not scale beyond four processors. You can use *scheduler policies* to create a scheduler that generates no more than four concurrent tasks. Running the sorting routine on this scheduler enables other active schedulers to use any remaining processing resources.

## Related Topics

|Title|Description|
|-----------|-----------------|
|[Scheduler Instances](../../parallel/concrt/scheduler-instances.md)|Describes scheduler instances and how to use the `concurrency::Scheduler` and `concurrency::CurrentScheduler` classes to manage them. Use scheduler instances when you want to associate explicit scheduling policies with specific types of workloads.|
|[Scheduler Policies](../../parallel/concrt/scheduler-policies.md)|Describes the role of scheduler policies. Use scheduler policies when you want to control the strategy that the scheduler uses when it manages tasks.|
|[Schedule Groups](../../parallel/concrt/schedule-groups.md)|Describes the role of schedule groups. Use schedule groups when you require a high degree of locality among tasks, for example, when a group of related tasks benefit from executing on the same processor node.|
|[Lightweight Tasks](../../parallel/concrt/lightweight-tasks.md)|Describes the role of lightweight tasks. Lightweight tasks are useful when you adapt existing code to use the scheduling functionality of the Concurrency Runtime.|
|[Contexts](../../parallel/concrt/contexts.md)|Describes the role of contexts, the `concurrency::wait` function, and the `concurrency::Context` class. Use this functionality when you need control over when contexts block, unblock, and yield, or when you want to enable oversubscription in your application.|
|[Memory Management Functions](../../parallel/concrt/memory-management-functions.md)|Describes the `concurrency::Alloc` and `concurrency::Free` functions. These functions can improve memory performance by allocating and freeing memory in a concurrent manner.|
|[Comparing to Other Concurrency Models](../../parallel/concrt/comparing-the-concurrency-runtime-to-other-concurrency-models.md)|Describes the differences between preemptive and cooperative scheduling mechanisms.|
|[Parallel Patterns Library (PPL)](../../parallel/concrt/parallel-patterns-library-ppl.md)|Describes how to use various parallel patterns, for example, parallel algorithms, in your applications.|
|[Asynchronous Agents Library](../../parallel/concrt/asynchronous-agents-library.md)|Describes how to use asynchronous agents in your applications.|
|[Concurrency Runtime](../../parallel/concrt/concurrency-runtime.md)|Describes the Concurrency Runtime, which simplifies parallel programming, and contains links to related topics.|
