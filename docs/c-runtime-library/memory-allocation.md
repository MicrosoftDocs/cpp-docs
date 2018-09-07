---
title: "Memory Allocation | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "conceptual"
f1_keywords: ["c.memory"]
dev_langs: ["C++"]
helpviewer_keywords: ["memory allocation, routines", "memory, managing", "memory, allocation"]
ms.assetid: b4470556-a128-4782-9943-2ccf7a7d9979
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Memory Allocation

Use these routines to allocate, free, and reallocate memory.

## Memory-Allocation Routines

|Routine|Use|
|-------------|---------|
|[_alloca](../c-runtime-library/reference/alloca.md), [_malloca](../c-runtime-library/reference/malloca.md)|Allocate memory from stack|
|[calloc](../c-runtime-library/reference/calloc.md)|Allocate storage for array, initializing every byte in allocated block to 0|
|[_calloc_dbg](../c-runtime-library/reference/calloc-dbg.md)|Debug version of **calloc**; only available in the debug versions of the run-time libraries|
|[operator delete](../c-runtime-library/operator-delete-crt.md)|Free allocated block|
|[operator delete&#91;&#93;](../c-runtime-library/delete-operator-crt.md)|Free allocated block|
|[_expand](../c-runtime-library/reference/expand.md)|Expand or shrink block of memory without moving it|
|[_expand_dbg](../c-runtime-library/reference/expand-dbg.md)|Debug version of **_expand**; only available in the debug versions of the run-time libraries|
|[free](../c-runtime-library/reference/free.md)|Free allocated block|
|[_free_dbg](../c-runtime-library/reference/free-dbg.md)|Debug version of **free**; only available in the debug versions of the run-time libraries|
|[_freea](../c-runtime-library/reference/freea.md)|Free allocated block from stack|
|[_get_heap_handle](../c-runtime-library/reference/get-heap-handle.md)|Get Win32 HANDLE of the CRT heap.|
|[_heapadd](../c-runtime-library/heapadd.md)|Add memory to heap|
|[_heapchk](../c-runtime-library/reference/heapchk.md)|Check heap for consistency|
|[_heapmin](../c-runtime-library/reference/heapmin.md)|Release unused memory in heap|
|[_heapset](../c-runtime-library/heapset.md)|Fill free heap entries with specified value|
|[_heapwalk](../c-runtime-library/reference/heapwalk.md)|Return information about each entry in heap|
|[malloc](../c-runtime-library/reference/malloc.md)|Allocate block of memory from heap|
|[_malloc_dbg](../c-runtime-library/reference/malloc-dbg.md)|Debug version of **malloc**; only available in the debug versions of the run-time libraries|
|[_msize](../c-runtime-library/reference/msize.md)|Return size of allocated block|
|[_msize_dbg](../c-runtime-library/reference/msize-dbg.md)|Debug version of **_msize**; only available in the debug versions of the run-time libraries|
|[new](../c-runtime-library/operator-new-crt.md)|Allocate block of memory from heap|
|[new&#91;&#93;](../c-runtime-library/new-operator-crt.md)|Allocate block of memory from heap|
|[_query_new_handler](../c-runtime-library/reference/query-new-handler.md)|Return address of current new handler routine as set by **_set_new_handler**|
|[_query_new_mode](../c-runtime-library/reference/query-new-mode.md)|Return integer indicating new handler mode set by **_set_new_mode** for **malloc**|
|[realloc](../c-runtime-library/reference/realloc.md)|Reallocate block to new size|
|[_realloc_dbg](../c-runtime-library/reference/realloc-dbg.md)|Debug version of **realloc**; only available in the debug versions of the run-time libraries|
|[_set_new_handler](../c-runtime-library/reference/set-new-handler.md)|Enable error-handling mechanism when **new** operator fails (to allocate memory) and enable compilation of C++ Standard Libraries|
|[_set_new_mode](../c-runtime-library/reference/set-new-mode.md)|Set new handler mode for **malloc**|

## See Also

[Universal C runtime routines by category](../c-runtime-library/run-time-routines-by-category.md)<br/>
