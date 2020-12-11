---
description: "Learn more about: Tips for Improving Time-Critical Code"
title: "Tips for Improving Time-Critical Code"
ms.date: "11/04/2016"
helpviewer_keywords: ["_lsearch function", "qsort function", "background tasks", "standard sort routines", "clock cycle losses", "code, time-critical", "memory [C++], monitoring usage", "execution, speed improvements", "local heap performance", "optimization [C++], time-critical code", "performance [C++], time-critical code", "threading [C++], performance", "cache [C++], hits and misses", "linear search performance", "page faults", "best practices, time-critical code", "searching [C++], improving performance", "sorting data, improving performance", "threading [C++], best practices", "threading [C++], background tasks", "lists, sorting", "bsearch function", "MFC [C++], performance", "sort routines", "programs [C++], performance", "_lfind function", "heap allocation, time-critical code performance"]
ms.assetid: 3e95a8cc-6239-48d1-9d6d-feb701eccb54
---
# Tips for Improving Time-Critical Code

Writing fast code requires understanding all aspects of your application and how it interacts with the system. This topic suggests alternatives to some of the more obvious coding techniques to help you ensure that the time-critical portions of your code perform satisfactorily.

To summarize, improving time-critical code requires that you:

- Know which parts of your program have to be fast.

- Know the size and speed of your code.

- Know the cost of new features.

- Know the minimum work needed to accomplish the job.

To gather information on the performance of your code, you can use the performance monitor (perfmon.exe).

## Sections in this Article

