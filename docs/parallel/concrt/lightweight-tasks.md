---
description: "Learn more about: Lightweight Tasks"
title: "Lightweight Tasks"
ms.date: "11/04/2016"
helpviewer_keywords: ["lightweight tasks"]
ms.assetid: b6dcfc7a-9fa9-4144-96a6-2845ea272017
---
# Lightweight Tasks

This document describes the role of lightweight tasks in the Concurrency Runtime. A *lightweight task* is a task that you schedule directly from a `concurrency::Scheduler` or `concurrency::ScheduleGroup` object. A lightweight task resembles the function that you provide to the Windows API [CreateThread](/windows/win32/api/processthreadsapi/nf-processthreadsapi-createthread) function. Therefore, lightweight tasks are useful when you adapt existing code to use the scheduling functionality of the Concurrency Runtime. The Concurrency Runtime itself uses lightweight tasks to schedule asynchronous agents and send messages between asynchronous message blocks.

> [!TIP]
> The Concurrency Runtime provides a default scheduler, and therefore you are not required to create one in your application. Because the Task Scheduler helps you fine-tune the performance of your applications, we recommend that you start with the [Parallel Patterns Library (PPL)](../../parallel/concrt/parallel-patterns-library-ppl.md) or the [Asynchronous Agents Library](../../parallel/concrt/asynchronous-agents-library.md) if you are new to the Concurrency Runtime.

Lightweight tasks carry less overhead than asynchronous agents and task groups. For example, the runtime does not inform you when a lightweight task finishes. In addition, the runtime does not catch or handle exceptions that are thrown from a lightweight task. For more information about exception handling and lightweight tasks, see [Exception Handling](../../parallel/concrt/exception-handling-in-the-concurrency-runtime.md).

For most tasks, we recommend that you use more robust functionality such as task groups and parallel algorithms because they let you more easily break complex tasks into more basic ones. For more information about task groups, see [Task Parallelism](../../parallel/concrt/task-parallelism-concurrency-runtime.md). For more information about parallel algorithms, see [Parallel Algorithms](../../parallel/concrt/parallel-algorithms.md).

To create a lightweight task, call the [concurrency::ScheduleGroup::ScheduleTask](reference/schedulegroup-class.md#scheduletask), [concurrency::CurrentScheduler::ScheduleTask](reference/currentscheduler-class.md#scheduletask), or [concurrency::Scheduler::ScheduleTask](reference/scheduler-class.md#scheduletask) method. To wait for a lightweight task to finish, wait for the parent scheduler to shut down or use a synchronization mechanism such as a [concurrency::event](../../parallel/concrt/reference/event-class.md) object.

## Example

For an example that demonstrates how to adapt existing code to use a lightweight task, see [Walkthrough: Adapting Existing Code to Use Lightweight Tasks](../../parallel/concrt/walkthrough-adapting-existing-code-to-use-lightweight-tasks.md).

## See also

[Task Scheduler](../../parallel/concrt/task-scheduler-concurrency-runtime.md)<br/>
[Walkthrough: Adapting Existing Code to Use Lightweight Tasks](../../parallel/concrt/walkthrough-adapting-existing-code-to-use-lightweight-tasks.md)
