---
description: "Learn more about: Contexts"
title: "Contexts"
ms.date: "11/04/2016"
helpviewer_keywords: ["contexts [Concurrency Runtime]"]
ms.assetid: 10c1d861-8fbb-4ba0-b2ec-61876b11176e
---
# Contexts

This document describes the role of contexts in the Concurrency Runtime. A thread that is attached to a scheduler is known as an *execution context*, or just *context*. The [concurrency::wait](reference/concurrency-namespace-functions.md#wait) function and the concurrency::[Context class](../../parallel/concrt/reference/context-class.md) enable you to control the behavior of contexts. Use the `wait` function to suspend the current context for a specified time. Use the `Context` class when you need more control over when contexts block, unblock, and yield, or when you want to oversubscribe the current context.

> [!TIP]
> The Concurrency Runtime provides a default scheduler, and therefore you are not required to create one in your application. Because the Task Scheduler helps you fine-tune the performance of your applications, we recommend that you start with the [Parallel Patterns Library (PPL)](../../parallel/concrt/parallel-patterns-library-ppl.md) or the [Asynchronous Agents Library](../../parallel/concrt/asynchronous-agents-library.md) if you are new to the Concurrency Runtime.

## The wait Function

The [concurrency::wait](reference/concurrency-namespace-functions.md#wait) function cooperatively yields the execution of the current context for a specified number of milliseconds. The runtime uses the yield time to perform other tasks. After the specified time has elapsed, the runtime reschedules the context for execution. Therefore, the `wait` function might suspend the current context longer than the value provided for the `milliseconds` parameter.

Passing 0 (zero) for the `milliseconds` parameter causes the runtime to suspend the current context until all other active contexts are given the opportunity to perform work. This lets you yield a task to all other active tasks.

### Example

For an example that uses the `wait` function to yield the current context, and thus allow for other contexts to run, see [How to: Use Schedule Groups to Influence Order of Execution](../../parallel/concrt/how-to-use-schedule-groups-to-influence-order-of-execution.md).

## The Context Class

The concurrency::[Context class](../../parallel/concrt/reference/context-class.md) provides a programming abstraction for an execution context and offers two important features: the ability to cooperatively block, unblock, and yield the current context, and the ability to oversubscribe the current context.

### Cooperative Blocking

The `Context` class lets you block or yield the current execution context. Blocking or yielding is useful when the current context cannot continue because a resource is not available.

The [concurrency::Context::Block](reference/context-class.md#block) method blocks the current context. A context that is blocked yields its processing resources so that the runtime can perform other tasks. The [concurrency::Context::Unblock](reference/context-class.md#unblock) method unblocks a blocked context. The `Context::Unblock` method must be called from a different context than the one that called `Context::Block`. The runtime throws [concurrency::context_self_unblock](../../parallel/concrt/reference/context-self-unblock-class.md) if a context attempts to unblock itself.

To cooperatively block and unblock a context, you typically call [concurrency::Context::CurrentContext](reference/context-class.md#currentcontext) to retrieve a pointer to the `Context` object that is associated with the current thread and save the result. You then call the `Context::Block` method to block the current context. Later, call `Context::Unblock` from a separate context to unblock the blocked context.

You must match each pair of calls to `Context::Block` and `Context::Unblock`. The runtime throws [concurrency::context_unblock_unbalanced](../../parallel/concrt/reference/context-unblock-unbalanced-class.md) when the `Context::Block` or `Context::Unblock` method is called consecutively without a matching call to the other method. However, you do not have to call `Context::Block` before you call `Context::Unblock`. For example, if one context calls `Context::Unblock` before another context calls `Context::Block` for the same context, that context remains unblocked.

The [concurrency::Context::Yield](reference/context-class.md#yield) method yields execution so that the runtime can perform other tasks and then reschedule the context for execution. When you call the `Context::Block` method, the runtime does not reschedule the context.

#### Example

For an example that uses the `Context::Block`, `Context::Unblock`, and `Context::Yield` methods to implement a cooperative semaphore class, see [How to: Use the Context Class to Implement a Cooperative Semaphore](../../parallel/concrt/how-to-use-the-context-class-to-implement-a-cooperative-semaphore.md).

##### Oversubscription

The default scheduler creates the same number of threads as there are available hardware threads. You can use *oversubscription* to create additional threads for a given hardware thread.

For computationally intensive operations, oversubscription typically does not scale because it introduces additional overhead. However, for tasks that have a high amount of latency, for example, reading data from disk or from a network connection, oversubscription can improve the overall efficiency of some applications.

> [!NOTE]
> Enable oversubscription only from a thread that was created by the Concurrency Runtime. Oversubscription has no effect when it is called from a thread that was not created by the runtime (including the main thread).

To enable oversubscription in the current context, call the [concurrency::Context::Oversubscribe](reference/context-class.md#oversubscribe) method with the `_BeginOversubscription` parameter set to **`true`**. When you enable oversubscription on a thread that was created by the Concurrency Runtime, it causes the runtime to create one additional thread. After all tasks that require oversubscription finish, call `Context::Oversubscribe` with the `_BeginOversubscription` parameter set to **`false`**.

You can enable oversubscription multiple times from the current context, but you must disable it the same number of times that you enable it. Oversubscription can also be nested; that is, a task that is created by another task that uses oversubscription can also oversubscribe its context. However, if both a nested task and its parent belong to the same context, only the outermost call to `Context::Oversubscribe` causes the creation of an additional thread.

> [!NOTE]
> The runtime throws [concurrency::invalid_oversubscribe_operation](../../parallel/concrt/reference/invalid-oversubscribe-operation-class.md) if oversubscription is disabled before it is enabled.

###### Example

For an example that uses oversubscription to offset the latency that is caused by reading data from a network connection, see [How to: Use Oversubscription to Offset Latency](../../parallel/concrt/how-to-use-oversubscription-to-offset-latency.md).

## See also

[Task Scheduler](../../parallel/concrt/task-scheduler-concurrency-runtime.md)<br/>
[How to: Use Schedule Groups to Influence Order of Execution](../../parallel/concrt/how-to-use-schedule-groups-to-influence-order-of-execution.md)<br/>
[How to: Use the Context Class to Implement a Cooperative Semaphore](../../parallel/concrt/how-to-use-the-context-class-to-implement-a-cooperative-semaphore.md)<br/>
[How to: Use Oversubscription to Offset Latency](../../parallel/concrt/how-to-use-oversubscription-to-offset-latency.md)
