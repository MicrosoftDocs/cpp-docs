---
title: "Memory Allocation"
ms.date: "11/18/2020"
description: "List of Microsoft C runtime functions used to allocate, free, and reallocate memory."
f1_keywords: ["c.memory"]
helpviewer_keywords: ["memory allocation, routines", "memory, managing", "memory, allocation"]
---
# Memory allocation

These routines allocate, free, and reallocate memory.

## Memory-allocation routines

|Routine|Use|
|-------------|---------|
|[`_alloca`](../c-runtime-library/reference/alloca.md), [`_malloca`](../c-runtime-library/reference/malloca.md)|Allocate memory from the stack|
|[`calloc`](../c-runtime-library/reference/calloc.md)|Allocate an array and initialize its elements to 0 (zero)|
|[`_calloc_dbg`](../c-runtime-library/reference/calloc-dbg.md)|Debug version of **`calloc`**. Only available in the debug versions of the run-time libraries|
|[`operator delete`, `operator delete[]`](../c-runtime-library/delete-operator-crt.md)|Free memory allocated on the heap |
|[`_expand`](../c-runtime-library/reference/expand.md)|Expand or shrink a block of memory without moving it|
|[`_expand_dbg`](../c-runtime-library/reference/expand-dbg.md)|Debug version of **`_expand`**. Only available in the debug versions of the run-time libraries|
|[`free`](../c-runtime-library/reference/free.md)|Free memory allocated on the heap|
|[`_free_dbg`](../c-runtime-library/reference/free-dbg.md)|Debug version of **`free`**. Only available in the debug versions of the run-time libraries|
|[`_freea`](../c-runtime-library/reference/freea.md)|Free memory allocated on the stack|
|[`_get_heap_handle`](../c-runtime-library/reference/get-heap-handle.md)|Get a Win32 `HANDLE` to the C runtime (CRT) heap.|
|[`_heapadd`](../c-runtime-library/heapadd.md)|Add memory to the heap|
|[`_heapchk`](../c-runtime-library/reference/heapchk.md)|Check the heap for consistency|
|[`_heapmin`](../c-runtime-library/reference/heapmin.md)|Release unused memory in the heap|
|[`_heapset`](../c-runtime-library/heapset.md)|Fill free heap entries with a value|
|[`_heapwalk`](../c-runtime-library/reference/heapwalk.md)|Get info about each entry in the heap|
|[`malloc`](../c-runtime-library/reference/malloc.md)|Allocate memory from the heap|
|[`_malloc_dbg`](../c-runtime-library/reference/malloc-dbg.md)|Debug version of **`malloc`**; only available in the debug versions of the run-time libraries|
|[`_msize`](../c-runtime-library/reference/msize.md)|Return the size of an allocated block of memory|
|[`_msize_dbg`](../c-runtime-library/reference/msize-dbg.md)|Debug version of **`_msize`**; only available in the debug versions of the run-time libraries|
|[`new`, `new[]`](../c-runtime-library/new-operator-crt.md)|Allocate a block of memory from the heap|
|[`_query_new_handler`](../c-runtime-library/reference/query-new-handler.md)|Get the address of the current new handler routine set by **`_set_new_handler`**|
|[`_query_new_mode`](../c-runtime-library/reference/query-new-mode.md)|Get the new handler mode set by **`_set_new_mode`** for **`malloc`**|
|[`realloc`](../c-runtime-library/reference/realloc.md)|Reallocate a block to a new size|
|[`_realloc_dbg`](../c-runtime-library/reference/realloc-dbg.md)|Debug version of **`realloc`**; only available in the debug versions of the run-time libraries|
|[`_set_new_handler`](../c-runtime-library/reference/set-new-handler.md)|Enable error-handling mechanism when the **`new`** operator fails to allocate memory, and enable compilation of the C++ Standard Libraries|
|[`_set_new_mode`](../c-runtime-library/reference/set-new-mode.md)|Set the new handler mode for **`malloc`**|

## See also

[Universal C runtime routines by category](../c-runtime-library/run-time-routines-by-category.md)