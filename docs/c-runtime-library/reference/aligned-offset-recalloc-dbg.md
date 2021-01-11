---
description: "Learn more about: _aligned_offset_recalloc_dbg"
title: "_aligned_offset_recalloc_dbg"
ms.date: "11/04/2016"
api_name: ["_aligned_offset_recalloc_dbg"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["aligned_offset_recalloc_dbg", "_aligned_offset_recalloc_dbg"]
helpviewer_keywords: ["aligned_offset_recalloc_dbg function", "_aligned_offset_recalloc_dbg function"]
ms.assetid: 7ab719c3-77e0-4d2e-934f-01529d062fbf
---
# _aligned_offset_recalloc_dbg

Changes the size of a memory block that was allocated with [_aligned_malloc](aligned-malloc.md) or [_aligned_offset_malloc](aligned-offset-malloc.md) and initializes the memory to 0 (debug version only).

## Syntax

```C
void * _aligned_offset_recalloc_dbg(
   void *memblock,
   size_t num,
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

*number*<br/>
Number of elements.

*size*<br/>
Length in bytes of each element.

*alignment*<br/>
The alignment value, which must be an integer power of 2.

*offset*<br/>
The offset into the memory allocation to force the alignment.

*filename*<br/>
Pointer to the name of the source file that requested the realloc operation or **NULL**.

*linenumber*<br/>
Line number in the source file where the realloc operation was requested or **NULL**.

## Return Value

**_aligned_offset_recalloc_dbg** returns a void pointer to the reallocated (and possibly moved) memory block. The return value is **NULL** if the size is zero and the buffer argument is not **NULL**, or if there is not enough available memory to expand the block to the given size. In the first case, the original block is freed. In the second case, the original block is unchanged. The return value points to a storage space that is guaranteed to be suitably aligned for storage of any type of object. To get a pointer to a type other than void, use a type cast on the return value.

## Remarks

**_aligned_offset_realloc_dbg** is a debug version of the [_aligned_offset_recalloc](aligned-offset-recalloc.md) function. When [_DEBUG](../../c-runtime-library/debug.md) is not defined, each call to **_aligned_offset_recalloc_dbg** is reduced to a call to **_aligned_offset_recalloc**. Both **_aligned_offset_recalloc** and **_aligned_offset_recalloc_dbg** reallocate a memory block in the base heap, but **_aligned_offset_recalloc_dbg** accommodates several debugging features: buffers on either side of the user portion of the block to test for leaks, and *filename*/*linenumber* information to determine the origin of allocation requests. Tracking specific allocation types with a block type parameter is not a supported debug feature for aligned allocations. Aligned allocations will appear as a _NORMAL_BLOCK block type.

**_aligned_offset_realloc_dbg** reallocates the specified memory block with slightly more space than the requested *newSize*. *newSize* might be greater or less than the size of the originally allocated memory block. The additional space is used by the debug heap manager to link the debug memory blocks and to provide the application with debug header information and overwrite buffers. The reallocation might result in moving the original memory block to a different location in the heap, as well as changing the size of the memory block. If the memory block is moved, the contents of the original block are overwritten.

This function sets **errno** to **ENOMEM** if the memory allocation failed or if the requested size (*number* * *size*) was greater than **_HEAP_MAXREQ**. For more information about **errno**, see [errno, _doserrno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md). Also, **_aligned_offset_recalloc_dbg** validates its parameters. If *alignment* is not a power of 2 or if *offset* is greater than or equal to the requested size and nonzero, this function invokes the invalid parameter handler, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, this function returns **NULL** and sets **errno** to **EINVAL**.

For information about how memory blocks are allocated, initialized, and managed in the debug version of the base heap, see [CRT Debug Heap Details](/visualstudio/debugger/crt-debug-heap-details). For information about the allocation block types and how they are used, see [Types of blocks on the debug heap](/visualstudio/debugger/crt-debug-heap-details). For information about the differences between calling a standard heap function and its debug version in a debug build of an application, see [Debug Versions of Heap Allocation Functions](/visualstudio/debugger/debug-versions-of-heap-allocation-functions).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_aligned_offset_recalloc_dbg**|\<malloc.h>|

## See also

[Data Alignment](../../c-runtime-library/data-alignment.md)<br/>
