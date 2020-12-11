---
description: "Learn more about: Task Parallelism (Concurrency Runtime)"
title: "Task Parallelism (Concurrency Runtime)"
ms.date: "11/04/2016"
helpviewer_keywords: ["structured task groups [Concurrency Runtime]", "structured tasks [Concurrency Runtime]", "task groups [Concurrency Runtime]", "task parallelism", "tasks [Concurrency Runtime]"]
ms.assetid: 42f05ac3-2098-494a-ba84-737fcdcad077
---
# Task Parallelism (Concurrency Runtime)

In the Concurrency Runtime, a *task* is a unit of work that performs a specific job and typically runs in parallel with other tasks. A task can be decomposed into additional, more fine-grained tasks that are organized into a *task group*.

You use tasks when you write asynchronous code and want some operation to occur after the asynchronous operation completes. For example, you could use a task to asynchronously read from a file and then use another task—a *continuation task*, which is explained later in this document—to process the data after it becomes available. Conversely, you can use tasks groups to decompose parallel work into smaller pieces. For example, suppose you have a recursive algorithm that divides the remaining work into two partitions. You can use task groups to run these partitions concurrently, and then wait for the divided work to complete.

> [!TIP]
> When you want to apply the same routine to every element of a collection in parallel, use a parallel algorithm, such as [concurrency::parallel_for](reference/concurrency-namespace-functions.md#parallel_for), instead of a task or task group. For more information about parallel algorithms, see [Parallel Algorithms](../../parallel/concrt/parallel-algorithms.md).

## Key Points

- When you pass variables to a lambda expression by reference, you must guarantee that the lifetime of that variable persists until the task finishes.

- Use tasks (the [concurrency::task](../../parallel/concrt/reference/task-class.md) class) when you write asynchronous code. The task class uses the Windows ThreadPool as its scheduler, not the Concurrency Runtime.

- Use task groups (the [concurrency::task_group](reference/task-group-class.md) class or the [concurrency::parallel_invoke](reference/concurrency-namespace-functions.md#parallel_invoke) algorithm) when you want to decompose parallel work into smaller pieces and then wait for those smaller pieces to complete.

- Use the [concurrency::task::then](reference/task-class.md#then) method to create continuations. A *continuation* is a task that runs asynchronously after another task completes. You can connect any number of continuations to form a chain of asynchronous work.

- A task-based continuation is always scheduled for execution when the antecedent task finishes, even when the antecedent task is canceled or throws an exception.

- Use [concurrency::when_all](reference/concurrency-namespace-functions.md#when_all) to create a task that completes after every member of a set of tasks completes. Use [concurrency::when_any](reference/concurrency-namespace-functions.md#when_any) to create a task that completes after one member of a set of tasks completes.

- Tasks and task groups can participate in the Parallel Patterns Library (PPL) cancellation mechanism. For more information, see [Cancellation in the PPL](cancellation-in-the-ppl.md).

- To learn how the runtime handles exceptions that are thrown by tasks and task groups, see [Exception Handling](../../parallel/concrt/exception-handling-in-the-concurrency-runtime.md).

## In this Document

- [Using Lambda Expressions](#lambdas)

- [The task Class](#task-class)

- [Continuation Tasks](#continuations)

- [Value-Based Versus Task-Based Continuations](#value-versus-task)

- [Composing Tasks](#composing-tasks)

  - [The when_all Function](#when-all)

  - [The when_any Function](#when-any)

- [Delayed Task Execution](#delayed-tasks)

- [Task Groups](#task-groups)

- [Comparing task_group to structured_task_group](#comparing-groups)

- [Example](#example)

- [Robust Programming](#robust)

## <a name="lambdas"></a> Using Lambda Expressions

Because of their succinct syntax, lambda expressions are a common way to define the work that is performed by tasks and task groups. Here are some usage tips:

- Because tasks typically run on background threads, be aware of the object lifetime when you capture variables in lambda expressions. When you capture a variable by value, a copy of that variable is made in the lambda body. When you capture by reference, a copy is not made. Therefore, ensure that the lifetime of any variable that you capture by reference outlives the task that uses it.

- When you pass a lambda expression to a task, don't capture variables that are allocated on the stack by reference.

- Be explicit about the variables you capture in lambda expressions so   that you can identify what you're capturing by value versus by reference. For this reason we recommend that you do not use the `[=]` or `[&]` options for lambda expressions.

A common pattern is when one task in a continuation chain assigns to a variable, and another task reads that variable. You can't capture by value because each continuation task would hold a different copy of the variable. For stack-allocated variables, you also can't capture by reference because the variable may no longer be valid.

To solve this problem, use a smart pointer, such as [std::shared_ptr](../../standard-library/shared-ptr-class.md), to wrap the variable and pass the smart pointer by value. In this way, the underlying object can be assigned to and read from, and will outlive the tasks that use it. Use this technique even when the variable is a pointer or a reference-counted handle (`^`) to a Windows Runtime object. Here's a basic example:

[!code-cpp[concrt-lambda-task-lifetime#1](../../parallel/concrt/codesnippet/cpp/task-parallelism-concurrency-runtime_1.cpp)]

For more information about lambda expressions, see [Lambda Expressions](../../cpp/lambda-expressions-in-cpp.md).

## <a name="task-class"></a> The task Class

You can use the [concurrency::task](../../parallel/concrt/reference/task-class.md) class to compose tasks into a set of dependent operations. This composition model is supported by the notion of *continuations*. A continuation enables code to be executed when the previous, or *antecedent*, task completes. The result of the antecedent task is passed as the input to the one or more continuation tasks. When an antecedent task completes, any continuation tasks that are waiting on it are scheduled for execution. Each continuation task receives a copy of the result of the antecedent task. In turn, those continuation tasks may also be antecedent tasks for other continuations, thereby creating a chain of tasks. Continuations help you create arbitrary-length chains of tasks that have specific dependencies among them. In addition, a task can participate in cancellation either before a tasks starts or in a cooperative manner while it is running. For more information about this cancellation model, see [Cancellation in the PPL](cancellation-in-the-ppl.md).

`task` is a template class. The type parameter `T` is the type of the result that is produced by the task. This type can be **`void`** if the task does not return a value. `T` cannot use the **`const`** modifier.

When you create a task, you provide a *work function* that performs the task body. This work function comes in the form of a lambda function, function pointer, or function object. To wait for a task to finish without obtaining the result, call the [concurrency::task::wait](reference/task-class.md#wait) method. The `task::wait` method returns a [concurrency::task_status](reference/concurrency-namespace-enums.md#task_group_status) value that describes whether the task was completed or canceled. To get the result of the task, call the [concurrency::task::get](reference/task-class.md#get) method. This method calls `task::wait` to wait for the task to finish, and therefore blocks execution of the current thread until the result is available.

The following example shows how to create a task, wait for its result, and display its value. The examples in this documentation use lambda functions because they provide a more succinct syntax. However, you can also use function pointers and function objects when you use tasks.

[!code-cpp[concrt-basic-task#1](../../parallel/concrt/codesnippet/cpp/task-parallelism-concurrency-runtime_2.cpp)]

When you use the [concurrency::create_task](reference/concurrency-namespace-functions.md#create_task) function, you can use the **`auto`** keyword instead of declaring the type. For example, consider this code that creates and prints the identity matrix:

[!code-cpp[concrt-create-task#1](../../parallel/concrt/codesnippet/cpp/task-parallelism-concurrency-runtime_3.cpp)]

You can use the `create_task` function to create the equivalent operation.

[!code-cpp[concrt-create-task#2](../../parallel/concrt/codesnippet/cpp/task-parallelism-concurrency-runtime_4.cpp)]

If an exception is thrown during the execution of a task, the runtime marshals that exception in the subsequent call to `task::get` or `task::wait`, or to a task-based continuation. For more information about the task exception-handling mechanism, see [Exception Handling](../../parallel/concrt/exception-handling-in-the-concurrency-runtime.md).

For an example that uses `task`, [concurrency::task_completion_event](../../parallel/concrt/reference/task-completion-event-class.md), cancellation, see [Walkthrough: Connecting Using Tasks and XML HTTP Requests](../../parallel/concrt/walkthrough-connecting-using-tasks-and-xml-http-requests.md). (The `task_completion_event` class is described later in this document.)

> [!TIP]
> To learn details that are specific to tasks in UWP apps, see [Asynchronous programming in C++](/windows/uwp/threading-async/asynchronous-programming-in-cpp-universal-windows-platform-apps) and [Creating Asynchronous Operations in C++ for UWP Apps](../../parallel/concrt/creating-asynchronous-operations-in-cpp-for-windows-store-apps.md).

## <a name="continuations"></a> Continuation Tasks

In asynchronous programming, it is very common for one asynchronous operation, on completion, to invoke a second operation and pass data to it. Traditionally, this is done by using callback methods. In the Concurrency Runtime, the same functionality is provided by *continuation tasks*. A continuation task (also known just as a continuation) is an asynchronous task that is invoked by another task, which is known as the *antecedent*, when the antecedent completes. By using continuations, you can:

- Pass data from the antecedent to the continuation.

- Specify the precise conditions under which the continuation is invoked or not invoked.

- Cancel a continuation either before it starts or cooperatively while it is running.

- Provide hints about how the continuation should be scheduled. (This applies to Universal Windows Platform (UWP) apps only. For more information, see [Creating Asynchronous Operations in C++ for UWP Apps](../../parallel/concrt/creating-asynchronous-operations-in-cpp-for-windows-store-apps.md).)

- Invoke multiple continuations from the same antecedent.

- Invoke one continuation when all or any of multiple antecedents complete.

- Chain continuations one after another to any length.

- Use a continuation to handle exceptions that are thrown by the antecedent.

These features enable you to execute one or more tasks when the first task completes. For example, you can create a continuation that compresses a file after the first task reads it from disk.

The following example modifies the previous one to use the [concurrency::task::then](reference/task-class.md#then) method to schedule a continuation that prints the value of the antecedent task when it is available.

[!code-cpp[concrt-basic-continuation#1](../../parallel/concrt/codesnippet/cpp/task-parallelism-concurrency-runtime_5.cpp)]

You can chain and nest tasks to any length. A task can also have multiple continuations. The following example illustrates a basic continuation chain that increments the value of the previous task three times.

[!code-cpp[concrt-continuation-chain#1](../../parallel/concrt/codesnippet/cpp/task-parallelism-concurrency-runtime_6.cpp)]

A continuation can also return another task. If there is no cancellation, then this task is executed before the subsequent continuation. This technique is known as *asynchronous unwrapping*. Asynchronous unwrapping is useful when you want to perform additional work in the background, but do not want the current task to block the current thread. (This is common in UWP apps, where continuations can run on the UI thread). The following example shows three tasks. The first task returns another task that is run before a continuation task.

[!code-cpp[concrt-async-unwrapping#1](../../parallel/concrt/codesnippet/cpp/task-parallelism-concurrency-runtime_7.cpp)]

> [!IMPORTANT]
> When a continuation of a task returns a nested task of type `N`, the resulting task has the type `N`, not `task<N>`, and completes when the nested task completes. In other words, the continuation performs the unwrapping of the nested task.

## <a name="value-versus-task"></a> Value-Based Versus Task-Based Continuations

Given a `task` object whose return type is `T`, you can provide a value of type `T` or `task<T>` to its continuation tasks. A continuation that takes type `T` is known as a *value-based continuation*. A value-based continuation is scheduled for execution when the antecedent task completes without error and is not canceled. A continuation that takes type `task<T>` as its parameter is known as a *task-based continuation*. A task-based continuation is always scheduled for execution when the antecedent task finishes, even when the antecedent task is canceled or throws an exception. You can then call `task::get` to get the result of the antecedent task. If the antecedent task was canceled, `task::get` throws [concurrency::task_canceled](../../parallel/concrt/reference/task-canceled-class.md). If the antecedent task threw an exception, `task::get` rethrows that exception. A task-based continuation is not marked as canceled when its antecedent task is canceled.

## <a name="composing-tasks"></a> Composing Tasks

This section describes the [concurrency::when_all](reference/concurrency-namespace-functions.md#when_all) and [concurrency::when_any](reference/concurrency-namespace-functions.md#when_all) functions, which can help you compose multiple tasks to implement common patterns.

### <a name="when-all"></a> The when_all Function

The `when_all` function produces a task that completes after a set of tasks complete. This function returns a std::[vector](../../standard-library/vector-class.md) object that contains the result of each task in the set. The following basic example uses `when_all` to create a task that represents the completion of three other tasks.

[!code-cpp[concrt-join-tasks#1](../../parallel/concrt/codesnippet/cpp/task-parallelism-concurrency-runtime_8.cpp)]

> [!NOTE]
> The tasks that you pass to `when_all` must be uniform. In other words, they must all return the same type.

You can also use the `&&` syntax to produce a task that completes after a set of tasks complete, as shown in the following example.

`auto t = t1 && t2; // same as when_all`

It is common to use a continuation together with `when_all` to perform an action after a set of tasks finishes. The following example modifies the previous one to print the sum of three tasks that each produce an **`int`** result.

[!code-cpp[concrt-join-tasks#2](../../parallel/concrt/codesnippet/cpp/task-parallelism-concurrency-runtime_9.cpp)]

In this example, you can also specify `task<vector<int>>` to produce a task-based continuation.

If any task in a set of tasks is canceled or throws an exception, `when_all` immediately completes and does not wait for the remaining tasks to finish. If an exception is thrown, the runtime rethrows the exception when you call `task::get` or `task::wait` on the task object that `when_all` returns. If more than one task throws, the runtime chooses one of them. Therefore, ensure that you observe all exceptions after all tasks complete; an unhandled task exception causes the app to terminate.

Here's a utility function that you can use to ensure that your program observes all exceptions. For each task in the provided range, `observe_all_exceptions` triggers any exception that occurred to be rethrown and then swallows that exception.

[!code-cpp[concrt-eh-when_all#1](../../parallel/concrt/codesnippet/cpp/task-parallelism-concurrency-runtime_10.cpp)]

Consider a UWP app that uses C++ and XAML and writes a set of files to disk. The following example shows how to use `when_all` and `observe_all_exceptions` to ensure that the program observes all exceptions.

[!code-cpp[concrt-eh-when_all#2](../../parallel/concrt/codesnippet/cpp/task-parallelism-concurrency-runtime_11.cpp)]

##### To run this example

1. In MainPage.xaml, add a `Button` control.

[!code-xml[concrt-eh-when_all#3](../../parallel/concrt/codesnippet/xaml/task-parallelism-concurrency-runtime_12.xaml)]

1. In MainPage.xaml.h, add these forward declarations to the **`private`** section of the `MainPage` class declaration.

[!code-cpp[concrt-eh-when_all#4](../../parallel/concrt/codesnippet/cpp/task-parallelism-concurrency-runtime_13.h)]

1. In MainPage.xaml.cpp, implement the `Button_Click` event handler.

[!code-cpp[concrt-eh-when_all#5](../../parallel/concrt/codesnippet/cpp/task-parallelism-concurrency-runtime_14.cpp)]

1. In MainPage.xaml.cpp, implement `WriteFilesAsync` as shown in the example.

> [!TIP]
> `when_all` is a non-blocking function that produces a `task` as its result. Unlike [task::wait](reference/task-class.md#wait), it is safe to call this function in a UWP app on the ASTA (Application STA) thread.

### <a name="when-any"></a> The when_any Function

The `when_any` function produces a task that completes when the first task in a set of tasks completes. This function returns a [std::pair](../../standard-library/pair-structure.md) object that contains the result of the completed task and the index of that task in the set.

The `when_any` function is especially useful in the following scenarios:

- Redundant operations. Consider an algorithm or operation that can be performed in many ways. You can use the `when_any` function to select the operation that finishes first and then cancel the remaining operations.

- Interleaved operations. You can start multiple operations that all must finish and use the `when_any` function to process results as each operation finishes. After one operation finishes, you can start one or more additional tasks.

- Throttled operations. You can use the `when_any` function to extend the previous scenario by limiting the number of concurrent operations.

- Expired operations. You can use the `when_any` function to select between one or more tasks and a task that finishes after a specific time.

As with `when_all`, it is common to use a continuation that has `when_any` to perform action when the first in a set of tasks finish. The following basic example uses `when_any` to create a task that completes when the first of three other tasks completes.

[!code-cpp[concrt-select-task#1](../../parallel/concrt/codesnippet/cpp/task-parallelism-concurrency-runtime_15.cpp)]

In this example, you can also specify `task<pair<int, size_t>>` to produce a task-based continuation.

> [!NOTE]
> As with `when_all`, the tasks that you pass to `when_any` must all return the same type.

You can also use the `||` syntax to produce a task that completes after the first task in a set of tasks completes, as shown in the following example.

`auto t = t1 || t2; // same as when_any`

> [!TIP]
> As with `when_all`, `when_any` is non-blocking and is safe to call in a UWP app on the ASTA thread.

## <a name="delayed-tasks"></a> Delayed Task Execution

It is sometimes necessary to delay the execution of a task until a condition is satisfied, or to start a task in response to an external event. For example, in asynchronous programming, you might have to start a task in response to an I/O completion event.

Two ways to accomplish this are to use a continuation or to start a task and wait on an event inside the task's work function. However, there are cases where is it not possible to use one of these techniques. For example, to create a continuation, you must have the antecedent task. However, if you do not have the antecedent task, you can create a *task completion event* and later chain that completion event to the antecedent task when it becomes available. In addition, because a waiting task also blocks a thread, you can use task completion events to perform work when an asynchronous operation completes, and thereby free a thread.

The [concurrency::task_completion_event](../../parallel/concrt/reference/task-completion-event-class.md) class helps simplify such composition of tasks. Like the `task` class, the type parameter `T` is the type of the result that is produced by the task. This type can be **`void`** if the task does not return a value. `T` cannot use the **`const`** modifier. Typically, a `task_completion_event` object is provided to a thread or task that will signal it when the value for it becomes available. At the same time, one or more tasks are set as listeners of that event. When the event is set, the listener tasks complete and their continuations are scheduled to run.

For an example that uses `task_completion_event` to implement a task that completes after a delay, see [How to: Create a Task that Completes After a Delay](../../parallel/concrt/how-to-create-a-task-that-completes-after-a-delay.md).

## <a name="task-groups"></a> Task Groups

A *task group* organizes a collection of tasks. Task groups push tasks on to a work-stealing queue. The scheduler removes tasks from this queue and executes them on available computing resources. After you add tasks to a task group, you can wait for all tasks to finish or cancel tasks that have not yet started.

The PPL uses the [concurrency::task_group](reference/task-group-class.md) and [concurrency::structured_task_group](../../parallel/concrt/reference/structured-task-group-class.md) classes to represent task groups, and the [concurrency::task_handle](../../parallel/concrt/reference/task-handle-class.md) class to represent the tasks that run in these groups. The `task_handle` class encapsulates the code that performs work. Like the `task` class, the work function comes in the form of a lambda function, function pointer, or function object. You typically do not need to work with `task_handle` objects directly. Instead, you pass work functions to a task group, and the task group creates and manages the `task_handle` objects.

The PPL divides task groups into these two categories: *unstructured task groups* and *structured task groups*. The PPL uses the `task_group` class to represent unstructured task groups and the `structured_task_group` class to represent structured task groups.

> [!IMPORTANT]
> The PPL also defines the [concurrency::parallel_invoke](reference/concurrency-namespace-functions.md#parallel_invoke) algorithm, which uses the `structured_task_group` class to execute a set of tasks in parallel. Because the `parallel_invoke` algorithm has a more succinct syntax, we recommend that you use it instead of the `structured_task_group` class when you can. The topic [Parallel Algorithms](../../parallel/concrt/parallel-algorithms.md) describes `parallel_invoke` in greater detail.

Use `parallel_invoke` when you have several independent tasks that you want to execute at the same time, and you must wait for all tasks to finish before you continue. This technique is often referred to as *fork and join* parallelism. Use `task_group` when you have several independent tasks that you want to execute at the same time, but you want to wait for the tasks to finish at a later time. For example, you can add tasks to a `task_group` object and wait for the tasks to finish in another function or from another thread.

Task groups support the concept of cancellation. Cancellation enables you to signal to all active tasks that you want to cancel the overall operation. Cancellation also prevents tasks that have not yet started from starting. For more information about cancellation, see [Cancellation in the PPL](cancellation-in-the-ppl.md).

The runtime also provides an exception-handling model that enables you to throw an exception from a task and handle that exception when you wait for the associated task group to finish. For more information about this exception-handling model, see [Exception Handling](../../parallel/concrt/exception-handling-in-the-concurrency-runtime.md).

## <a name="comparing-groups"></a> Comparing task_group to structured_task_group

Although we recommend that you use `task_group` or `parallel_invoke` instead of the `structured_task_group` class, there are cases where you want to use `structured_task_group`, for example, when you write a parallel algorithm that performs a variable number of tasks or requires support for cancellation. This section explains the differences between the `task_group` and `structured_task_group` classes.

The `task_group` class is thread-safe. Therefore you can add tasks to a `task_group` object from multiple threads and wait on or cancel a `task_group` object from multiple threads. The construction and destruction of a `structured_task_group` object must occur in the same lexical scope. In addition, all operations on a `structured_task_group` object must occur on the same thread. The exception to this rule is the [concurrency::structured_task_group::cancel](reference/structured-task-group-class.md#cancel) and [concurrency::structured_task_group::is_canceling](reference/structured-task-group-class.md#is_canceling) methods. A child task can call these methods to cancel the parent task group or check for cancelation at any time.

You can run additional tasks on a `task_group` object after you call the [concurrency::task_group::wait](reference/task-group-class.md#wait) or [concurrency::task_group::run_and_wait](reference/task-group-class.md#run_and_wait) method. Conversely, if you run additional tasks on a `structured_task_group` object after you call the [concurrency::structured_task_group::wait](reference/structured-task-group-class.md#wait) or [concurrency::structured_task_group::run_and_wait](reference/structured-task-group-class.md#run_and_wait) methods, then the behavior is undefined.

Because the `structured_task_group` class does not synchronize across threads, it has less execution overhead than the `task_group` class. Therefore, if your problem does not require that you schedule work from multiple threads and you cannot use the `parallel_invoke` algorithm, the `structured_task_group` class can help you write better performing code.

If you use one `structured_task_group` object inside another `structured_task_group` object, the inner object must finish and be destroyed before the outer object finishes. The `task_group` class does not require for nested task groups to finish before the outer group finishes.

Unstructured task groups and structured task groups work with task handles in different ways. You can pass work functions directly to a `task_group` object; the `task_group` object will create and manage the task handle for you. The `structured_task_group` class requires you to manage a `task_handle` object for each task. Every `task_handle` object must remain valid throughout the lifetime of its associated `structured_task_group` object. Use the [concurrency::make_task](reference/concurrency-namespace-functions.md#make_task) function to create a `task_handle` object, as shown in the following basic example:

[!code-cpp[concrt-make-task-structure#1](../../parallel/concrt/codesnippet/cpp/task-parallelism-concurrency-runtime_16.cpp)]

To manage task handles for cases where you have a variable number of tasks, use a stack-allocation routine such as [_malloca](../../c-runtime-library/reference/malloca.md) or a container class, such as std::[vector](../../standard-library/vector-class.md).

Both `task_group` and `structured_task_group` support cancellation. For more information about cancellation, see [Cancellation in the PPL](cancellation-in-the-ppl.md).

## <a name="example"></a> Example

The following basic example shows how to work with task groups. This example uses the `parallel_invoke` algorithm to perform two tasks concurrently. Each task adds sub-tasks to a `task_group` object. Note that the `task_group` class allows for multiple tasks to add tasks to it concurrently.

[!code-cpp[concrt-using-task-groups#1](../../parallel/concrt/codesnippet/cpp/task-parallelism-concurrency-runtime_17.cpp)]

The following is sample output for this example:

```Output
Message from task: Hello
Message from task: 3.14
Message from task: 42
```

Because the `parallel_invoke` algorithm runs tasks concurrently, the order of the output messages could vary.

For complete examples that show how to use the `parallel_invoke` algorithm, see [How to: Use parallel_invoke to Write a Parallel Sort Routine](../../parallel/concrt/how-to-use-parallel-invoke-to-write-a-parallel-sort-routine.md) and [How to: Use parallel_invoke to Execute Parallel Operations](../../parallel/concrt/how-to-use-parallel-invoke-to-execute-parallel-operations.md). For a complete example that uses the `task_group` class to implement asynchronous futures, see [Walkthrough: Implementing Futures](../../parallel/concrt/walkthrough-implementing-futures.md).

## <a name="robust"></a> Robust Programming

Make sure that you understand the role of cancellation and exception handling when you use tasks, task groups, and parallel algorithms. For example, in a tree of parallel work, a task that is canceled prevents child tasks from running. This can cause problems if one of the child tasks performs an operation that is important to your application, such as freeing a resource. In addition, if a child task throws an exception, that exception could propagate through an object destructor and cause undefined behavior in your application. For an example that illustrates these points, see the [Understand how Cancellation and Exception Handling Affect Object Destruction](../../parallel/concrt/best-practices-in-the-parallel-patterns-library.md#object-destruction) section in the Best Practices in the Parallel Patterns Library document. For more information about the cancellation and exception-handling models in the PPL, see [Cancellation](../../parallel/concrt/cancellation-in-the-ppl.md) and [Exception Handling](../../parallel/concrt/exception-handling-in-the-concurrency-runtime.md).

## Related Topics

|Title|Description|
|-----------|-----------------|
|[How to: Use parallel_invoke to Write a Parallel Sort Routine](../../parallel/concrt/how-to-use-parallel-invoke-to-write-a-parallel-sort-routine.md)|Shows how to use the `parallel_invoke` algorithm to improve the performance of the bitonic sort algorithm.|
|[How to: Use parallel_invoke to Execute Parallel Operations](../../parallel/concrt/how-to-use-parallel-invoke-to-execute-parallel-operations.md)|Shows how to use the `parallel_invoke` algorithm to improve the performance of a program that performs multiple operations on a shared data source.|
|[How to: Create a Task that Completes After a Delay](../../parallel/concrt/how-to-create-a-task-that-completes-after-a-delay.md)|Shows how to use the `task`, `cancellation_token_source`, `cancellation_token`, and `task_completion_event` classes to create a task that completes after a delay.|
|[Walkthrough: Implementing Futures](../../parallel/concrt/walkthrough-implementing-futures.md)|Shows how to combine existing functionality in the Concurrency Runtime into something that does more.|
|[Parallel Patterns Library (PPL)](../../parallel/concrt/parallel-patterns-library-ppl.md)|Describes the PPL, which provides an imperative programming model for developing concurrent applications.|

## Reference

[task Class (Concurrency Runtime)](../../parallel/concrt/reference/task-class.md)

[task_completion_event Class](../../parallel/concrt/reference/task-completion-event-class.md)

[when_all Function](reference/concurrency-namespace-functions.md#when_all)

[when_any Function](reference/concurrency-namespace-functions.md#when_any)

[task_group Class](reference/task-group-class.md)

[parallel_invoke Function](reference/concurrency-namespace-functions.md#parallel_invoke)

[structured_task_group Class](../../parallel/concrt/reference/structured-task-group-class.md)
