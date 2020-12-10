---
description: "Learn more about: Memory Management Functions"
title: "Memory Management Functions"
ms.date: "11/04/2016"
helpviewer_keywords: ["memory management functions [Concurrency Runtime]"]
ms.assetid: d303dd2a-dfa4-4d90-a508-f6aa290bb9ea
---
# Memory Management Functions

This document describes the memory management functions that the Concurrency Runtime provides to help you allocate and free memory in a concurrent manner.

> [!TIP]
> The Concurrency Runtime provides a default scheduler, and therefore you are not required to create one in your application. Because the Task Scheduler helps you fine-tune the performance of your applications, we recommend that you start with the [Parallel Patterns Library (PPL)](../../parallel/concrt/parallel-patterns-library-ppl.md) or the [Asynchronous Agents Library](../../parallel/concrt/asynchronous-agents-library.md) if you are new to the Concurrency Runtime.

The Concurrency Runtime provides two memory management functions that are optimized for allocating and freeing blocks of memory in a concurrent manner. The [concurrency::Alloc](reference/concurrency-namespace-functions.md#alloc) function allocates a block of memory by using the specified size. The [concurrency::Free](reference/concurrency-namespace-functions.md#free) function frees the memory that was allocated by `Alloc`.

> [!NOTE]
> The `Alloc` and `Free` functions rely on each other. Use the `Free` function only to release memory that you allocate by using the `Alloc` function. Also, when you use the `Alloc` function to allocate memory, use only the `Free` function to release that memory.

Use the `Alloc` and `Free` functions when you allocate and free a fixed set of allocation sizes from different threads or tasks. The Concurrency Runtime caches memory that it allocates from the C Runtime heap. The Concurrency Runtime holds a separate memory cache for each running thread; therefore, the runtime manages memory without the use of locks or memory barriers. An application benefits more from the `Alloc` and `Free` functions when the memory cache is accessed more frequently. For example, a thread that frequently calls both `Alloc` and `Free` benefits more than a thread that primarily calls `Alloc` or `Free`.

> [!NOTE]
> When you use these memory management functions, and your application uses lots of memory, the application may enter a low-memory condition sooner than you expect. Because the memory blocks that are cached by one thread are not available to any other thread, if one thread holds lots of memory, that memory is not available.

## Example

For an example that uses the `Alloc` and `Free` functions to improve memory performance, see [How to: Use Alloc and Free to Improve Memory Performance](../../parallel/concrt/how-to-use-alloc-and-free-to-improve-memory-performance.md).

## See also

[Task Scheduler](../../parallel/concrt/task-scheduler-concurrency-runtime.md)<br/>
[How to: Use Alloc and Free to Improve Memory Performance](../../parallel/concrt/how-to-use-alloc-and-free-to-improve-memory-performance.md)
