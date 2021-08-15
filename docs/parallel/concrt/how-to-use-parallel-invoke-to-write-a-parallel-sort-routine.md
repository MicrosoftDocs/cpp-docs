---
description: "Learn more about: How to: Use parallel_invoke to Write a Parallel Sort Routine"
title: "How to: Use parallel_invoke to Write a Parallel Sort Routine"
ms.date: "11/04/2016"
helpviewer_keywords: ["task_handle class, example", "task_group class, example", "make_task function, example", "structured_task_group class, example", "improving parallel performance with task groups [Concurrency Runtime]"]
ms.assetid: 53979a2a-525d-4437-8952-f1ff85b37673
---
# How to: Use parallel_invoke to Write a Parallel Sort Routine

This document describes how to use the [parallel_invoke](../../parallel/concrt/parallel-algorithms.md#parallel_invoke) algorithm to improve the performance of the bitonic sort algorithm. The bitonic sort algorithm recursively divides the input sequence into smaller sorted partitions. The bitonic sort algorithm can run in parallel because each partition operation is independent of all other operations.

Although the bitonic sort is an example of a *sorting network* that sorts all combinations of input sequences, this example sorts sequences whose lengths are a power of two.

> [!NOTE]
> This example uses a parallel sort routine for illustration. You can also use the built-in sorting algorithms that the PPL provides: [concurrency::parallel_sort](reference/concurrency-namespace-functions.md#parallel_sort), [concurrency::parallel_buffered_sort](reference/concurrency-namespace-functions.md#parallel_buffered_sort), and [concurrency::parallel_radixsort](reference/concurrency-namespace-functions.md#parallel_radixsort). For more information, see [Parallel Algorithms](../../parallel/concrt/parallel-algorithms.md).

## <a name="top"></a> Sections

This document describes the following tasks:

- [Performing Bitonic Sort Serially](#serial)

- [Using parallel_invoke to Perform Bitonic Sort in Parallel](#parallel)

## <a name="serial"></a> Performing Bitonic Sort Serially

The following example shows the serial version of the bitonic sort algorithm. The `bitonic_sort` function divides the sequence into two partitions, sorts those partitions in opposite directions, and then merges the results. This function calls itself two times recursively to sort each partition.

[!code-cpp[concrt-parallel-bitonic-sort#1](../../parallel/concrt/codesnippet/cpp/how-to-use-parallel-invoke-to-write-a-parallel-sort-routine_1.cpp)]

[[Top](#top)]

## <a name="parallel"></a> Using parallel_invoke to Perform Bitonic Sort in Parallel

This section describes how to use the `parallel_invoke` algorithm to perform the bitonic sort algorithm in parallel.

### To perform the bitonic sort algorithm in parallel

1. Add a `#include` directive for the header file ppl.h.

[!code-cpp[concrt-parallel-bitonic-sort#10](../../parallel/concrt/codesnippet/cpp/how-to-use-parallel-invoke-to-write-a-parallel-sort-routine_2.cpp)]

1. Add a **`using`** directive for the `concurrency` namespace.

[!code-cpp[concrt-parallel-bitonic-sort#11](../../parallel/concrt/codesnippet/cpp/how-to-use-parallel-invoke-to-write-a-parallel-sort-routine_3.cpp)]

1. Create a new function, called `parallel_bitonic_mege`, which uses the `parallel_invoke` algorithm to merge the sequences in parallel if there is sufficient amount of work to do. Otherwise, call `bitonic_merge` to merge the sequences serially.

[!code-cpp[concrt-parallel-bitonic-sort#2](../../parallel/concrt/codesnippet/cpp/how-to-use-parallel-invoke-to-write-a-parallel-sort-routine_4.cpp)]

1. Perform a process that resembles the one in the previous step, but for the `bitonic_sort` function.

[!code-cpp[concrt-parallel-bitonic-sort#3](../../parallel/concrt/codesnippet/cpp/how-to-use-parallel-invoke-to-write-a-parallel-sort-routine_5.cpp)]

1. Create an overloaded version of the `parallel_bitonic_sort` function that sorts the array in increasing order.

[!code-cpp[concrt-parallel-bitonic-sort#4](../../parallel/concrt/codesnippet/cpp/how-to-use-parallel-invoke-to-write-a-parallel-sort-routine_6.cpp)]

The `parallel_invoke` algorithm reduces overhead by performing the last of the series of tasks on the calling context. For example, in the `parallel_bitonic_sort` function, the first task runs on a separate context, and the second task runs on the calling context.

[!code-cpp[concrt-parallel-bitonic-sort#5](../../parallel/concrt/codesnippet/cpp/how-to-use-parallel-invoke-to-write-a-parallel-sort-routine_7.cpp)]

The following complete example performs both the serial and the parallel versions of the bitonic sort algorithm. The example also prints to the console the time that is required to perform each computation.

[!code-cpp[concrt-parallel-bitonic-sort#8](../../parallel/concrt/codesnippet/cpp/how-to-use-parallel-invoke-to-write-a-parallel-sort-routine_8.cpp)]

The following sample output is for a computer that has four processors.

```Output
serial time: 4353
parallel time: 1248
```

[[Top](#top)]

### Compiling the Code

To compile the code, copy it and then paste it in a Visual Studio project, or paste it in a file that is named `parallel-bitonic-sort.cpp` and then run the following command in a Visual Studio Command Prompt window.

> **cl.exe /EHsc parallel-bitonic-sort.cpp**

## Robust Programming

This example uses the `parallel_invoke` algorithm instead of the [concurrency::task_group](reference/task-group-class.md) class because the lifetime of each task group does not extend beyond a function. We recommend that you use `parallel_invoke` when you can because it has less execution overhead than `task group` objects, and therefore lets you write better performing code.

The parallel versions of some algorithms perform better only when there is sufficient work to do. For example, the `parallel_bitonic_merge` function calls the serial version, `bitonic_merge`, if there are 500 or fewer elements in the sequence. You can also plan your overall sorting strategy based on the amount of work. For example, it might be more efficient to use the serial version of the quick sort algorithm if the array contains fewer than 500 items, as shown in the following example:

[!code-cpp[concrt-parallel-bitonic-sort#9](../../parallel/concrt/codesnippet/cpp/how-to-use-parallel-invoke-to-write-a-parallel-sort-routine_9.cpp)]

As with any parallel algorithm, we recommend that you profile and tune your code as appropriate.

## See also

[Task Parallelism](../../parallel/concrt/task-parallelism-concurrency-runtime.md)<br/>
[parallel_invoke Function](reference/concurrency-namespace-functions.md#parallel_invoke)
