---
description: "Learn more about: Best Practices in the Parallel Patterns Library"
title: "Best Practices in the Parallel Patterns Library"
ms.date: "11/04/2016"
helpviewer_keywords: ["Parallel Patterns Library, practices to avoid", "practices to avoid, Parallel Patterns Library", "best practices, Parallel Patterns Library", "Parallel Patterns Library, best practices"]
ms.assetid: e43e0304-4d54-4bd8-a3b3-b8673559a9d7
---
# Best Practices in the Parallel Patterns Library

This document describes how best to make effective use of the Parallel Patterns Library (PPL). The PPL provides general-purpose containers, objects, and algorithms for performing fine-grained parallelism.

For more information about the PPL, see [Parallel Patterns Library (PPL)](../../parallel/concrt/parallel-patterns-library-ppl.md).

## <a name="top"></a> Sections

This document contains the following sections:

- [Do Not Parallelize Small Loop Bodies](#small-loops)

- [Express Parallelism at the Highest Possible Level](#highest)

- [Use parallel_invoke to Solve Divide-and-Conquer Problems](#divide-and-conquer)

- [Use Cancellation or Exception Handling to Break from a Parallel Loop](#breaking-loops)

- [Understand how Cancellation and Exception Handling Affect Object Destruction](#object-destruction)

- [Do Not Block Repeatedly in a Parallel Loop](#repeated-blocking)

- [Do Not Perform Blocking Operations When You Cancel Parallel Work](#blocking)

- [Do Not Write to Shared Data in a Parallel Loop](#shared-writes)

- [When Possible, Avoid False Sharing](#false-sharing)

- [Make Sure That Variables Are Valid Throughout the Lifetime of a Task](#lifetime)

## <a name="small-loops"></a> Do Not Parallelize Small Loop Bodies

The parallelization of relatively small loop bodies can cause the associated scheduling overhead to outweigh the benefits of parallel processing. Consider the following example, which adds each pair of elements in two arrays.

[!code-cpp[concrt-small-loops#1](../../parallel/concrt/codesnippet/cpp/best-practices-in-the-parallel-patterns-library_1.cpp)]

The workload for each parallel loop iteration is too small to benefit from the overhead for parallel processing. You can improve the performance of this loop by performing more work in the loop body or by performing the loop serially.

[[Top](#top)]

## <a name="highest"></a> Express Parallelism at the Highest Possible Level

When you parallelize code only at the low level, you can introduce a fork-join construct that does not scale as the number of processors increases. A *fork-join* construct is a construct where one task divides its work into smaller parallel subtasks and waits for those subtasks to finish. Each subtask can recursively divide itself into additional subtasks.

Although the fork-join model can be useful for solving a variety of problems, there are situations where the synchronization overhead can decrease scalability. For example, consider the following serial code that processes image data.

[!code-cpp[concrt-image-processing-filter#20](../../parallel/concrt/codesnippet/cpp/best-practices-in-the-parallel-patterns-library_2.cpp)]

Because each loop iteration is independent, you can parallelize much of the work, as shown in the following example. This example uses the [concurrency::parallel_for](reference/concurrency-namespace-functions.md#parallel_for) algorithm to parallelize the outer loop.

[!code-cpp[concrt-image-processing-filter#3](../../parallel/concrt/codesnippet/cpp/best-practices-in-the-parallel-patterns-library_3.cpp)]

The following example illustrates a fork-join construct by calling the `ProcessImage` function in a loop. Each call to `ProcessImage` does not return until each subtask finishes.

[!code-cpp[concrt-image-processing-filter#21](../../parallel/concrt/codesnippet/cpp/best-practices-in-the-parallel-patterns-library_4.cpp)]

If each iteration of the parallel loop either performs almost no work, or the work that is performed by the parallel loop is imbalanced, that is, some loop iterations take longer than others, the scheduling overhead that is required to frequently fork and join work can outweigh the benefit to parallel execution. This overhead increases as the number of processors increases.

To reduce the amount of scheduling overhead in this example, you can parallelize outer loops before you parallelize inner loops or use another parallel construct such as pipelining. The following example modifies the `ProcessImages` function to use the [concurrency::parallel_for_each](reference/concurrency-namespace-functions.md#parallel_for_each) algorithm to parallelize the outer loop.

[!code-cpp[concrt-image-processing-filter#22](../../parallel/concrt/codesnippet/cpp/best-practices-in-the-parallel-patterns-library_5.cpp)]

For a similar example that uses a pipeline to perform image processing in parallel, see [Walkthrough: Creating an Image-Processing Network](../../parallel/concrt/walkthrough-creating-an-image-processing-network.md).

[[Top](#top)]

## <a name="divide-and-conquer"></a> Use parallel_invoke to Solve Divide-and-Conquer Problems

A *divide-and-conquer* problem is a form of the fork-join construct that uses recursion to break a task into subtasks. In addition to the [concurrency::task_group](reference/task-group-class.md) and [concurrency::structured_task_group](../../parallel/concrt/reference/structured-task-group-class.md) classes, you can also use the [concurrency::parallel_invoke](reference/concurrency-namespace-functions.md#parallel_invoke) algorithm to solve divide-and-conquer problems. The `parallel_invoke` algorithm has a more succinct syntax than task group objects, and is useful when you have a fixed number of parallel tasks.

The following example illustrates the use of the `parallel_invoke` algorithm to implement the bitonic sorting algorithm.

[!code-cpp[concrt-parallel-bitonic-sort#12](../../parallel/concrt/codesnippet/cpp/best-practices-in-the-parallel-patterns-library_6.cpp)]

To reduce overhead, the `parallel_invoke` algorithm performs the last of the series of tasks on the calling context.

For the complete version of this example, see [How to: Use parallel_invoke to Write a Parallel Sort Routine](../../parallel/concrt/how-to-use-parallel-invoke-to-write-a-parallel-sort-routine.md). For more information about the `parallel_invoke` algorithm, see [Parallel Algorithms](../../parallel/concrt/parallel-algorithms.md).

[[Top](#top)]

## <a name="breaking-loops"></a> Use Cancellation or Exception Handling to Break from a Parallel Loop

The PPL provides two ways to cancel the parallel work that is performed by a task group or parallel algorithm. One way is to use the cancellation mechanism that is provided by the [concurrency::task_group](reference/task-group-class.md) and [concurrency::structured_task_group](../../parallel/concrt/reference/structured-task-group-class.md) classes. The other way is to throw an exception in the body of a task work function. The cancellation mechanism is more efficient than exception handling at canceling a tree of parallel work. A *parallel work tree* is a group of related task groups in which some task groups contain other task groups. The cancellation mechanism cancels a task group and its child task groups in a top-down manner. Conversely, exception handling works in a bottom-up manner and must cancel each child task group independently as the exception propagates upward.

When you work directly with a task group object, use the [concurrency::task_group::cancel](reference/task-group-class.md#cancel) or [concurrency::structured_task_group::cancel](reference/structured-task-group-class.md#cancel) methods to cancel the work that belongs to that task group. To cancel a parallel algorithm, for example, `parallel_for`, create a parent task group and cancel that task group. For example, consider the following function, `parallel_find_any`, which searches for a value in an array in parallel.

[!code-cpp[concrt-parallel-array-search#2](../../parallel/concrt/codesnippet/cpp/best-practices-in-the-parallel-patterns-library_7.cpp)]

Because parallel algorithms use task groups, when one of the parallel iterations cancels the parent task group, the overall task is canceled. For the complete version of this example, see [How to: Use Cancellation to Break from a Parallel Loop](../../parallel/concrt/how-to-use-cancellation-to-break-from-a-parallel-loop.md).

Although exception handling is a less efficient way to cancel parallel work than the cancellation mechanism, there are cases where exception handling is appropriate. For example, the following method, `for_all`, recursively performs a work function on each node of a `tree` structure. In this example, the `_children` data member is a [std::list](../../standard-library/list-class.md) that contains `tree` objects.

[!code-cpp[concrt-task-tree-search#6](../../parallel/concrt/codesnippet/cpp/best-practices-in-the-parallel-patterns-library_8.cpp)]

The caller of the `tree::for_all` method can throw an exception if it does not require the work function to be called on each element of the tree. The following example shows the `search_for_value` function, which searches for a value in the provided `tree` object. The `search_for_value` function uses a work function that throws an exception when the current element of the tree matches the provided value. The `search_for_value` function uses a `try-catch` block to capture the exception and print the result to the console.

[!code-cpp[concrt-task-tree-search#3](../../parallel/concrt/codesnippet/cpp/best-practices-in-the-parallel-patterns-library_9.cpp)]

For the complete version of this example, see [How to: Use Exception Handling to Break from a Parallel Loop](../../parallel/concrt/how-to-use-exception-handling-to-break-from-a-parallel-loop.md).

For more general information about the cancellation and exception-handling mechanisms that are provided by the PPL, see [Cancellation in the PPL](cancellation-in-the-ppl.md) and [Exception Handling](../../parallel/concrt/exception-handling-in-the-concurrency-runtime.md).

[[Top](#top)]

## <a name="object-destruction"></a> Understand how Cancellation and Exception Handling Affect Object Destruction

In a tree of parallel work, a task that is canceled prevents child tasks from running. This can cause problems if one of the child tasks performs an operation that is important to your application, such as freeing a resource. In addition, task cancellation can cause an exception to propagate through an object destructor and cause undefined behavior in your application.

In the following example, the `Resource` class describes a resource and the `Container` class describes a container that holds resources. In its destructor, the `Container` class calls the `cleanup` method on two of its `Resource` members in parallel and then calls the `cleanup` method on its third `Resource` member.

[!code-cpp[concrt-parallel-resource-destruction#1](../../parallel/concrt/codesnippet/cpp/best-practices-in-the-parallel-patterns-library_10.h)]

Although this pattern has no problems on its own, consider the following code that runs two tasks in parallel. The first task creates a `Container` object and the second task cancels the overall task. For illustration, the example uses two [concurrency::event](../../parallel/concrt/reference/event-class.md) objects to make sure that the cancellation occurs after the `Container` object is created and that the `Container` object is destroyed after the cancellation operation occurs.

[!code-cpp[concrt-parallel-resource-destruction#2](../../parallel/concrt/codesnippet/cpp/best-practices-in-the-parallel-patterns-library_11.cpp)]

This example produces the following output:

```Output
Container 1: Freeing resources...Exiting program...
```

This code example contains the following issues that may cause it to behave differently than you expect:

- The cancellation of the parent task causes the child task, the call to [concurrency::parallel_invoke](reference/concurrency-namespace-functions.md#parallel_invoke), to also be canceled. Therefore, these two resources are not freed.

- The cancellation of the parent task causes the child task to throw an internal exception. Because the `Container` destructor does not handle this exception, the exception is propagated upward and the third resource is not freed.

- The exception that is thrown by the child task propagates through the `Container` destructor. Throwing from a destructor puts the application in an undefined state.

We recommend that you do not perform critical operations, such as the freeing of resources, in tasks unless you can guarantee that these tasks will not be canceled. We also recommend that you do not use runtime functionality that can throw in the destructor of your types.

[[Top](#top)]

## <a name="repeated-blocking"></a> Do Not Block Repeatedly in a Parallel Loop

A parallel loop such as [concurrency::parallel_for](reference/concurrency-namespace-functions.md#parallel_for) or [concurrency::parallel_for_each](reference/concurrency-namespace-functions.md#parallel_for_each) that is dominated by blocking operations may cause the runtime to create many threads over a short time.

The Concurrency Runtime performs additional work when a task finishes or cooperatively blocks or yields. When one parallel loop iteration blocks, the runtime might begin another iteration. When there are no available idle threads, the runtime creates a new thread.

When the body of a parallel loop occasionally blocks, this mechanism helps maximize the overall task throughput. However, when many iterations block, the runtime may create many threads to run the additional work. This could lead to low-memory conditions or poor utilization of hardware resources.

Consider the following example that calls the [concurrency::send](reference/concurrency-namespace-functions.md#send) function in each iteration of a `parallel_for` loop. Because `send` blocks cooperatively, the runtime creates a new thread to run additional work every time `send` is called.

[!code-cpp[concrt-repeated-blocking#1](../../parallel/concrt/codesnippet/cpp/best-practices-in-the-parallel-patterns-library_12.cpp)]

We recommend that you refactor your code to avoid this pattern. In this example, you can avoid the creation of additional threads by calling `send` in a serial **`for`** loop.

[[Top](#top)]

## <a name="blocking"></a> Do Not Perform Blocking Operations When You Cancel Parallel Work

When possible, do not perform blocking operations before you call the [concurrency::task_group::cancel](reference/task-group-class.md#cancel) or [concurrency::structured_task_group::cancel](reference/structured-task-group-class.md#cancel) method to cancel parallel work.

When a task performs a cooperative blocking operation, the runtime can perform other work while the first task waits for data. The runtime reschedules the waiting task when it unblocks. The runtime typically reschedules tasks that were more recently unblocked before it reschedules tasks that were less recently unblocked. Therefore, the runtime could schedule unnecessary work during the blocking operation, which leads to decreased performance. Accordingly, when you perform a blocking operation before you cancel parallel work, the blocking operation can delay the call to `cancel`. This causes other tasks to perform unnecessary work.

Consider the following example that defines the `parallel_find_answer` function, which searches for an element of the provided array that satisfies the provided predicate function. When the predicate function returns **`true`**, the parallel work function creates an `Answer` object and cancels the overall task.

[!code-cpp[concrt-blocking-cancel#1](../../parallel/concrt/codesnippet/cpp/best-practices-in-the-parallel-patterns-library_13.cpp)]

The `new` operator performs a heap allocation, which might block. The runtime performs other work only when the task performs a cooperative blocking call, such as a call to [concurrency::critical_section::lock](reference/critical-section-class.md#lock).

The following example shows how to prevent unnecessary work, and thereby improve performance. This example cancels the task group before it allocates the storage for the `Answer` object.

[!code-cpp[concrt-blocking-cancel#2](../../parallel/concrt/codesnippet/cpp/best-practices-in-the-parallel-patterns-library_14.cpp)]

[[Top](#top)]

## <a name="shared-writes"></a> Do Not Write to Shared Data in a Parallel Loop

The Concurrency Runtime provides several data structures, for example, [concurrency::critical_section](../../parallel/concrt/reference/critical-section-class.md), that synchronize concurrent access to shared data. These data structures are useful in many cases, for example, when multiple tasks infrequently require shared access to a resource.

Consider the following example that uses the [concurrency::parallel_for_each](reference/concurrency-namespace-functions.md#parallel_for_each) algorithm and a `critical_section` object to compute the count of prime numbers in a [std::array](../../standard-library/array-class-stl.md) object. This example does not scale because each thread must wait to access the shared variable `prime_sum`.

[!code-cpp[concrt-parallel-sum-of-primes#2](../../parallel/concrt/codesnippet/cpp/best-practices-in-the-parallel-patterns-library_15.cpp)]

This example can also lead to poor performance because the frequent locking operation effectively serializes the loop. In addition, when a Concurrency Runtime object performs a blocking operation, the scheduler might create an additional thread to perform other work while the first thread waits for data. If the runtime creates many threads because many tasks are waiting for shared data, the application can perform poorly or enter a low-resource state.

The PPL defines the [concurrency::combinable](../../parallel/concrt/reference/combinable-class.md) class, which helps you eliminate shared state by providing access to shared resources in a lock-free manner. The `combinable` class provides thread-local storage that lets you perform fine-grained computations and then merge those computations into a final result. You can think of a `combinable` object as a reduction variable.

The following example modifies the previous one by using a `combinable` object instead of a `critical_section` object to compute the sum. This example scales because each thread holds its own local copy of the sum. This example uses the [concurrency::combinable::combine](reference/combinable-class.md#combine) method to merge the local computations into the final result.

[!code-cpp[concrt-parallel-sum-of-primes#3](../../parallel/concrt/codesnippet/cpp/best-practices-in-the-parallel-patterns-library_16.cpp)]

For the complete version of this example, see [How to: Use combinable to Improve Performance](../../parallel/concrt/how-to-use-combinable-to-improve-performance.md). For more information about the `combinable` class, see [Parallel Containers and Objects](../../parallel/concrt/parallel-containers-and-objects.md).

[[Top](#top)]

## <a name="false-sharing"></a> When Possible, Avoid False Sharing

*False sharing* occurs when multiple concurrent tasks that are running on separate processors write to variables that are located on the same cache line. When one task writes to one of the variables, the cache line for both variables is invalidated. Each processor must reload the cache line every time that the cache line is invalidated. Therefore, false sharing can cause decreased performance in your application.

The following basic example shows two concurrent tasks that each increment a shared counter variable.

[!code-cpp[concrt-false-sharing#1](../../parallel/concrt/codesnippet/cpp/best-practices-in-the-parallel-patterns-library_17.cpp)]

To eliminate the sharing of data between the two tasks, you can modify the example to use two counter variables. This example computes the final counter value after the tasks finish. However, this example illustrates false sharing because the variables `count1` and `count2` are likely to be located on the same cache line.

[!code-cpp[concrt-false-sharing#2](../../parallel/concrt/codesnippet/cpp/best-practices-in-the-parallel-patterns-library_18.cpp)]

One way to eliminate false sharing is to make sure that the counter variables are on separate cache lines. The following example aligns the variables `count1` and `count2` on 64-byte boundaries.

[!code-cpp[concrt-false-sharing#3](../../parallel/concrt/codesnippet/cpp/best-practices-in-the-parallel-patterns-library_19.cpp)]

This example assumes that the size of the memory cache is 64 or fewer bytes.

We recommend that you use the [concurrency::combinable](../../parallel/concrt/reference/combinable-class.md) class when you must share data among tasks. The `combinable` class creates thread-local variables in such a way that false sharing is less likely. For more information about the `combinable` class, see [Parallel Containers and Objects](../../parallel/concrt/parallel-containers-and-objects.md).

[[Top](#top)]

## <a name="lifetime"></a> Make Sure That Variables Are Valid Throughout the Lifetime of a Task

When you provide a lambda expression to a task group or parallel algorithm, the capture clause specifies whether the body of the lambda expression accesses variables in the enclosing scope by value or by reference. When you pass variables to a lambda expression by reference, you must guarantee that the lifetime of that variable persists until the task finishes.

Consider the following example that defines the `object` class and the `perform_action` function. The `perform_action` function creates an `object` variable and performs some action on that variable asynchronously. Because the task is not guaranteed to finish before the `perform_action` function returns, the program will crash or exhibit unspecified behavior if the `object` variable is destroyed when the task is running.

[!code-cpp[concrt-lambda-lifetime#1](../../parallel/concrt/codesnippet/cpp/best-practices-in-the-parallel-patterns-library_20.cpp)]

Depending on the requirements of your application, you can use one of the following techniques to guarantee that variables remain valid throughout the lifetime of every task.

The following example passes the `object` variable by value to the task. Therefore, the task operates on its own copy of the variable.

[!code-cpp[concrt-lambda-lifetime#2](../../parallel/concrt/codesnippet/cpp/best-practices-in-the-parallel-patterns-library_21.cpp)]

Because the `object` variable is passed by value, any state changes that occur to this variable do not appear in the original copy.

The following example uses the [concurrency::task_group::wait](reference/task-group-class.md#wait) method to make sure that the task finishes before the `perform_action` function returns.

[!code-cpp[concrt-lambda-lifetime#3](../../parallel/concrt/codesnippet/cpp/best-practices-in-the-parallel-patterns-library_22.cpp)]

Because the task now finishes before the function returns, the `perform_action` function no longer behaves asynchronously.

The following example modifies the `perform_action` function to take a reference to the `object` variable. The caller must guarantee that the lifetime of the `object` variable is valid until the task finishes.

[!code-cpp[concrt-lambda-lifetime#4](../../parallel/concrt/codesnippet/cpp/best-practices-in-the-parallel-patterns-library_23.cpp)]

You can also use a pointer to control the lifetime of an object that you pass to a task group or parallel algorithm.

For more information about lambda expressions, see [Lambda Expressions](../../cpp/lambda-expressions-in-cpp.md).

[[Top](#top)]

## See also

[Concurrency Runtime Best Practices](../../parallel/concrt/concurrency-runtime-best-practices.md)<br/>
[Parallel Patterns Library (PPL)](../../parallel/concrt/parallel-patterns-library-ppl.md)<br/>
[Parallel Containers and Objects](../../parallel/concrt/parallel-containers-and-objects.md)<br/>
[Parallel Algorithms](../../parallel/concrt/parallel-algorithms.md)<br/>
[Cancellation in the PPL](cancellation-in-the-ppl.md)<br/>
[Exception Handling](../../parallel/concrt/exception-handling-in-the-concurrency-runtime.md)<br/>
[Walkthrough: Creating an Image-Processing Network](../../parallel/concrt/walkthrough-creating-an-image-processing-network.md)<br/>
[How to: Use parallel_invoke to Write a Parallel Sort Routine](../../parallel/concrt/how-to-use-parallel-invoke-to-write-a-parallel-sort-routine.md)<br/>
[How to: Use Cancellation to Break from a Parallel Loop](../../parallel/concrt/how-to-use-cancellation-to-break-from-a-parallel-loop.md)<br/>
[How to: Use combinable to Improve Performance](../../parallel/concrt/how-to-use-combinable-to-improve-performance.md)<br/>
[Best Practices in the Asynchronous Agents Library](../../parallel/concrt/best-practices-in-the-asynchronous-agents-library.md)<br/>
[General Best Practices in the Concurrency Runtime](../../parallel/concrt/general-best-practices-in-the-concurrency-runtime.md)
