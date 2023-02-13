---
description: "Learn more about: _free_dbg"
title: "_free_dbg"
ms.date: "11/04/2016"
api_name: ["_free_dbg"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_free_dbg", "free_dbg"]
helpviewer_keywords: ["memory blocks, deallocating", "freeing memory", "_free_dbg function", "free_dbg function"]
ms.assetid: fc5e8299-616d-48a0-b979-e037117278c6
---
# `_free_dbg`

Frees a block of memory in the heap (debug version only).

## Syntax

```C
void _free_dbg(
   void *userData,
   int blockType
);
```

### Parameters

*`userData`*\
Pointer to the allocated memory block to be freed.

*`blockType`*\
Type of allocated memory block to be freed: `_CLIENT_BLOCK`, `_NORMAL_BLOCK`, or `_IGNORE_BLOCK`.

## Remarks

The **`_free_dbg`** function is a debug version of the [`free`](free.md) function. When [`_DEBUG`](../debug.md) isn't defined, each call to **`_free_dbg`** is reduced to a call to `free`. Both `free` and **`_free_dbg`** free a memory block in the base heap, but **`_free_dbg`** accommodates two debugging features: the ability to keep freed blocks in the heap's linked list to simulate low memory conditions and a block type parameter to free specific allocation types.

**`_free_dbg`** performs a validity check on all specified files and block locations before performing the free operation. The application isn't expected to provide this information. When a memory block is freed, the debug heap manager automatically checks the integrity of the buffers on either side of the user portion. It issues an error report if it detects an overwrite. If the `_CRTDBG_DELAY_FREE_MEM_DF` bit field of the [`_crtDbgFlag`](../crtdbgflag.md) flag is set, the freed block is filled with the value 0xDD, assigned the `_FREE_BLOCK` block type, and kept in the heap's linked list of memory blocks.

If an error occurs in freeing the memory, `errno` is set with information from the operating system on the nature of the failure. For more information, see [`errno`, `_doserrno`, `_sys_errlist`, and `_sys_nerr`](../errno-doserrno-sys-errlist-and-sys-nerr.md).

For information about how memory blocks are allocated, initialized, and managed in the debug version of the base heap, see [CRT debug heap details](../crt-debug-heap-details.md). For information about the allocation block types and how they're used, see [Types of blocks on the debug heap](../crt-debug-heap-details.md#types-of-blocks-on-the-debug-heap). For information about the differences between calling a standard heap function and the debug version, see [Debug versions of heap allocation functions](../debug-versions-of-heap-allocation-functions.md).

## Requirements

| Routine | Required header |
|---|---|
| **`_free_dbg`** | \<crtdbg.h> |

For more compatibility information, see [Compatibility](../compatibility.md).

## Example

For a sample of how to use **`_free_dbg`**, see [`crt_dbg2`](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/crt/crt_dbg2).

## See also

[Debug routines](../debug-routines.md)\
[`_malloc_dbg`](malloc-dbg.md)
