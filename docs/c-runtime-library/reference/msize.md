---
description: "Learn more about: _msize"
title: "_msize"
ms.date: 07/26/2024
api_name: ["_msize", "_o__msize"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-heap-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["msize", "_msize"]
helpviewer_keywords: ["memory blocks", "msize function", "_msize function"]
---
# `_msize`

Returns the size of a memory block allocated in the heap.

## Syntax

```C
size_t _msize(
   void *memblock
);
```

### Parameters

*`memblock`*\
Pointer to the memory block.

## Return value

**`_msize`** returns the size (in bytes) as an unsigned integer.

## Remarks

The **`_msize`** function returns the size, in bytes, of the memory block allocated by a call to **`calloc`**, **`malloc`**, or **`realloc`**.

When the application is linked with a debug version of the C run-time libraries, **`_msize`** resolves to [`_msize_dbg`](msize-dbg.md). For more information about how the heap is managed during the debugging process, see [The CRT debug heap](../crt-debug-heap-details.md).

This function validates its parameter. If *`memblock`* is a `NULL` pointer, **`_msize`** invokes an invalid parameter handler, as described in [Parameter validation](../parameter-validation.md). If the error is handled, the function sets `errno` to `EINVAL` and returns -1 (18,446,744,073,709,551,615 unsigned).

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

## Requirements

| Routine | Required header |
|---|---|
| **`_msize`** | `<malloc.h>` |

For more compatibility information, see [Compatibility](../compatibility.md).

## Libraries

All versions of the [C run-time libraries](../crt-library-features.md).

## Example

See the example for [`realloc`](realloc.md).

## See also

[Memory allocation](../memory-allocation.md)\
[`calloc`](calloc.md)\
[`_expand`](expand.md)\
[`malloc`](malloc.md)\
[`realloc`](realloc.md)
