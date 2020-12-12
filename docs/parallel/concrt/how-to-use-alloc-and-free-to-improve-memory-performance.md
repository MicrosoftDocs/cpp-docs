---
description: "Learn more about: How to: Use Alloc and Free to Improve Memory Performance"
title: "How to: Use Alloc and Free to Improve Memory Performance"
ms.date: "11/04/2016"
helpviewer_keywords: ["Alloc and Free, using [Concurrency Runtime]", "Using Alloc and Free [Concurrency Runtime]"]
ms.assetid: e1fab9e8-a97d-4104-bead-e95958db79f9
---
# How to: Use Alloc and Free to Improve Memory Performance

This document shows how to use the [concurrency::Alloc](reference/concurrency-namespace-functions.md#alloc) and [concurrency::Free](reference/concurrency-namespace-functions.md#free) functions to improve memory performance. It compares the time that is required to reverse the elements of an array in parallel for three different types that each specify the `new` and `delete` operators.

The `Alloc` and `Free` functions are most useful when multiple threads frequently call both `Alloc` and `Free`. The runtime holds a separate memory cache for each thread; therefore, the runtime manages memory without the use of locks or memory barriers.

## Example: Types that specify new and delete operators

The following example shows three types that each specify the `new` and `delete` operators. The `new_delete` class uses the global `new` and `delete` operators, the `malloc_free` class uses the C Runtime [malloc](../../c-runtime-library/reference/malloc.md) and [free](../../c-runtime-library/reference/free.md) functions, and the `Alloc_Free` class uses the Concurrency Runtime `Alloc` and `Free` functions.

[!code-cpp[concrt-allocators#1](../../parallel/concrt/codesnippet/cpp/how-to-use-alloc-and-free-to-improve-memory-performance_1.cpp)]

## Example: swap and reverse_array functions

The following example shows the `swap` and `reverse_array` functions. The `swap` function exchanges the contents of the array at the specified indices. It allocates memory from the heap for the temporary variable. The `reverse_array` function creates a large array and computes the time that is required to reverse that array several times in parallel.

[!code-cpp[concrt-allocators#2](../../parallel/concrt/codesnippet/cpp/how-to-use-alloc-and-free-to-improve-memory-performance_2.cpp)]

## Example: wmain function

The following example shows the `wmain` function, which computes the time that is required for the `reverse_array` function to act on the `new_delete`, `malloc_free`, and `Alloc_Free` types, each of which uses a different memory allocation scheme.

[!code-cpp[concrt-allocators#3](../../parallel/concrt/codesnippet/cpp/how-to-use-alloc-and-free-to-improve-memory-performance_3.cpp)]

## Complete code example

The complete example follows.

[!code-cpp[concrt-allocators#4](../../parallel/concrt/codesnippet/cpp/how-to-use-alloc-and-free-to-improve-memory-performance_4.cpp)]

This example produces the following sample output for a computer that has four processors.

```Output
Took 2031 ms with new/delete.
Took 1672 ms with malloc/free.
Took 656 ms with Alloc/Free.
```

In this example, the type that uses the `Alloc` and `Free` functions provides the best memory performance because the `Alloc` and `Free` functions are optimized for frequently allocating and freeing blocks of memory from multiple threads.

## Compiling the Code

Copy the example code and paste it in a Visual Studio project, or paste it in a file that is named `allocators.cpp` and then run the following command in a Visual Studio Command Prompt window.

> **cl.exe /EHsc allocators.cpp**

## See also

[Memory Management Functions](../../parallel/concrt/memory-management-functions.md)<br/>
[Alloc Function](reference/concurrency-namespace-functions.md#alloc)<br/>
[Free Function](reference/concurrency-namespace-functions.md#free)
