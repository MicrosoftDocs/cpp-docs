---
description: "Learn more about: _aligned_recalloc"
title: "_aligned_recalloc"
ms.date: "4/2/2020"
api_name: ["_aligned_recalloc", "_o__aligned_recalloc"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-heap-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["aligned_recalloc", "_aligned_recalloc"]
helpviewer_keywords: ["aligned_recalloc function", "_aligned_recalloc function"]
ms.assetid: d3da3dcc-79ef-4273-8af5-ac7469420142
---
# _aligned_recalloc

Changes the size of a memory block that was allocated with [_aligned_malloc](aligned-malloc.md) or [_aligned_offset_malloc](aligned-offset-malloc.md) and initializes the memory to 0.

## Syntax

```C
void * _aligned_recalloc(
   void *memblock,
   size_t num,
   size_t size,
   size_t alignment
);
```

### Parameters

*memblock*<br/>
The current memory block pointer.

*number*<br/>
The number of elements.

*size*<br/>
The size in bytes of each element.

*alignment*<br/>
The alignment value, which must be an integer power of 2.

## Return Value

**_aligned_recalloc** returns a void pointer to the reallocated (and possibly moved) memory block. The return value is **NULL** if the size is zero and the buffer argument is not **NULL**, or if there is not enough available memory to expand the block to the given size. In the first case, the original block is freed. In the second case, the original block is unchanged. The return value points to a storage space that is guaranteed to be suitably aligned for storage of any type of object. To get a pointer to a type other than void, use a type cast on the return value.

It is an error to reallocate memory and change the alignment of a block.

## Remarks

**_aligned_recalloc** is based on **malloc**. For more information about using **_aligned_offset_malloc**, see [malloc](malloc.md).

This function sets **errno** to **ENOMEM** if the memory allocation failed or if the requested size was greater than **_HEAP_MAXREQ**. For more information about **errno**, see [errno, _doserrno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md). Also, **_aligned_recalloc** validates its parameters. If *alignment* is not a power of 2, this function invokes the invalid parameter handler, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, this function returns **NULL** and sets **errno** to **EINVAL**.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_aligned_recalloc**|\<malloc.h>|

## See also

[Data Alignment](../../c-runtime-library/data-alignment.md)<br/>
[_recalloc](recalloc.md)<br/>
[_aligned_offset_recalloc](aligned-offset-recalloc.md)<br/>
