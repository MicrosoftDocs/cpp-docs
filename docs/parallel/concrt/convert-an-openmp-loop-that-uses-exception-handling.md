---
description: "Learn more about: How to: Convert an OpenMP Loop that Uses Exception Handling to Use the Concurrency Runtime"
title: "How to: Convert an OpenMP Loop that Uses Exception Handling to Use the Concurrency Runtime"
ms.date: "11/04/2016"
helpviewer_keywords: ["exception handling, converting from OpenMP to the Concurrency Runtime", "converting from OpenMP to the Concurrency Runtime, exception handling"]
ms.assetid: 03c28196-21ba-439e-8641-afab1c283e1a
---
# How to: Convert an OpenMP Loop that Uses Exception Handling to Use the Concurrency Runtime

This example demonstrates how to convert an OpenMP [parallel](../../parallel/concrt/how-to-use-parallel-invoke-to-write-a-parallel-sort-routine.md#parallel)[for](../openmp/reference/openmp-directives.md#for-openmp) loop that performs exception handling to use the Concurrency Runtime exception handling mechanism.

In OpenMP, an exception that is thrown in a parallel region must be caught and handled in the same region by the same thread. An exception that escapes the parallel region is caught by the unhandled exception handler, which terminates the process by default.

In the Concurrency Runtime, when you throw an exception in the body of a work function that you pass to a task group such as a [concurrency::task_group](reference/task-group-class.md) or [concurrency::structured_task_group](../../parallel/concrt/reference/structured-task-group-class.md) object, or to a parallel algorithm such as [concurrency::parallel_for](reference/concurrency-namespace-functions.md#parallel_for), the runtime stores that exception and marshals it to the context that waits for the task group or algorithm to finish. For task groups, the waiting context is the context that calls [concurrency::task_group::wait](reference/task-group-class.md#wait), [concurrency::structured_task_group::wait](reference/structured-task-group-class.md#wait), [concurrency::task_group::run_and_wait](reference/task-group-class.md#run_and_wait), or [concurrency::structured_task_group::run_and_wait](reference/structured-task-group-class.md#run_and_wait). For a parallel algorithm, the waiting context is the context that called that algorithm. The runtime also stops all active tasks that are in the task group, including those in child task groups, and discards any tasks that have not yet started.

## Example

This example demonstrates how to handle exceptions in an OpenMP `parallel` region and in a call to `parallel_for`. The `do_work` function performs a memory allocation request that does not succeed and therefore throws an exception of type [std::bad_alloc](../../standard-library/bad-alloc-class.md). In the version that uses OpenMP, the thread that throws the exception must also catch it. In other words, each iteration of an OpenMP parallel loop must handle the exception. In the version that uses the Concurrency Runtime, the main thread catches an exception that is thrown by another thread.

[!code-cpp[concrt-openmp#3](../../parallel/concrt/codesnippet/cpp/convert-an-openmp-loop-that-uses-exception-handling_1.cpp)]

This example produces the following output.

```Output
Using OpenMP...
An error of type 'class std::bad_alloc' occurred.
An error of type 'class std::bad_alloc' occurred.
An error of type 'class std::bad_alloc' occurred.
An error of type 'class std::bad_alloc' occurred.
An error of type 'class std::bad_alloc' occurred.
An error of type 'class std::bad_alloc' occurred.
An error of type 'class std::bad_alloc' occurred.
An error of type 'class std::bad_alloc' occurred.
An error of type 'class std::bad_alloc' occurred.
An error of type 'class std::bad_alloc' occurred.
Using the Concurrency Runtime...
An error of type 'class std::bad_alloc' occurred.
```

In the version of this example that uses OpenMP, the exception occurs in and is handled by each loop iteration. In the version that uses the Concurrency Runtime, the runtime stores the exception, stops all active tasks, discards any tasks that have not yet started, and marshals the exception to the context that calls `parallel_for`.

If you require that the version that uses OpenMP terminates after the exception occurs, you could use a Boolean flag to signal to other loop iterations that the error occurred. As in the example in the topic [How to: Convert an OpenMP Loop that Uses Cancellation to Use the Concurrency Runtime](../../parallel/concrt/convert-an-openmp-loop-that-uses-cancellation.md), subsequent loop iterations would do nothing if the flag is set. Conversely, if you require that the loop that uses the Concurrency Runtime continues after the exception occurs, handle the exception in the parallel loop body itself.

Other components of the Concurrency Runtime, such as asynchronous agents and lightweight tasks, do not transport exceptions. Instead, unhandled exceptions are caught by the unhandled exception handler, which terminates the process by default. For more information about exception handling, see [Exception Handling](../../parallel/concrt/exception-handling-in-the-concurrency-runtime.md).

For more information about `parallel_for` and other parallel algorithms, see [Parallel Algorithms](../../parallel/concrt/parallel-algorithms.md).

## Compiling the Code

Copy the example code and paste it in a Visual Studio project, or paste it in a file that is named `concrt-omp-exceptions.cpp` and then run the following command in a Visual Studio Command Prompt window.

> **cl.exe /EHsc /openmp concrt-omp-exceptions.cpp**

## See also

[Migrating from OpenMP to the Concurrency Runtime](../../parallel/concrt/migrating-from-openmp-to-the-concurrency-runtime.md)<br/>
[Exception Handling](../../parallel/concrt/exception-handling-in-the-concurrency-runtime.md)<br/>
[Parallel Algorithms](../../parallel/concrt/parallel-algorithms.md)
