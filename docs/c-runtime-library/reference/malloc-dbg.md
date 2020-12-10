---
description: "Learn more about: _malloc_dbg"
title: "_malloc_dbg"
ms.date: "11/04/2016"
api_name: ["_malloc_dbg"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["malloc_dbg", "_malloc_dbg"]
helpviewer_keywords: ["malloc_dbg function", "memory allocation", "_malloc_dbg function"]
ms.assetid: c97eca51-140b-4461-8bd2-28965b49ecdb
---
# _malloc_dbg

Allocates a block of memory in the heap with additional space for a debugging header and overwrite buffers (debug version only).

## Syntax

```C
void *_malloc_dbg(
   size_t size,
   int blockType,
   const char *filename,
   int linenumber
);
```

### Parameters

*size*<br/>
Requested size of the memory block (in bytes).

*blockType*<br/>
Requested type of the memory block: **_CLIENT_BLOCK** or **_NORMAL_BLOCK**.

*filename*<br/>
Pointer to the name of the source file that requested the allocation operation or **NULL**.

*linenumber*<br/>
Line number in the source file where the allocation operation was requested or **NULL**.

The *filename* and *linenumber* parameters are only available when **_malloc_dbg** has been called explicitly or the [_CRTDBG_MAP_ALLOC](../../c-runtime-library/crtdbg-map-alloc.md) preprocessor constant has been defined.

## Return Value

On successful completion, this function returns a pointer to the user portion of the allocated memory block, calls the new handler function, or returns **NULL**. For a complete description of the return behavior, see the following Remarks section. For more information about how the new handler function is used, see the [malloc](malloc.md) function.

## Remarks

**_malloc_dbg** is a debug version of the [malloc](malloc.md) function. When [_DEBUG](../../c-runtime-library/debug.md) is not defined, each call to **_malloc_dbg** is reduced to a call to **malloc**. Both **malloc** and **_malloc_dbg** allocate a block of memory in the base heap, but **_malloc_dbg** offers several debugging features: buffers on either side of the user portion of the block to test for leaks, a block type parameter to track specific allocation types, and *filename*/*linenumber* information to determine the origin of allocation requests.

**_malloc_dbg** allocates the memory block with slightly more space than the requested *size*. The additional space is used by the debug heap manager to link the debug memory blocks and to provide the application with debug header information and overwrite buffers. When the block is allocated, the user portion of the block is filled with the value 0xCD and each of the overwrite buffers are filled with 0xFD.

**_malloc_dbg** sets **errno** to **ENOMEM** if a memory allocation fails or if the amount of memory needed (including the overhead mentioned previously) exceeds **_HEAP_MAXREQ**. For information about this and other error codes, see [errno, _doserrno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

For information about how memory blocks are allocated, initialized, and managed in the debug version of the base heap, see [CRT Debug Heap Details](/visualstudio/debugger/crt-debug-heap-details). For information about the allocation block types and how they are used, see [Types of blocks on the debug heap](/visualstudio/debugger/crt-debug-heap-details). For information about the differences between calling a standard heap function and its debug version in a debug build of an application, see [Debug Versions of Heap Allocation Functions](/visualstudio/debugger/debug-versions-of-heap-allocation-functions).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_malloc_dbg**|\<crtdbg.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Libraries

Debug versions of [C run-time libraries](../../c-runtime-library/crt-library-features.md) only.

## Example

For a sample of how to use **_malloc_dbg**, see [crt_dbg1](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/crt/crt_dbg1).

## See also

[Debug Routines](../../c-runtime-library/debug-routines.md)<br/>
[malloc](malloc.md)<br/>
[_calloc_dbg](calloc-dbg.md)<br/>