- [Cache Misses and Page Faults](#_core_cache_hits_and_page_faults)

- [Sorting and Searching](#_core_sorting_and_searching)

- [MFC and Class Libraries](#_core_mfc_and_class_libraries)

- [Shared Libraries](#vcovrsharedlibraries)

- [Heaps](#_core_heaps)

- [Threads](#_core_threads)

- [Small Working Set](#_core_small_working_set)

## <a name="_core_cache_hits_and_page_faults"></a> Cache Misses and Page Faults

Missed cache hits, on both the internal and external cache, as well as page faults (going to secondary storage for program instructions and data) slow the performance of a program.

A CPU cache hit can cost your program 10-20 clock cycles. An external cache hit can cost 20-40 clock cycles. A page fault can cost one million clock cycles (assuming a processor that handles 500 million instructions/second and a time of 2 millisecond for a page fault). Therefore, it is in the best interest of program execution to write code that will reduce the number of missed cache hits and page faults.

One reason for slow programs is that they take more page faults or miss the cache more often than necessary. To avoid this, it's important to use data structures with good locality of reference, which means keeping related things together. Sometimes a data structure that looks great turns out to be horrible because of poor locality of reference, and sometimes the reverse is true. Here are two examples:

- Dynamically allocated linked lists can reduce program performance because when you search for an item or when you traverse a list to the end, each skipped link could miss the cache or cause a page fault. A list implementation based on simple arrays might actually be much faster because of better caching and fewer page faults even — allowing for the fact that the array would be harder to grow, it still might be faster.

- Hash tables that use dynamically allocated linked lists can degrade performance. By extension, hash tables that use dynamically allocated linked lists to store their contents might perform substantially worse. In fact, in the final analysis, a simple linear search through an array might actually be faster (depending on the circumstances). Array-based hash tables (so-called "closed hashing") is an often-overlooked implementation which frequently has superior performance.

## <a name="_core_sorting_and_searching"></a> Sorting and Searching

Sorting is inherently time consuming compared to many typical operations. The best way to avoid unnecessary slowdown is to avoid sorting at critical times. You may be able to:

- Defer sorting until a non-performance-critical time.

- Sort the data at an earlier, non-performance-critical time.

- Sort only the part of the data that truly needs sorting.

Sometimes, you can build the list in sorted order. Be careful, because if you need to insert data in sorted order, you may require a more complicated data structure with poor locality of reference, leading to cache misses and page faults. There is no approach that works in all cases. Try several approaches and measure the differences.

Here are some general tips for sorting:

- Use a stock sort to minimize bugs.

- Any work you can do beforehand to reduce the complexity of the sort is worthwhile. If a one-time pass over your data simplifies the comparisons and reduces the sort from O(n log n) to O(n), you will almost certainly come out ahead.

- Think about the locality of reference of the sort algorithm and the data you expect it to run on.

There are fewer alternatives for searches than for sorting. If the search is time-critical, a binary search or hash table lookup is almost always best, but as with sorting, you must keep locality in mind. A linear search through a small array can be faster than a binary search through a data structure with a lot of pointers that causes page faults or cache misses.

## <a name="_core_mfc_and_class_libraries"></a> MFC and Class Libraries

The Microsoft Foundation Classes (MFC) can greatly simplify writing code. When writing time-critical code, you should be aware of the overhead inherent in some of the classes. Examine the MFC code that your time-critical code uses to see if it meets your performance requirements. The following list identifies MFC classes and functions you should be aware of:

- `CString` MFC calls the C run-time library to allocate memory for a [CString](../atl-mfc-shared/reference/cstringt-class.md) dynamically. Generally speaking, `CString` is as efficient as any other dynamically-allocated string. As with any dynamically allocated string, it has the overhead of dynamic allocation and release. Often, a simple **`char`** array on the stack can serve the same purpose and is faster. Don't use a `CString` to store a constant string. Use `const char *` instead. Any operation you perform with a `CString` object has some overhead. Using the run-time library [string functions](../c-runtime-library/string-manipulation-crt.md) may be faster.

- `CArray` A [CArray](../mfc/reference/carray-class.md) provides flexibility that a regular array doesn't, but your program may not need that. If you know the specific limits for the array, you can use a global fixed array instead. If you use `CArray`, use `CArray::SetSize` to establish its size and specify the number of elements by which it grows when a reallocation is necessary. Otherwise, adding elements can cause your array to be frequently reallocated and copied, which is inefficient and can fragment memory. Also be aware that if you insert an item into an array, `CArray` moves subsequent items in memory and may need to grow the array. These actions can cause cache misses and page faults. If you look through the code that MFC uses, you may see that you can write something more specific to your scenario to improve performance. Since `CArray` is a template, for example, you might provide `CArray` specializations for specific types.

- `CList` [CList](../mfc/reference/clist-class.md) is a doubly linked list, so element insertion is fast at the head, tail, and at a known position (`POSITION`) in the list. Looking up an element by value or index requires a sequential search, however, which can be slow if the list is long. If your code does not require a doubly linked list you may want to reconsider using `CList`. Using a singly linked list saves the overhead of updating an additional pointer for all operations as well as the memory for that pointer. The additional memory is not great, but it is another opportunity for cache misses or page faults.

- `IsKindOf` This function can generate many calls and access a lot of memory in different data areas, leading to bad locality of reference. It is useful for a debug build (in an ASSERT call, for example), but try to avoid using it in a release build.

- `PreTranslateMessage` Use `PreTranslateMessage` when a particular tree of windows needs different keyboard accelerators or when you must insert message handling into the message pump. `PreTranslateMessage` alters MFC dispatch messages. If you override `PreTranslateMessage`, do so only at the level needed. For example, it is not necessary to override `CMainFrame::PreTranslateMessage` if you are interested only in messages going to children of a particular view. Override `PreTranslateMessage` for the view class instead.

   Do not circumvent the normal dispatch path by using `PreTranslateMessage` to handle any message sent to any window. Use [window procedures](../mfc/registering-window-classes.md) and MFC message maps for that purpose.

- `OnIdle` Idle events can occur at times you do not expect, such as between `WM_KEYDOWN` and `WM_KEYUP` events. Timers may be a more efficient way to trigger your code. Do not force `OnIdle` to be called repeatedly by generating false messages or by always returning `TRUE` from an override of `OnIdle`, which would never allow your thread to sleep. Again, a timer or a separate thread might be more appropriate.

## <a name="vcovrsharedlibraries"></a> Shared Libraries

Code reuse is desirable. However, if you are going to use someone else's code, you should make sure you know exactly what it does in those cases where performance is critical to you. The best way to understand this is by stepping through the source code or by measuring with tools such as PView or Performance Monitor.

## <a name="_core_heaps"></a> Heaps

Use multiple heaps with discretion. Additional heaps created with `HeapCreate` and `HeapAlloc` let you manage and then dispose of a related set of allocations. Don't commit too much memory. If you're using multiple heaps, pay special attention to the amount of memory that is initially committed.

Instead of multiple heaps, you can use helper functions to interface between your code and the default heap. Helper functions facilitate custom allocation strategies that can improve the performance of your application. For example, if you frequently perform small allocations, you may want to localize these allocations to one part of the default heap. You can allocate a large block of memory and then use a helper function to suballocate from that block. If you do this, you will not have additional heaps with unused memory because the allocation is coming out of the default heap.

In some cases, however, using the default heap can reduce locality of reference. Use Process Viewer, Spy++, or Performance Monitor to measure the effects of moving objects from heap to heap.

Measure your heaps so you can account for every allocation on the heap. Use the C run-time [debug heap routines](/visualstudio/debugger/crt-debug-heap-details) to checkpoint and dump your heap. You can read the output into a spreadsheet program like Microsoft Excel and use pivot tables to view the results. Note the total number, size, and distribution of allocations. Compare these with the size of working sets. Also look at the clustering of related-sized objects.

You can also use the performance counters to monitor memory usage.

## <a name="_core_threads"></a> Threads

For background tasks, effective idle handling of events may be faster than using threads. It's easier to understand locality of reference in a single-threaded program.

A good rule of thumb is to use a thread only if an operating system notification that you block on is at the root of the background work. Threads are the best solution in such a case because it is impractical to block a main thread on an event.

Threads also present communication problems. You must manage the communication link between your threads, with a list of messages or by allocating and using shared memory. Managing the communication link usually requires synchronization to avoid race conditions and deadlock problems. This complexity can easily turn into bugs and performance problems.

For more information, see [Idle Loop Processing](../mfc/idle-loop-processing.md) and [Multithreading](../parallel/multithreading-support-for-older-code-visual-cpp.md).

## <a name="_core_small_working_set"></a> Small Working Set

Smaller working sets mean better locality of reference, fewer page faults, and more cache hits. The process working set is the closest metric the operating system directly provides for measuring locality of reference.

- To set the upper and lower limits of the working set, use [SetProcessWorkingSetSize](/windows/win32/api/winbase/nf-winbase-getprocessworkingsetsize).

- To get the upper and lower limits of the working set, use [GetProcessWorkingSetSize](/windows/win32/api/winbase/nf-winbase-setprocessworkingsetsize).

- To view the size of the working set, use Spy++.

## See also

[Optimizing Your Code](optimizing-your-code.md)
