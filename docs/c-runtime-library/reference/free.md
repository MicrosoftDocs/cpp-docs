---
description: "Learn more about: free"
title: "free"
ms.date: "4/2/2020"
api_name: ["free", "_o_free"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-heap-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["free"]
helpviewer_keywords: ["memory blocks, deallocating", "free function"]
---
# `free`

Deallocates or frees a memory block.

## Syntax

```C
void free(
   void *memblock
);
```

### Parameters

*`memblock`*\
Previously allocated memory block to be freed.

## Remarks

The **`free`** function deallocates a memory block (*`memblock`*) that was previously allocated by a call to **`calloc`**, **`malloc`**, or **`realloc`**. The number of freed bytes is equivalent to the number of bytes requested when the block was allocated (or reallocated, for **`realloc`**). If *`memblock`* is `NULL`, the pointer is ignored, and **`free`** immediately returns. Attempting to free an invalid pointer (a pointer to a memory block that wasn't allocated by **`calloc`**, **`malloc`**, or **`realloc`**) may affect subsequent allocation requests and cause errors.

If an error occurs in freeing the memory, `errno` is set with information from the operating system on the nature of the failure. For more information, see [`errno`, `_doserrno`, `_sys_errlist`, and `_sys_nerr`](../errno-doserrno-sys-errlist-and-sys-nerr.md).

After a memory block has been freed, [`_heapmin`](heapmin.md) minimizes the amount of free memory on the heap by coalescing the unused regions and releasing them back to the operating system. Freed memory that isn't released to the operating system is restored to the free pool and is available for allocation again.

When the application is linked with a debug version of the C run-time libraries, **`free`** resolves to [`_free_dbg`](free-dbg.md). For more information about how the heap is managed during the debugging process, see [The CRT debug heap](../crt-debug-heap-details.md).

**`free`** is marked `__declspec(noalias)`, meaning that the function is guaranteed not to modify global variables. For more information, see [`noalias`](../../cpp/noalias.md).

To free memory allocated with [`_malloca`](malloca.md), use [`_freea`](freea.md).

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

## Requirements

| Function | Required header |
|---|---|
| **`free`** | `<stdlib.h>` and `<malloc.h>` |

For more compatibility information, see [Compatibility](../compatibility.md).

## Example

See the example for [`malloc`](malloc.md).

## See also

[Memory allocation](../memory-allocation.md)\
[`_alloca`](alloca.md)\
[`calloc`](calloc.md)\
[`malloc`](malloc.md)\
[`realloc`](realloc.md)\
[`_free_dbg`](free-dbg.md)\
[`_heapmin`](heapmin.md)\
[`_freea`](freea.md)
