---
description: "Learn more about: _aligned_offset_malloc"
title: "_aligned_offset_malloc"
ms.date: "4/2/2020"
api_name: ["_aligned_offset_malloc", "_o__aligned_offset_malloc"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-heap-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_aligned_offset_malloc", "aligned_offset_malloc"]
helpviewer_keywords: ["_aligned_offset_malloc function", "aligned_offset_malloc function"]
ms.assetid: 447681a3-7c95-4655-86ba-fa3a4ca4c521
---
# _aligned_offset_malloc

Allocates memory on a specified alignment boundary.

## Syntax

```C
void * _aligned_offset_malloc(
   size_t size,
   size_t alignment,
   size_t offset
);
```

### Parameters

*size*<br/>
The size of the requested memory allocation.

*alignment*<br/>
The alignment value, which must be an integer power of 2.

*offset*<br/>
The offset into the memory allocation to force the alignment.

## Return Value

A pointer to the memory block that was allocated or **NULL** if the operation failed.

## Remarks

**_aligned_offset_malloc** is useful in situations where alignment is needed on a nested element; for example, if alignment was needed on a nested class.

**_aligned_offset_malloc** is based on **malloc**; for more information, see [malloc](malloc.md).

**_aligned_offset_malloc** is marked `__declspec(noalias)` and `__declspec(restrict)`, meaning that the function is guaranteed not to modify global variables and that the pointer returned is not aliased. For more information, see [noalias](../../cpp/noalias.md) and [restrict](../../cpp/restrict.md).

This function sets **errno** to **ENOMEM** if the memory allocation failed or if the requested size was greater than **_HEAP_MAXREQ**. For more information about **errno**, see [errno, _doserrno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md). Also, **_aligned_offset_malloc** validates its parameters. If *alignment* is not a power of 2 or if *offset* is greater than or equal to *size* and nonzero, this function invokes the invalid parameter handler, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, this function returns **NULL** and sets **errno** to **EINVAL**.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_aligned_offset_malloc**|\<malloc.h>|

## Example

For more information, see [_aligned_malloc](aligned-malloc.md).

## See also

[Data Alignment](../../c-runtime-library/data-alignment.md)<br/>
