---
description: "Learn more about: _aligned_offset_malloc_dbg"
title: "_aligned_offset_malloc_dbg"
ms.date: "11/04/2016"
api_name: ["_aligned_offset_malloc_dbg"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_aligned_offset_malloc_dbg", "aligned_offset_malloc_dbg"]
helpviewer_keywords: ["_aligned_offset_malloc_dbg function", "aligned_offset_malloc_dbg function"]
ms.assetid: 6c242307-c59e-4d63-aae5-d8cbec8e021c
---
# _aligned_offset_malloc_dbg

Allocates memory on a specified alignment boundary (debug version only).

## Syntax

```C
void * _aligned_offset_malloc_dbg(
   size_t size,
   size_t alignment,
   size_t offset,
   const char *filename,
   int linenumber
);
```

### Parameters

*size*<br/>
The size of the requested memory allocation.

*alignment*<br/>
The alignment value, which must be an integer power of 2.

*offset*<br/>
The offset into the memory allocation to force the alignment.

*filename*<br/>
Pointer to the name of the source file that requested the allocation operation or **NULL**.

*linenumber*<br/>
Line number in the source file where the allocation operation was requested or **NULL**.

## Return Value

A pointer to the memory block that was allocated or **NULL** if the operation failed.

## Remarks

**_aligned_offset_malloc_dbg** is a debug version of the [_aligned_offset_malloc](aligned-offset-malloc.md) function. When [_DEBUG](../../c-runtime-library/debug.md) is not defined, each call to **_aligned_offset_malloc_dbg** is reduced to a call to **_aligned_offset_malloc**. Both **_aligned_offset_malloc** and **_aligned_offset_malloc_dbg** allocate a block of memory in the base heap, but **_aligned_offset_malloc_dbg** offers several debugging features: buffers on either side of the user portion of the block to test for leaks, and *filename*/*linenumber* information to determine the origin of allocation requests. Tracking specific allocation types with a block type parameter is not a supported debug feature for aligned allocations. Aligned allocations will appear as a _NORMAL_BLOCK block type.

**_aligned_offset_malloc_dbg** allocates the memory block with slightly more space than the requested *size*. The additional space is used by the debug heap manager to link the debug memory blocks and to provide the application with debug header information and overwrite buffers. When the block is allocated, the user portion of the block is filled with the value 0xCD and each of the overwrite buffers are filled with 0xFD.

**_aligned_offset_malloc_dbg** is useful in situations where alignment is needed on a nested element; for example, if alignment was needed on a nested class.

**_aligned_offset_malloc_dbg** is based on **malloc**; for more information, see [malloc](malloc.md).

This function sets **errno** to **ENOMEM** if the memory allocation failed or if the requested size was greater than **_HEAP_MAXREQ**. For more information about **errno**, see [errno, _doserrno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md). Also, **_aligned_offset_malloc** validates its parameters. If *alignment* is not a power of 2 or if *offset* is greater than or equal to *size* and nonzero, this function invokes the invalid parameter handler, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, this function returns **NULL** and sets **errno** to **EINVAL**.

For information about how memory blocks are allocated, initialized, and managed in the debug version of the base heap, see [CRT Debug Heap Details](/visualstudio/debugger/crt-debug-heap-details).

For information about the allocation block types and how they are used, see [Types of blocks on the debug heap](/visualstudio/debugger/crt-debug-heap-details).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_aligned_offset_malloc_dbg**|\<crtdbg.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Libraries

Debug versions of [C run-time libraries](../../c-runtime-library/crt-library-features.md) only.

## See also

[Debug Routines](../../c-runtime-library/debug-routines.md)<br/>
