---
description: "Learn more about: _aligned_msize"
title: "_aligned_msize"
ms.date: "4/2/2020"
api_name: ["_aligned_msize", "_o__aligned_msize"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-heap-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_aligned_msize", "aligned_msize"]
helpviewer_keywords: ["aligned_msize function", "_aligned_msize function"]
ms.assetid: 10995edc-2110-4212-9ca9-5e0220a464f4
---
# _aligned_msize

Returns the size of a memory block allocated in the heap.

## Syntax

```C
size_t _aligned_msize(
   void *memblock,
   size_t alignment,
   size_t offset
);
```

### Parameters

*memblock*<br/>
Pointer to the memory block.

*alignment*<br/>
The alignment value, which must be an integer power of 2.

*offset*<br/>
The offset into the memory allocation to force the alignment.

## Return Value

Returns the size (in bytes) as an unsigned integer.

## Remarks

The **_aligned_msize** function returns the size, in bytes, of the memory block allocated by a call to [_aligned_malloc](aligned-malloc.md) or [_aligned_realloc](aligned-realloc.md). The *alignment* and *offset* values must be the same as the values passed to the function that allocated the block.

When the application is linked with a debug version of the C run-time libraries, **_aligned_msize** resolves to [_aligned_msize_dbg](aligned-msize-dbg.md). For more information about how the heap is managed during the debugging process, see [The CRT Debug Heap](/visualstudio/debugger/crt-debug-heap-details).

This function validates its parameter. If *memblock* is a null pointer or *alignment* is not a power of 2, **_aligned_msize** invokes an invalid parameter handler, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If the error is handled, the function sets **errno** to **EINVAL** and returns -1.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_aligned_msize**|\<malloc.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Libraries

All versions of the [C run-time libraries](../../c-runtime-library/crt-library-features.md).

## See also

[Memory Allocation](../../c-runtime-library/memory-allocation.md)<br/>
