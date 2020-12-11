---
description: "Learn more about: Cancellation in the PPL"
title: "Cancellation in the PPL"
ms.date: "11/19/2018"
helpviewer_keywords: ["parallel algorithms, canceling [Concurrency Runtime]", "canceling parallel algorithms [Concurrency Runtime]", "parallel tasks, canceling [Concurrency Runtime]", "cancellation in the PPL", "parallel work trees [Concurrency Runtime]", "canceling parallel tasks [Concurrency Runtime]"]
ms.assetid: baaef417-b2f9-470e-b8bd-9ed890725b35
---
# Cancellation in the PPL

This document explains the role of cancellation in the Parallel Patterns Library (PPL), how to cancel parallel work, and how to determine when parallel work is canceled.

> [!NOTE]
> The runtime uses exception handling to implement cancellation. Do not catch or handle these exceptions in your code. In addition, we recommend that you write exception-safe code in the function bodies for your tasks. For instance, you can use the *Resource Acquisition Is Initialization* (RAII) pattern to ensure that resources are correctly handled when an exception is thrown in the body of a task. For a complete example that uses the RAII pattern to clean up a resource in a cancelable task, see [Walkthrough: Removing Work from a User-Interface Thread](../../parallel/concrt/walkthrough-removing-work-from-a-user-interface-thread.md).

## Key Points

- Cancellation is cooperative and involves coordination between the code that requests cancellation and the task that responds to cancellation.

- When possible, use cancellation tokens to cancel work. The [concurrency::cancellation_token](../../parallel/concrt/reference/cancellation-token-class.md) class defines a cancellation token.

