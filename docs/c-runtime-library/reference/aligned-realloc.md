---
description: "Learn more about: _aligned_realloc"
title: "_aligned_realloc"
ms.date: "4/2/2020"
api_name: ["_aligned_realloc", "_o__aligned_realloc"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-heap-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_aligned_realloc", "aligned_realloc"]
helpviewer_keywords: ["aligned_realloc function", "_aligned_realloc function"]
ms.assetid: 80ce96e8-6087-416f-88aa-4dbb8cb1d218
---
# _aligned_realloc

Changes the size of a memory block that was allocated with [_aligned_malloc](aligned-malloc.md) or [_aligned_offset_malloc](aligned-offset-malloc.md).

## Syntax

```C
void * _aligned_realloc(
   void *memblock,
   size_t size,
   size_t alignment
);
```

### Parameters

*memblock*<br/>
The current memory block pointer.

*size*<br/>
The size of the requested memory allocation.

*alignment*<br/>
The alignment value, which must be an integer power of 2.

## Return Value

**_aligned_realloc** returns a void pointer to the reallocated (and possibly moved) memory block. The return value is **NULL** if the size is zero and the buffer argument is not **NULL**, or if there is not enough available memory to expand the block to the given size. In the first case, the original block is freed. In the second, the original block is unchanged. The return value points to a storage space that is guaranteed to be suitably aligned for storage of any type of object. To get a pointer to a type other than void, use a type cast on the return value.

It is an error to reallocate memory and change the alignment of a block.

## Remarks

**_aligned_realloc** is based on **malloc**. For more information about using **_aligned_offset_malloc**, see [malloc](malloc.md).

This function sets **errno** to **ENOMEM** if the memory allocation failed or if the requested size was greater than **_HEAP_MAXREQ**. For more information about **errno**, see [errno, _doserrno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md). Also, **_aligned_realloc** validates its parameters. If *alignment* is not a power of 2, this function invokes the invalid parameter handler, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, this function returns **NULL** and sets **errno** to **EINVAL**.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_aligned_realloc**|\<malloc.h>|

## Example

For more information, see [_aligned_malloc](aligned-malloc.md).

## See also

[Data Alignment](../../c-runtime-library/data-alignment.md)<br/>
