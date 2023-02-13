---
description: "Learn more about: _aligned_msize_dbg"
title: "_aligned_msize_dbg"
ms.date: "11/04/2016"
api_name: ["_aligned_msize_dbg"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_aligned_msize_dbg"]
helpviewer_keywords: ["_aligned_msize_dbg"]
ms.assetid: f1c44af0-3f66-4033-81d1-d71d3afecba0
---
# `_aligned_msize_dbg`

Returns the size of a memory block allocated in the heap (debug version only).

## Syntax

```C
size_t _aligned_msize_dbg(
   void *memblock,
   size_t alignment,
   size_t offset
);
```

### Parameters

*`memblock`*\
Pointer to the memory block.

*`alignment`*\
The alignment value, which must be an integer power of 2.

*`offset`*\
The offset into the memory allocation to force the alignment.

## Return value

Returns the size (in bytes) as an unsigned integer.

## Remarks

The *`alignment`* and *`offset`* values must be the same as the values passed to the function that allocated the block.

**`_aligned_msize_dbg`** is a debug version of the [`_aligned_msize`](aligned-msize.md) function. When [`_DEBUG`](../debug.md) isn't defined, each call to **`_aligned_msize_dbg`** is reduced to a call to `_aligned_msize`. Both `_aligned_msize` and **`_aligned_msize_dbg`** calculate the size of a memory block in the base heap, but **`_aligned_msize_dbg`** adds a debugging feature: It includes the buffers on either side of the user portion of the memory block in the returned size.

This function validates its parameter. If *`memblock`* is a null pointer or *`alignment`* isn't a power of 2, `_msize` invokes an invalid parameter handler, as described in [Parameter validation](../parameter-validation.md). If the error is handled, the function sets `errno` to `EINVAL` and returns -1.

For information about how memory blocks are allocated, initialized, and managed in the debug version of the base heap, see [CRT debug heap details](../crt-debug-heap-details.md). For information about the allocation block types and how they're used, see [Types of blocks on the debug heap](../crt-debug-heap-details.md#types-of-blocks-on-the-debug-heap). For information about the differences between standard heap functions and their debug versions, see [Debug versions of heap allocation functions](../debug-versions-of-heap-allocation-functions.md).

## Requirements

| Routine | Required header |
|---|---|
| **`_aligned_msize_dbg`** | \<crtdbg.h> |

For more compatibility information, see [Compatibility](../compatibility.md).

## Libraries

Debug versions of [C run-time libraries](../crt-library-features.md) only.

## See also

[Memory allocation](../memory-allocation.md)
