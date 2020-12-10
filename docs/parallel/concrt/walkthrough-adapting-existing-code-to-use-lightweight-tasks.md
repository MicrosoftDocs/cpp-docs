---
description: "Learn more about: Walkthrough: Adapting Existing Code to Use Lightweight Tasks"
title: "Walkthrough: Adapting Existing Code to Use Lightweight Tasks"
ms.date: "04/25/2019"
helpviewer_keywords: ["using lightweight tasks [Concurrency Runtime]", "lightweight tasks, using [Concurrency Runtime]"]
ms.assetid: 1edfe818-d274-46de-bdd3-e92967c9bbe0
---
# Walkthrough: Adapting Existing Code to Use Lightweight Tasks

This topic shows how to adapt existing code that uses the Windows API to create and execute a thread to use a lightweight task.

A *lightweight task* is a task that you schedule directly from a [concurrency::Scheduler](../../parallel/concrt/reference/scheduler-class.md) or [concurrency::ScheduleGroup](../../parallel/concrt/reference/schedulegroup-class.md) object. Lightweight tasks are useful when you adapt existing code to use the scheduling functionality of the Concurrency Runtime.

## Prerequisites

Before you start this walkthrough, read the topic [Task Scheduler](../../parallel/concrt/task-scheduler-concurrency-runtime.md).

## Example

The following example illustrates typical usage of the Windows API to create and execute a thread. This example uses the [CreateThread](/windows/win32/api/processthreadsapi/nf-processthreadsapi-createthread) function to call the `MyThreadFunction` on a separate thread.

### Initial code

[!code-cpp[concrt-windows-threads#1](../../parallel/concrt/codesnippet/cpp/walkthrough-adapting-existing-code-to-use-lightweight-tasks_1.cpp)]

This example produces the following output.

```Output
Parameters = 50, 100
```

The following steps show how to adapt the code example to use the Concurrency Runtime to perform the same task.

### To adapt the example to use a lightweight task

1. Add a `#include` directive for the header file concrt.h.

[!code-cpp[concrt-migration-lwt#2](../../parallel/concrt/codesnippet/cpp/walkthrough-adapting-existing-code-to-use-lightweight-tasks_2.cpp)]

1. Add a **`using`** directive for the `concurrency` namespace.

[!code-cpp[concrt-migration-lwt#3](../../parallel/concrt/codesnippet/cpp/walkthrough-adapting-existing-code-to-use-lightweight-tasks_3.cpp)]

1. Change the declaration of `MyThreadFunction` to use the **`__cdecl`** calling convention and to return **`void`**.

[!code-cpp[concrt-migration-lwt#4](../../parallel/concrt/codesnippet/cpp/walkthrough-adapting-existing-code-to-use-lightweight-tasks_4.cpp)]

1. Modify the `MyData` structure to include a [concurrency::event](../../parallel/concrt/reference/event-class.md) object that signals to the main application that the task has finished.

[!code-cpp[concrt-migration-lwt#5](../../parallel/concrt/codesnippet/cpp/walkthrough-adapting-existing-code-to-use-lightweight-tasks_5.cpp)]

1. Replace the call to `CreateThread` with a call to the [concurrency::CurrentScheduler::ScheduleTask](reference/currentscheduler-class.md#scheduletask) method.

[!code-cpp[concrt-migration-lwt#6](../../parallel/concrt/codesnippet/cpp/walkthrough-adapting-existing-code-to-use-lightweight-tasks_6.cpp)]

1. Replace the call to `WaitForSingleObject` with a call to the [concurrency::event::wait](reference/event-class.md#wait) method to wait for the task to finish.

[!code-cpp[concrt-migration-lwt#7](../../parallel/concrt/codesnippet/cpp/walkthrough-adapting-existing-code-to-use-lightweight-tasks_7.cpp)]

1. Remove the call to `CloseHandle`.

1. Change the signature of the definition of `MyThreadFunction` to match step 3.

[!code-cpp[concrt-migration-lwt#8](../../parallel/concrt/codesnippet/cpp/walkthrough-adapting-existing-code-to-use-lightweight-tasks_8.cpp)]

1. At the end of the `MyThreadFunction` function, call the [concurrency::event::set](reference/event-class.md#set) method to signal to the main application that the task has finished.

[!code-cpp[concrt-migration-lwt#9](../../parallel/concrt/codesnippet/cpp/walkthrough-adapting-existing-code-to-use-lightweight-tasks_9.cpp)]

1. Remove the **`return`** statement from `MyThreadFunction`.

### Completed code

The following completed example shows code that uses a lightweight task to call the `MyThreadFunction` function.

[!code-cpp[concrt-migration-lwt#1](../../parallel/concrt/codesnippet/cpp/walkthrough-adapting-existing-code-to-use-lightweight-tasks_10.cpp)]

## See also

[Task Scheduler](../../parallel/concrt/task-scheduler-concurrency-runtime.md)<br/>
[Scheduler Class](../../parallel/concrt/reference/scheduler-class.md)
