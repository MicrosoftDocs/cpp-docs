---
description: "Learn more about: _calloc_dbg"
title: "_calloc_dbg"
ms.date: "11/04/2016"
api_name: ["_calloc_dbg"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_calloc_dbg", "calloc_dbg"]
helpviewer_keywords: ["_calloc_dbg function", "calloc_dbg function"]
ms.assetid: 7f62c42b-eb9f-4de5-87d0-df57036c87de
---
# _calloc_dbg

Allocates a number of memory blocks in the heap with additional space for a debugging header and overwrite buffers (debug version only).

## Syntax

```C
void *_calloc_dbg(
   size_t num,
   size_t size,
   int blockType,
   const char *filename,
   int linenumber
);
```

### Parameters

*number*<br/>
Requested number of memory blocks.

*size*<br/>
Requested size of each memory block (bytes).

*blockType*<br/>
Requested type of memory block: **_CLIENT_BLOCK** or **_NORMAL_BLOCK**.

For information about the allocation block types and how they are used, see[Types of blocks on the debug heap](/visualstudio/debugger/crt-debug-heap-details).

*filename*<br/>
Pointer to name of the source file that requested allocation operation or **NULL**.

*linenumber*<br/>
Line number in the source file where allocation operation was requested or **NULL**.

The *filename* and *linenumber* parameters are only available when **_calloc_dbg** has been called explicitly or the [_CRTDBG_MAP_ALLOC](../../c-runtime-library/crtdbg-map-alloc.md) preprocessor constant has been defined.

## Return Value

On successful completion, this function returns a pointer to the user portion of the last allocated memory block, calls the new handler function, or returns **NULL**. For a complete description of the return behavior, see the Remarks section. For more information about how the new handler function is used, see the [calloc](calloc.md) function.

## Remarks

**_calloc_dbg** is a debug version of the [calloc](calloc.md) function. When [_DEBUG](../../c-runtime-library/debug.md) is not defined, each call to **_calloc_dbg** is reduced to a call to **calloc**. Both **calloc** and **_calloc_dbg** allocate *number* memory blocks in the base heap, but **_calloc_dbg** offers several debugging features:

- Buffers on either side of the user portion of the block to test for leaks.

- A block type parameter to track specific allocation types.

- *filename*/*linenumber* information to determine the origin of allocation requests.

**_calloc_dbg** allocates each memory block with slightly more space than the requested *size*. The additional space is used by the debug heap manager to link the debug memory blocks and to provide the application with debug header information and overwrite buffers. When the block is allocated, the user portion of the block is filled with the value 0xCD and each of the overwrite buffers are filled with 0xFD.

**_calloc_dbg** sets **errno** to **ENOMEM** if a memory allocation fails; **EINVAL** is returned if the amount of memory needed (including the overhead mentioned previously) exceeds **_HEAP_MAXREQ**. For information about this and other error codes, see [errno, _doserrno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

For information about how memory blocks are allocated, initialized, and managed in the debug version of the base heap, see [CRT Debug Heap Details](/visualstudio/debugger/crt-debug-heap-details). For information about the differences between calling a standard heap function versus its debug version in a debug build of an application, see [Debug Versions of Heap Allocation Functions](/visualstudio/debugger/debug-versions-of-heap-allocation-functions).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_calloc_dbg**|\<crtdbg.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_callocd.c
// This program uses _calloc_dbg to allocate space for
// 40 long integers. It initializes each element to zero.

#include <stdio.h>
#include <malloc.h>
#include <crtdbg.h>

int main( void )
{
    long *bufferN, *bufferC;

    // Call _calloc_dbg to include the filename and line number
    // of our allocation request in the header and also so we can
    // allocate CLIENT type blocks specifically
    bufferN = (long *)_calloc_dbg( 40, sizeof(long), _NORMAL_BLOCK, __FILE__, __LINE__ );
    bufferC = (long *)_calloc_dbg( 40, sizeof(long), _CLIENT_BLOCK, __FILE__, __LINE__ );
    if( bufferN != NULL && bufferC != NULL )
        printf( "Allocated memory successfully\n" );
    else
        printf( "Problem allocating memory\n" );

    / _free_dbg must be called to free CLIENT type blocks
    free( bufferN );
    _free_dbg( bufferC, _CLIENT_BLOCK );
}
```

```Output
Allocated memory successfully
```

## See also

[Debug Routines](../../c-runtime-library/debug-routines.md)<br/>
[calloc](calloc.md)<br/>
[_malloc_dbg](malloc-dbg.md)<br/>
[_DEBUG](../../c-runtime-library/debug.md)<br/>
