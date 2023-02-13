---
description: "Learn more about: _aligned_malloc_dbg"
title: "_aligned_malloc_dbg"
ms.date: "11/04/2016"
api_name: ["_aligned_malloc_dbg"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_aligned_malloc_dbg", "aligned_malloc_dbg"]
helpviewer_keywords: ["aligned_malloc_dbg function", "_aligned_malloc_dbg function"]
ms.assetid: fb0429c3-685d-4826-9075-2515c5bdc5c6
---
# `_aligned_malloc_dbg`

Allocates memory on a specified alignment boundary with extra space for a debugging header and overwrite buffers (debug version only).

## Syntax

```C
void * _aligned_malloc_dbg(
    size_t size,
    size_t alignment,
   const char *filename,
   int linenumber
);
```

### Parameters

*`size`*\
Size of the requested memory allocation.

*`alignment`*\
The alignment value, which must be an integer power of 2.

*`filename`*\
Pointer to the name of the source file that requested the allocation operation or `NULL`.

*`linenumber`*\
Line number in the source file where the allocation operation was requested or `NULL`.

## Return value

A pointer to the memory block that was allocated or `NULL` if the operation failed.

## Remarks

**`_aligned_malloc_dbg`** is a debug version of the [`_aligned_malloc`](aligned-malloc.md) function. When [`_DEBUG`](../debug.md) isn't defined, each call to **`_aligned_malloc_dbg`** is reduced to a call to `_aligned_malloc`. Both `_aligned_malloc` and **`_aligned_malloc_dbg`** allocate a block of memory in the base heap, but **`_aligned_malloc_dbg`** offers several debugging features: buffers on either side of the user portion of the block to test for leaks, and *`filename`*/*`linenumber`* information to determine the origin of allocation requests. Tracking specific allocation types with a block type parameter isn't a supported debug feature for aligned allocations. Aligned allocations will appear as a `_NORMAL_BLOCK` block type.

**`_aligned_malloc_dbg`** allocates the memory block with slightly more space than the requested *`size`*. The extra space is used by the debug heap manager to link the debug memory blocks and to provide the application with debug header information and overwrite buffers. When the block is allocated, the user portion of the block is filled with the value 0xCD, and each of the overwrite buffers are filled with 0xFD.

**`_aligned_malloc_dbg`** sets `errno` to `ENOMEM` if a memory allocation fails or if the amount of memory needed (including the overhead mentioned previously) exceeds `_HEAP_MAXREQ`. For information about this and other error codes, see [`errno`, `_doserrno`, `_sys_errlist`, and `_sys_nerr`](../errno-doserrno-sys-errlist-and-sys-nerr.md). Also, **`_aligned_malloc_dbg`** validates its parameters. If *`alignment`* isn't a power of 2 or *`size`* is zero, this function invokes the invalid parameter handler, as described in [Parameter validation](../parameter-validation.md). If execution is allowed to continue, this function returns `NULL` and sets `errno` to `EINVAL`.

For information about how memory blocks are allocated, initialized, and managed in the debug version of the base heap, see [CRT debug heap details](../crt-debug-heap-details.md). For information about the allocation block types and how they're used, see [Types of blocks on the debug heap](../crt-debug-heap-details.md#types-of-blocks-on-the-debug-heap). For information about the differences between standard heap functions and their debug versions, see [Debug versions of heap allocation functions](../debug-versions-of-heap-allocation-functions.md).

## Requirements

| Routine | Required header |
|---|---|
| **`_aligned_malloc_dbg`** | \<crtdbg.h> |

For more compatibility information, see [Compatibility](../compatibility.md).

## Libraries

Debug versions of [C run-time libraries](../crt-library-features.md) only.

## See also

[Debug routines](../debug-routines.md)
