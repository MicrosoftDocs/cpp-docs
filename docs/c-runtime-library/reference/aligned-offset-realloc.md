---
description: "Learn more about: _aligned_offset_realloc"
title: "_aligned_offset_realloc"
ms.date: "4/2/2020"
api_name: ["_aligned_offset_realloc", "_o__aligned_offset_realloc"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-heap-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["aligned_offset_realloc", "_aligned_offset_realloc"]
helpviewer_keywords: ["aligned_offset_realloc function", "_aligned_offset_realloc function"]
ms.assetid: e0263533-991e-41b0-acc9-1b8a51ab9ecd
---
# _aligned_offset_realloc

Changes the size of a memory block that was allocated with [_aligned_malloc](aligned-malloc.md) or [_aligned_offset_malloc](aligned-offset-malloc.md).

## Syntax

```C
void * _aligned_offset_realloc(
   void *memblock,
   size_t size,
   size_t alignment,
   size_t offset
);
```

### Parameters

*memblock*<br/>
The current memory block pointer.

*size*<br/>
The size of the memory allocation.

*alignment*<br/>
The alignment value, which must be an integer power of 2.

*offset*<br/>
The offset into the memory allocation to force the alignment.

## Return Value

**_aligned_offset_realloc** returns a void pointer to the reallocated (and possibly moved) memory block. The return value is **NULL** if the size is zero and the buffer argument is not **NULL**, or if there is not enough available memory to expand the block to the given size. In the first case, the original block is freed. In the second case, the original block is unchanged. The return value points to a storage space that is guaranteed to be suitably aligned for storage of any type of object. To get a pointer to a type other than void, use a type cast on the return value.

**_aligned_offset_realloc** is marked `__declspec(noalias)` and `__declspec(restrict)`, meaning that the function is guaranteed not to modify global variables and that the pointer returned is not aliased. For more information, see [noalias](../../cpp/noalias.md) and [restrict](../../cpp/restrict.md).

## Remarks

Like [_aligned_offset_malloc](aligned-offset-malloc.md), **_aligned_offset_realloc** allows a structure to be aligned at an offset within the structure.

**_aligned_offset_realloc** is based on **malloc**. For more information about using **_aligned_offset_malloc**, see [malloc](malloc.md). If *memblock* is **NULL**, the function calls **_aligned_offset_malloc** internally.

This function sets **errno** to **ENOMEM** if the memory allocation failed or if the requested size was greater than **_HEAP_MAXREQ**. For more information about **errno**, see [errno, _doserrno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md). Also, **_aligned_offset_realloc** validates its parameters. If *alignment* is not a power of 2 or if *offset* is greater than or equal to *size* and nonzero, this function invokes the invalid parameter handler, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, this function returns **NULL** and sets **errno** to **EINVAL**.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_aligned_offset_realloc**|\<malloc.h>|

## Example

For more information, see [_aligned_malloc](aligned-malloc.md).

## See also

[Data Alignment](../../c-runtime-library/data-alignment.md)<br/>
