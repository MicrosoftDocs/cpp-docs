---
description: "Learn more about: How to: Use Exception Handling to Break from a Parallel Loop"
title: "How to: Use Exception Handling to Break from a Parallel Loop"
ms.date: "11/04/2016"
helpviewer_keywords: ["search algorithm, writing [Concurrency Runtime]", "writing a search algorithm [Concurrency Runtime]"]
ms.assetid: 16d7278c-2d10-4014-9f58-f1899e719ff9
---
# How to: Use Exception Handling to Break from a Parallel Loop

This topic shows how to write a search algorithm for a basic tree structure.

The topic [Cancellation](cancellation-in-the-ppl.md) explains the role of cancellation in the Parallel Patterns Library. The use of exception handling is a less efficient way to cancel parallel work than the use of the [concurrency::task_group::cancel](reference/task-group-class.md#cancel) and [concurrency::structured_task_group::cancel](reference/structured-task-group-class.md#cancel) methods. However, one scenario where the use of exception handling to cancel work is appropriate is when you call into a third-party library that uses tasks or parallel algorithms but does not provide a `task_group` or `structured_task_group` object to cancel.

## Example: Basic tree type

The following example shows a basic `tree` type that contains a data element and a list of child nodes. The following section shows the body of the `for_all` method, which recursively performs a work function on each child node.

[!code-cpp[concrt-task-tree-search#2](../../parallel/concrt/codesnippet/cpp/how-to-use-exception-handling-to-break-from-a-parallel-loop_1.cpp)]

## Example: Perform work in parallel

The following example shows the `for_all` method. It uses the [concurrency::parallel_for_each](reference/concurrency-namespace-functions.md#parallel_for_each) algorithm to perform a work function on each node of the tree in parallel.

[!code-cpp[concrt-task-tree-search#1](../../parallel/concrt/codesnippet/cpp/how-to-use-exception-handling-to-break-from-a-parallel-loop_2.cpp)]

## Example:  Search the tree for a value

The following example shows the `search_for_value` function, which searches for a value in the provided `tree` object. This function passes to the `for_all` method a work function that throws when it finds a tree node that contains the provided value.

Assume that the `tree` class is provided by a third-party library, and that you cannot modify it. In this case, the use of exception handling is appropriate because the `for_all` method does not provide a `task_group` or `structured_task_group` object to the caller. Therefore, the work function is unable to directly cancel its parent task group.

When the work function that you provide to a task group throws an exception, the runtime stops all tasks that are in the task group (including any child task groups) and discards any tasks that have not yet started. The `search_for_value` function uses a **`try`**-**`catch`** block to capture the exception and print the result to the console.

[!code-cpp[concrt-task-tree-search#3](../../parallel/concrt/codesnippet/cpp/how-to-use-exception-handling-to-break-from-a-parallel-loop_3.cpp)]

## Example: Create and search a tree in parallel

The following example creates a `tree` object and searches it for several values in parallel. The `build_tree` function is shown later in this topic.

[!code-cpp[concrt-task-tree-search#4](../../parallel/concrt/codesnippet/cpp/how-to-use-exception-handling-to-break-from-a-parallel-loop_4.cpp)]

This example uses the [concurrency::parallel_invoke](reference/concurrency-namespace-functions.md#parallel_invoke) algorithm to search for values in parallel. For more information about this algorithm, see [Parallel Algorithms](../../parallel/concrt/parallel-algorithms.md).

## Example: Finished exception handling code sample

The following complete example uses exception handling to search for values in a basic tree structure.

[!code-cpp[concrt-task-tree-search#5](../../parallel/concrt/codesnippet/cpp/how-to-use-exception-handling-to-break-from-a-parallel-loop_5.cpp)]

This example produces the following sample output.

```Output
Found a node with value 32614.
Found a node with value 86131.
Did not find node with value 17522.
```

## Compiling the Code

Copy the example code and paste it in a Visual Studio project, or paste it in a file that is named `task-tree-search.cpp` and then run the following command in a Visual Studio Command Prompt window.

> **cl.exe /EHsc task-tree-search.cpp**

## See also

[Cancellation in the PPL](cancellation-in-the-ppl.md)<br/>
[Exception Handling](../../parallel/concrt/exception-handling-in-the-concurrency-runtime.md)<br/>
[Task Parallelism](../../parallel/concrt/task-parallelism-concurrency-runtime.md)<br/>
[Parallel Algorithms](../../parallel/concrt/parallel-algorithms.md)<br/>
[task_group Class](reference/task-group-class.md)<br/>
[structured_task_group Class](../../parallel/concrt/reference/structured-task-group-class.md)<br/>
[parallel_for_each Function](reference/concurrency-namespace-functions.md#parallel_for_each)
