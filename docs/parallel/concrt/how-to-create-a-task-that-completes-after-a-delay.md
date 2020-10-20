---
title: "How to: Create a task that completes after a delay"
description: "Create a task that completes after a delay by using the PPL ConcRT library."
ms.date: 10/19/2020
helpviewer_keywords: ["task_completion_event class, example", "create a task that completes after a delay, example [C++]"]
ms.assetid: 3fc0a194-3fdb-4eba-8b8a-b890981a985d
---
# How to: Create a task that completes after a delay

This example shows how to use the [`concurrency::task`](../../parallel/concrt/reference/task-class.md), [`concurrency::cancellation_token_source`](../../parallel/concrt/reference/cancellation-token-source-class.md), [`concurrency::cancellation_token`](../../parallel/concrt/reference/cancellation-token-class.md), [`concurrency::task_completion_event`](../../parallel/concrt/reference/task-completion-event-class.md), [`concurrency::timer`](../../parallel/concrt/reference/timer-class.md), and [`concurrency::call`](../../parallel/concrt/reference/call-class.md) classes to create a task that completes after a delay. You can use this method to build loops that occasionally poll for data. You can also introduce timeouts, delay handling of user input for a predetermined time, and so on.

## Example: complete_after and cancel_after_timeout functions

The following example shows the `complete_after` and `cancel_after_timeout` functions. The `complete_after` function creates a `task` object that completes after the specified delay. It uses a `timer` object and a `call` object to set a `task_completion_event` object after the specified delay. By using the `task_completion_event` class, you can define a task that completes after a thread or another task signals that a value is available. When the event is set, listener tasks complete and their continuations are scheduled to run.

> [!TIP]
> For more information about the `timer` and `call` classes, which are part of the Asynchronous Agents Library, see [Asynchronous Message Blocks](../../parallel/concrt/asynchronous-message-blocks.md).

The `cancel_after_timeout` function builds on the `complete_after` function to cancel a task if that task doesn't complete before a given timeout. The `cancel_after_timeout` function creates two tasks. The first task indicates success and completes after the provided task completes. The second task indicates failure and completes after the specified timeout. The `cancel_after_timeout` function creates a continuation task that runs when the success or failure task completes. If the failure task completes first, the continuation cancels the token source to cancel the overall task.

[!code-cpp[concrt-task-delay#1](../../parallel/concrt/codesnippet/cpp/how-to-create-a-task-that-completes-after-a-delay_1.cpp)]

## Example: Compute count of prime numbers

The following example computes the count of prime numbers in the range [0, 100000] multiple times. The operation fails if it doesn't complete in a given time limit. The `count_primes` function demonstrates how to use the `cancel_after_timeout` function. It counts the number of primes in the given range and fails if the task doesn't complete in the provided time. The `wmain` function calls the `count_primes` function multiple times. Each time, it halves the time limit. The program finishes after the operation doesn't complete in the current time limit.

[!code-cpp[concrt-task-delay#2](../../parallel/concrt/codesnippet/cpp/how-to-create-a-task-that-completes-after-a-delay_2.cpp)]

When you use this technique to cancel tasks after a delay, any unstarted tasks won't start after the overall task is canceled. However, it's important for any long-running tasks to respond to cancellation quickly. For more information about task cancellation, see [Cancellation in the PPL](cancellation-in-the-ppl.md).

## Complete code example

Here is the complete code for this example:

[!code-cpp[concrt-task-delay#3](../../parallel/concrt/codesnippet/cpp/how-to-create-a-task-that-completes-after-a-delay_3.cpp)]

## Compiling the Code

To compile the code, copy it and then paste it in a Visual Studio project, or paste it in a file that is named `task-delay.cpp` and then run the following command in a Visual Studio Command Prompt window.

**cl.exe /EHsc task-delay.cpp**

## See also

[Task Parallelism](../../parallel/concrt/task-parallelism-concurrency-runtime.md)<br/>
[task Class (Concurrency Runtime)](../../parallel/concrt/reference/task-class.md)<br/>
[cancellation_token_source Class](../../parallel/concrt/reference/cancellation-token-source-class.md)<br/>
[cancellation_token Class](../../parallel/concrt/reference/cancellation-token-class.md)<br/>
[task_completion_event Class](../../parallel/concrt/reference/task-completion-event-class.md)<br/>
[timer Class](../../parallel/concrt/reference/timer-class.md)<br/>
[call Class](../../parallel/concrt/reference/call-class.md)<br/>
[Asynchronous Message Blocks](../../parallel/concrt/asynchronous-message-blocks.md)<br/>
[Cancellation in the PPL](cancellation-in-the-ppl.md)
