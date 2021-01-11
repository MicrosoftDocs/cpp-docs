---
description: "Learn more about: _aligned_offset_realloc_dbg"
title: "_aligned_offset_realloc_dbg"
ms.date: "11/04/2016"
api_name: ["_aligned_offset_realloc_dbg"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["aligned_offset_realloc_dbg", "_aligned_offset_realloc_dbg"]
helpviewer_keywords: ["aligned_offset_realloc_dbg function", "_aligned_offset_realloc_dbg function"]
ms.assetid: 64e30a12-887e-453b-aea8-aed793fca9d8
---
# _aligned_offset_realloc_dbg

Changes the size of a memory block that was allocated with [_aligned_malloc](aligned-malloc.md) or [_aligned_offset_malloc](aligned-offset-malloc.md) (debug version only).

## Syntax

```C
void * _aligned_offset_realloc_dbg(
   void *memblock,
   size_t size,
   size_t alignment,
   size_t offset,
   const char *filename,
   int linenumber
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

*filename*<br/>
Pointer to the name of the source file that requested the **aligned_offset_realloc** operation or **NULL**.

*linenumber*<br/>
Line number in the source file where the **aligned_offset_realloc** operation was requested or **NULL**.

## Return Value

**_aligned_offset_realloc_dbg** returns a void pointer to the reallocated (and possibly moved) memory block. The return value is **NULL** if the size is zero and the buffer argument is not **NULL**, or if there is not enough available memory to expand the block to the given size. In the first case, the original block is freed. In the second case, the original block is unchanged. The return value points to a storage space that is guaranteed to be suitably aligned for storage of any type of object. To get a pointer to a type other than void, use a type cast on the return value.

## Remarks

**_aligned_offset_realloc_dbg** is a debug version of the [_aligned_offset_realloc](aligned-offset-realloc.md) function. When [_DEBUG](../../c-runtime-library/debug.md) is not defined, each call to **_aligned_offset_realloc_dbg** is reduced to a call to **_aligned_offset_realloc**. Both **_aligned_offset_realloc** and **_aligned_offset_realloc_dbg** reallocate a memory block in the base heap, but **_aligned_offset_realloc_dbg** accommodates several debugging features: buffers on either side of the user portion of the block to test for leaks, and *filename*/*linenumber* information to determine the origin of allocation requests. Tracking specific allocation types with a block type parameter is not a supported debug feature for aligned allocations. Aligned allocations will appear as a _NORMAL_BLOCK block type.

Like [_aligned_offset_malloc](aligned-offset-malloc.md), **_aligned_offset_realloc_dbg** allows a structure to be aligned at an offset within the structure.

**_realloc_dbg** reallocates the specified memory block with slightly more space than the requested *newSize*. *newSize* might be greater or less than the size of the originally allocated memory block. The additional space is used by the debug heap manager to link the debug memory blocks and to provide the application with debug header information and overwrite buffers. The reallocation might result in moving the original memory block to a different location in the heap, as well as changing the size of the memory block. If the memory block is moved, the contents of the original block are overwritten.

This function sets **errno** to **ENOMEM** if the memory allocation failed or if the requested size was greater than **_HEAP_MAXREQ**. For more information about **errno**, see [errno, _doserrno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md). Also, **_aligned_offset_realloc_dbg** validates its parameters. If *alignment* is not a power of 2 or if *offset* is greater than or equal to *size* and nonzero, this function invokes the invalid parameter handler, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, this function returns **NULL** and sets **errno** to **EINVAL**.

For information about how memory blocks are allocated, initialized, and managed in the debug version of the base heap, see [CRT Debug Heap Details](/visualstudio/debugger/crt-debug-heap-details). For information about the allocation block types and how they are used, see [Types of blocks on the debug heap](/visualstudio/debugger/crt-debug-heap-details). For information about the differences between calling a standard heap function and its debug version in a debug build of an application, see [Debug Versions of Heap Allocation Functions](/visualstudio/debugger/debug-versions-of-heap-allocation-functions).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_aligned_offset_realloc_dbg**|\<crtdbg.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Libraries

Debug versions of [C run-time libraries](../../c-runtime-library/crt-library-features.md) only.

## See also

[Debug Routines](../../c-runtime-library/debug-routines.md)<br/>