- When you use cancellation tokens, use the [concurrency::cancellation_token_source::cancel](reference/cancellation-token-source-class.md#cancel) method to initiate cancellation and the [concurrency::cancel_current_task](reference/concurrency-namespace-functions.md#cancel_current_task) function to respond to cancellation. Use the [concurrency::cancellation_token::is_canceled](reference/cancellation-token-class.md#is_canceled) method to check whether any other task has requested cancellation.

- Cancellation does not occur immediately. Although new work is not started if a task or task group is canceled, active work must check for and respond to cancellation.

- A value-based continuation inherits the cancellation token of its antecedent task. A task-based continuation never inherits the token of its antecedent task.

- Use the [concurrency::cancellation_token::none](reference/cancellation-token-class.md#none) method when you call a constructor or function that takes a `cancellation_token` object but you do not want the operation to be cancellable. Also, if you do not pass a cancellation token to the [concurrency::task](../../parallel/concrt/reference/task-class.md) constructor or the [concurrency::create_task](reference/concurrency-namespace-functions.md#create_task) function, that task is not cancellable.

## <a name="top"></a> In this Document

- [Parallel Work Trees](#trees)

- [Canceling Parallel Tasks](#tasks)

  - [Using a Cancellation Token to Cancel Parallel Work](#tokens)

  - [Using the cancel Method to Cancel Parallel Work](#cancel)

  - [Using Exceptions to Cancel Parallel Work](#exceptions)

- [Canceling Parallel Algorithms](#algorithms)

- [When Not to Use Cancellation](#when)

## <a name="trees"></a> Parallel Work Trees

The PPL uses tasks and task groups to manage fine-grained tasks and computations. You can nest task groups to form *trees* of parallel work. The following illustration shows a parallel work tree. In this illustration, `tg1` and `tg2` represent task groups; `t1`, `t2`, `t3`, `t4`, and `t5` represent the work that the task groups perform.

![A parallel work tree](../../parallel/concrt/media/parallelwork_trees.png "A parallel work tree")

The following example shows the code that is required to create the tree in the illustration. In this example, `tg1` and `tg2` are [concurrency::structured_task_group](../../parallel/concrt/reference/structured-task-group-class.md) objects; `t1`, `t2`, `t3`, `t4`, and `t5` are [concurrency::task_handle](../../parallel/concrt/reference/task-handle-class.md) objects.

[!code-cpp[concrt-task-tree#1](../../parallel/concrt/codesnippet/cpp/cancellation-in-the-ppl_1.cpp)]

You can also use the [concurrency::task_group](reference/task-group-class.md) class to create a similar work tree. The [concurrency::task](../../parallel/concrt/reference/task-class.md) class also supports the notion of a tree of work. However, a `task` tree is a dependency tree. In a `task` tree, future works completes after current work. In a task group tree, internal work completes before outer work. For more information about the differences between tasks and task groups, see [Task Parallelism](../../parallel/concrt/task-parallelism-concurrency-runtime.md).

[[Top](#top)]

## <a name="tasks"></a> Canceling Parallel Tasks

There are multiple ways to cancel parallel work. The preferred way is to use a cancellation token. Task groups also support the [concurrency::task_group::cancel](reference/task-group-class.md#cancel) method and the [concurrency::structured_task_group::cancel](reference/structured-task-group-class.md#cancel) method. The final way is to throw an exception in the body of a task work function. No matter which method you choose, understand that cancellation does not occur immediately. Although new work is not started if a task or task group is canceled, active work must check for and respond to cancellation.

For more examples that cancel parallel tasks, see [Walkthrough: Connecting Using Tasks and XML HTTP Requests](../../parallel/concrt/walkthrough-connecting-using-tasks-and-xml-http-requests.md), [How to: Use Cancellation to Break from a Parallel Loop](../../parallel/concrt/how-to-use-cancellation-to-break-from-a-parallel-loop.md), and [How to: Use Exception Handling to Break from a Parallel Loop](../../parallel/concrt/how-to-use-exception-handling-to-break-from-a-parallel-loop.md).

### <a name="tokens"></a> Using a Cancellation Token to Cancel Parallel Work

The `task`, `task_group`, and `structured_task_group` classes support cancellation through the use of cancellation tokens. The PPL defines the [concurrency::cancellation_token_source](../../parallel/concrt/reference/cancellation-token-source-class.md) and [concurrency::cancellation_token](../../parallel/concrt/reference/cancellation-token-class.md) classes for this purpose. When you use a cancellation token to cancel work, the runtime does not start new work that subscribes to that token. Work that is already active can use the [is_canceled](../../parallel/concrt/reference/cancellation-token-class.md#is_canceled) member function to monitor the cancellation token and stop when it can.

To initiate cancellation, call the [concurrency::cancellation_token_source::cancel](reference/cancellation-token-source-class.md#cancel) method. You respond to cancellation in these ways:

- For `task` objects, use the [concurrency::cancel_current_task](reference/concurrency-namespace-functions.md#cancel_current_task) function. `cancel_current_task` cancels the current task and any of its value-based continuations. (It does not cancel the cancellation *token* that is associated with the task or its continuations.)

- For task groups and parallel algorithms, use the [concurrency::is_current_task_group_canceling](reference/concurrency-namespace-functions.md#is_current_task_group_canceling) function to detect cancellation and return as soon as possible from the task body when this function returns **`true`**. (Do not call `cancel_current_task` from a task group.)

The following example shows the first basic pattern for task cancellation. The task body occasionally checks for cancellation inside a loop.

[!code-cpp[concrt-task-basic-cancellation#1](../../parallel/concrt/codesnippet/cpp/cancellation-in-the-ppl_2.cpp)]

The `cancel_current_task` function throws; therefore, you do not need to explicitly return from the current loop or function.

> [!TIP]
> Alternatively, you can call the [concurrency::interruption_point](reference/concurrency-namespace-functions.md#interruption_point) function instead of `cancel_current_task`.

It is important to call `cancel_current_task` when you respond to cancellation because it transitions the task to the canceled state. If you return early instead of calling `cancel_current_task`, the operation transitions to the completed state and any value-based continuations are run.

> [!CAUTION]
> Never throw `task_canceled` from your code. Call `cancel_current_task` instead.

When a task ends in the canceled state, the [concurrency::task::get](reference/task-class.md#get) method throws [concurrency::task_canceled](../../parallel/concrt/reference/task-canceled-class.md). (Conversely, [concurrency::task::wait](reference/task-class.md#wait) returns [task_status::canceled](reference/concurrency-namespace-enums.md#task_group_status) and does not throw.) The following example illustrates this behavior for a task-based continuation. A task-based continuation is always called, even when the antecedent task is canceled.

[!code-cpp[concrt-task-canceled#1](../../parallel/concrt/codesnippet/cpp/cancellation-in-the-ppl_3.cpp)]

Because value-based continuations inherit the token of their antecedent task unless they were created with an explicit token, the continuations immediately enter the canceled state even when the antecedent task is still executing. Therefore, any exception that is thrown by the antecedent task after cancellation is not propagated to the continuation tasks. Cancellation always overrides the state of the antecedent task. The following example resembles the previous, but illustrates the behavior for a value-based continuation.

[!code-cpp[concrt-task-canceled#2](../../parallel/concrt/codesnippet/cpp/cancellation-in-the-ppl_4.cpp)]

> [!CAUTION]
> If you do not pass a cancellation token to the `task` constructor or the [concurrency::create_task](reference/concurrency-namespace-functions.md#create_task) function, that task is not cancellable. In addition, you must pass the same cancellation token to the constructor of any nested tasks (that is, tasks that are created in the body of another task) to cancel all tasks simultaneously.

You might want to run arbitrary code when a cancellation token is canceled. For example, if your user chooses a **Cancel** button on the user interface to cancel the operation, you could disable that button until the user starts another operation. The following example shows how to use the [concurrency::cancellation_token::register_callback](reference/cancellation-token-class.md#register_callback) method to register a callback function that runs when a cancellation token is canceled.

[!code-cpp[concrt-task-cancellation-callback#1](../../parallel/concrt/codesnippet/cpp/cancellation-in-the-ppl_5.cpp)]

The document [Task Parallelism](../../parallel/concrt/task-parallelism-concurrency-runtime.md) explains the difference between value-based and task-based continuations. If you do not provide a `cancellation_token` object to a continuation task, the continuation inherits the cancellation token from the antecedent task in the following ways:

- A value-based continuation always inherits the cancellation token of the antecedent task.

- A task-based continuation never inherits the cancellation token of the antecedent task. The only way to make a task-based continuation cancelable is to explicitly pass a cancellation token.

These behaviors are not affected by a faulted task (that is, one that throws an exception). In this case, a value-based continuation is canceled; a task-based continuation is not canceled.

> [!CAUTION]
> A task that is created in another task (in other words, a nested task) does not inherit the cancellation token of the parent task. Only a value-based continuation inherits the cancellation token of its antecedent task.

> [!TIP]
> Use the [concurrency::cancellation_token::none](reference/cancellation-token-class.md#none) method when you call a constructor or function that takes a `cancellation_token` object and you do not want the operation to be cancellable.

You can also provide a cancellation token to the constructor of a `task_group` or `structured_task_group` object. An important aspect of this is that child task groups inherit this cancellation token. For an example that demonstrates this concept by using the [concurrency::run_with_cancellation_token](reference/concurrency-namespace-functions.md#run_with_cancellation_token) function to run to call `parallel_for`, see [Canceling Parallel Algorithms](#algorithms) later in this document.

[[Top](#top)]

#### Cancellation Tokens and Task Composition

The [concurrency::when_all](reference/concurrency-namespace-functions.md#when_all) and [concurrency::when_any](reference/concurrency-namespace-functions.md#when_all) functions can help you compose multiple tasks to implement common patterns. This section describes how these functions work with cancellation tokens.

When you provide a cancellation token to either the `when_all` and `when_any` function, that function cancels only when that cancellation token is canceled or when one of the participant tasks ends in a canceled state or throws an exception.

The `when_all` function inherits the cancellation token from each task that composes the overall operation when you do not provide a cancellation token to it. The task that is returned from `when_all` is canceled when any of these tokens are canceled and at least one of the participant tasks has not yet started or is running. A similar behavior occurs when one of the tasks throws an exception - the task that is returned from `when_all` is immediately canceled with that exception.

The runtime chooses the cancellation token for the task that is returned from `when_any` function when that task completes. If none of the participant tasks finish in a completed state and one or more of the tasks throws an exception, one of the tasks that threw is chosen to complete the `when_any` and its token is chosen as the token for the final task. If more than one task finishes in the completed state, the task that is returned from `when_any` task ends in a completed state. The runtime tries to pick a completed task whose token is not canceled at the time of completion so that the task that is returned from `when_any` is not immediately canceled even though other executing tasks might complete at a later point.

[[Top](#top)]

### <a name="cancel"></a> Using the cancel Method to Cancel Parallel Work

The [concurrency::task_group::cancel](reference/task-group-class.md#cancel) and [concurrency::structured_task_group::cancel](reference/structured-task-group-class.md#cancel) methods set a task group to the canceled state. After you call `cancel`, the task group does not start future tasks. The `cancel` methods can be called by multiple child tasks. A canceled task causes the [concurrency::task_group::wait](reference/task-group-class.md#wait) and [concurrency::structured_task_group::wait](reference/structured-task-group-class.md#wait) methods to return [concurrency::canceled](reference/concurrency-namespace-enums.md#task_group_status).

If a task group is canceled, calls from each child task into the runtime can trigger an *interruption point*, which causes the runtime to throw and catch an internal exception type to cancel active tasks. The Concurrency Runtime does not define specific interruption points; they can occur in any call to the runtime. The runtime must handle the exceptions that it throws in order to perform cancellation. Therefore, do not handle unknown exceptions in the body of a task.

If a child task performs a time-consuming operation and does not call into the runtime, it must periodically check for cancellation and exit in a timely manner. The following example shows one way to determine when work is canceled. Task `t4` cancels the parent task group when it encounters an error. Task `t5` occasionally calls the `structured_task_group::is_canceling` method to check for cancellation. If the parent task group is canceled, task `t5` prints a message and exits.

[!code-cpp[concrt-task-tree#6](../../parallel/concrt/codesnippet/cpp/cancellation-in-the-ppl_6.cpp)]

This example checks for cancellation on every 100<sup>th</sup> iteration of the task loop. The frequency with which you check for cancellation depends on the amount of work your task performs and how quickly you need for tasks to respond to cancellation.

If you do not have access to the parent task group object, call the [concurrency::is_current_task_group_canceling](reference/concurrency-namespace-functions.md#is_current_task_group_canceling) function to determine whether the parent task group is canceled.

The `cancel` method only affects child tasks. For example, if you cancel the task group `tg1` in the illustration of the parallel work tree, all tasks in the tree (`t1`, `t2`, `t3`, `t4`, and `t5`) are affected. If you cancel the nested task group, `tg2`, only tasks `t4` and `t5` are affected.

When you call the `cancel` method, all child task groups are also canceled. However, cancellation does not affect any parents of the task group in a parallel work tree. The following examples show this by building on the parallel work tree illustration.

The first of these examples creates a work function for the task `t4`, which is a child of the task group `tg2`. The work function calls the function `work` in a loop. If any call to `work` fails, the task cancels its parent task group. This causes task group `tg2` to enter the canceled state, but it does not cancel task group `tg1`.

[!code-cpp[concrt-task-tree#2](../../parallel/concrt/codesnippet/cpp/cancellation-in-the-ppl_7.cpp)]

This second example resembles the first one, except that the task cancels task group `tg1`. This affects all tasks in the tree (`t1`, `t2`, `t3`, `t4`, and `t5`).

[!code-cpp[concrt-task-tree#3](../../parallel/concrt/codesnippet/cpp/cancellation-in-the-ppl_8.cpp)]

The `structured_task_group` class is not thread-safe. Therefore, a child task that calls a method of its parent `structured_task_group` object produces unspecified behavior. The exceptions to this rule are the `structured_task_group::cancel` and [concurrency::structured_task_group::is_canceling](reference/structured-task-group-class.md#is_canceling) methods. A child task can call these methods to cancel the parent task group and check for cancellation.

> [!CAUTION]
> Although you can use a cancellation token to cancel work that is performed by a task group that runs as a child of a `task` object, you cannot use the `task_group::cancel` or `structured_task_group::cancel` methods to cancel `task` objects that run in a task group.

[[Top](#top)]

### <a name="exceptions"></a> Using Exceptions to Cancel Parallel Work

The use of cancellation tokens and the `cancel` method are more efficient than exception handling at canceling a parallel work tree. Cancellation tokens and the `cancel` method cancel a task and any child tasks in a top-down manner. Conversely, exception handling works in a bottom-up manner and must cancel each child task group independently as the exception propagates upward. The topic [Exception Handling](../../parallel/concrt/exception-handling-in-the-concurrency-runtime.md) explains how the Concurrency Runtime uses exceptions to communicate errors. However, not all exceptions indicate an error. For example, a search algorithm might cancel its associated task when it finds the result. However, as mentioned previously, exception handling is less efficient than using the `cancel` method to cancel parallel work.

> [!CAUTION]
> We recommend that you use exceptions to cancel parallel work only when necessary. Cancellation tokens and the task group `cancel` methods are more efficient and less prone to error.

When you throw an exception in the body of a work function that you pass to a task group, the runtime stores that exception and marshals the exception to the context that waits for the task group to finish. As with the `cancel` method, the runtime discards any tasks that have not yet started, and does not accept new tasks.

This third example resembles the second one, except that task `t4` throws an exception to cancel the task group `tg2`. This example uses a **`try`**-**`catch`** block to check for cancellation when the task group `tg2` waits for its child tasks to finish. Like the first example, this causes the task group `tg2` to enter the canceled state, but it does not cancel task group `tg1`.

[!code-cpp[concrt-task-tree#4](../../parallel/concrt/codesnippet/cpp/cancellation-in-the-ppl_9.cpp)]

This fourth example uses exception handling to cancel the whole work tree. The example catches the exception when task group `tg1` waits for its child tasks to finish instead of when task group `tg2` waits for its child tasks. Like the second example, this causes both tasks groups in the tree, `tg1` and `tg2`, to enter the canceled state.

[!code-cpp[concrt-task-tree#5](../../parallel/concrt/codesnippet/cpp/cancellation-in-the-ppl_10.cpp)]

Because the `task_group::wait` and `structured_task_group::wait` methods throw when a child task throws an exception, you do not receive a return value from them.

[[Top](#top)]

## <a name="algorithms"></a> Canceling Parallel Algorithms

Parallel algorithms in the PPL, for example, `parallel_for`, build on task groups. Therefore, you can use many of the same techniques to cancel a parallel algorithm.

The following examples illustrate several ways to cancel a parallel algorithm.

The following example uses the `run_with_cancellation_token` function to call the `parallel_for` algorithm. The `run_with_cancellation_token` function takes a cancellation token as an argument and calls the provided work function synchronously. Because parallel algorithms are built upon tasks, they inherit the cancellation token of the parent task. Therefore, `parallel_for` can respond to cancellation.

[!code-cpp[concrt-cancel-parallel-for#1](../../parallel/concrt/codesnippet/cpp/cancellation-in-the-ppl_11.cpp)]

The following example uses the [concurrency::structured_task_group::run_and_wait](reference/structured-task-group-class.md#run_and_wait) method to call the `parallel_for` algorithm. The `structured_task_group::run_and_wait` method waits for the provided task to finish. The `structured_task_group` object enables the work function to cancel the task.

[!code-cpp[concrt-task-tree#7](../../parallel/concrt/codesnippet/cpp/cancellation-in-the-ppl_12.cpp)]

This example produces the following output.

```Output
The task group status is: canceled.
```

The following example uses exception handling to cancel a `parallel_for` loop. The runtime marshals the exception to the calling context.

[!code-cpp[concrt-task-tree#9](../../parallel/concrt/codesnippet/cpp/cancellation-in-the-ppl_13.cpp)]

This example produces the following output.

```Output
Caught 50
```

The following example uses a Boolean flag to coordinate cancellation in a `parallel_for` loop. Every task runs because this example does not use the `cancel` method or exception handling to cancel the overall set of tasks. Therefore, this technique can have more computational overhead than a cancelation mechanism.

[!code-cpp[concrt-task-tree#8](../../parallel/concrt/codesnippet/cpp/cancellation-in-the-ppl_14.cpp)]

Each cancellation method has advantages over the others. Choose the method that fits your specific needs.

[[Top](#top)]

## <a name="when"></a> When Not to Use Cancellation

The use of cancellation is appropriate when each member of a group of related tasks can exit in a timely manner. However, there are some scenarios where cancellation may not be appropriate for your application. For example, because task cancellation is cooperative, the overall set of tasks will not cancel if any individual task is blocked. For example, if one task has not yet started, but it unblocks another active task, it will not start if the task group is canceled. This can cause deadlock to occur in your application. A second example of where the use of cancellation may not be appropriate is when a task is canceled, but its child task performs an important operation, such as freeing a resource. Because the overall set of tasks is canceled when the parent task is canceled, that operation will not execute. For an example that illustrates this point, see the [Understand how Cancellation and Exception Handling Affect Object Destruction](../../parallel/concrt/best-practices-in-the-parallel-patterns-library.md#object-destruction) section in the Best Practices in the Parallel Patterns Library topic.

[[Top](#top)]

## Related Topics

|Title|Description|
|-----------|-----------------|
|[How to: Use Cancellation to Break from a Parallel Loop](../../parallel/concrt/how-to-use-cancellation-to-break-from-a-parallel-loop.md)|Shows how to use cancellation to implement a parallel search algorithm.|
|[How to: Use Exception Handling to Break from a Parallel Loop](../../parallel/concrt/how-to-use-exception-handling-to-break-from-a-parallel-loop.md)|Shows how to use the `task_group` class to write a search algorithm for a basic tree structure.|
|[Exception Handling](../../parallel/concrt/exception-handling-in-the-concurrency-runtime.md)|Describes how the runtime handles exceptions that are thrown by task groups, lightweight tasks, and asynchronous agents, and how to respond to exceptions in your applications.|
|[Task Parallelism](../../parallel/concrt/task-parallelism-concurrency-runtime.md)|Describes how tasks relate to task groups and how you can use unstructured and structured tasks in your applications.|
|[Parallel Algorithms](../../parallel/concrt/parallel-algorithms.md)|Describes the parallel algorithms, which concurrently perform work on collections of data|
|[Parallel Patterns Library (PPL)](../../parallel/concrt/parallel-patterns-library-ppl.md)|Provides an overview of the Parallel Patterns Library.|

## Reference

[task Class (Concurrency Runtime)](../../parallel/concrt/reference/task-class.md)

[cancellation_token_source Class](../../parallel/concrt/reference/cancellation-token-source-class.md)

[cancellation_token Class](../../parallel/concrt/reference/cancellation-token-class.md)

[task_group Class](reference/task-group-class.md)

[structured_task_group Class](../../parallel/concrt/reference/structured-task-group-class.md)

[parallel_for Function](reference/concurrency-namespace-functions.md#parallel_for)
