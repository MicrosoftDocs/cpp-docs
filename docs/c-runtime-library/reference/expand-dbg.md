---
description: "Learn more about: _expand_dbg"
title: "_expand_dbg"
ms.date: "11/04/2016"
api_name: ["_expand_dbg"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["expand_dbg", "_expand_dbg"]
helpviewer_keywords: ["memory blocks, changing size", "expand_dbg function", "_expand_dbg function"]
ms.assetid: dc58c91f-72a8-48c6-b643-fe130fb6c1fd
---
# `_expand_dbg`

Resizes a specified block of memory in the heap by expanding or contracting the block (debug version only).

## Syntax

```C
void *_expand_dbg(
   void *userData,
   size_t newSize,
   int blockType,
   const char *filename,
   int lineNumber
);
```

### Parameters

*`userData`*\
Pointer to the previously allocated memory block.

*`newSize`*\
Requested new size for the block (in bytes).

*`blockType`*\
Requested type for resized block: `_CLIENT_BLOCK` or `_NORMAL_BLOCK`.

*`filename`*\
Pointer to the name of the source file that requested expand operation or `NULL`.

*`lineNumber`*\
Line number in the source file where the expand operation was requested or `NULL`.

The *`filename`* and *`lineNumber`* parameters are only available when **`_expand_dbg`** has been called explicitly or the [`_CRTDBG_MAP_ALLOC`](../crtdbg-map-alloc.md) preprocessor constant has been defined.

## Return value

On successful completion, **`_expand_dbg`** returns a pointer to the resized memory block. Because the memory isn't moved, the address is the same as the userData. If an error occurred or the block couldn't be expanded to the requested size, it returns `NULL`. If a failure occurs, `errno` is with information from the operating system about the nature of the failure. For more information about `errno`, see [`errno`, `_doserrno`, `_sys_errlist`, and `_sys_nerr`](../errno-doserrno-sys-errlist-and-sys-nerr.md).

## Remarks

The **`_expand_dbg`** function is a debug version of the _[`expand`](expand.md) function. When [`_DEBUG`](../debug.md) isn't defined, each call to **`_expand_dbg`** is reduced to a call to `_expand`. Both `_expand` and **`_expand_dbg`** resize a memory block in the base heap, but **`_expand_dbg`** accommodates several debugging features: buffers on either side of the user portion of the block to test for leaks, a block type parameter to track specific allocation types, and *`filename`*/*`lineNumber`* information to determine the origin of allocation requests.

**`_expand_dbg`** resizes the specified memory block with slightly more space than the requested *`newSize`*. *`newSize`* might be greater or less than the size of the originally allocated memory block. The extra space is used by the debug heap manager to link the debug memory blocks and to provide the application with debug header information and overwrite buffers. The resize is accomplished by either expanding or contracting the original memory block. **`_expand_dbg`** doesn't move the memory block, as does the [`_realloc_dbg`](realloc-dbg.md) function.

When *`newSize`* is greater than the original block size, the memory block is expanded. During an expansion, if the memory block can't be expanded to accommodate the requested size, `NULL` is returned. When *`newSize`* is less than the original block size, the memory block is contracted until the new size is obtained.

For information about how memory blocks are allocated, initialized, and managed in the debug version of the base heap, see [CRT debug heap details](../crt-debug-heap-details.md). For information about the allocation block types and how they're used, see [Types of blocks on the debug heap](../crt-debug-heap-details.md#types-of-blocks-on-the-debug-heap). For information about the differences between standard heap functions and debug versions, see [Debug versions of heap allocation functions](../debug-versions-of-heap-allocation-functions.md).

This function validates its parameters. If *`userData`* is a null pointer, or if size is greater than `_HEAP_MAXREQ`, this function invokes an invalid parameter handler, as described in [Parameter validation](../parameter-validation.md). If execution is allowed to continue, `errno` is set to `EINVAL` and the function returns `NULL`.

## Requirements

| Routine | Required header |
|---|---|
| **`_expand_dbg`** | \<crtdbg.h> |

For more compatibility information, see [Compatibility](../compatibility.md).

## Libraries

Debug versions of [C run-time libraries](../crt-library-features.md) only.

## Example

```C
// crt_expand_dbg.c
//
// This program allocates a block of memory using _malloc_dbg
// and then calls _msize_dbg to display the size of that block.
// Next, it uses _expand_dbg to expand the amount of
// memory used by the buffer and then calls _msize_dbg again to
// display the new amount of memory allocated to the buffer.
//

#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <crtdbg.h>

int main( void )
{
   long *buffer;
   size_t size;

   // Call _malloc_dbg to include the filename and line number
   // of our allocation request in the header
   buffer = (long *)_malloc_dbg( 40 * sizeof(long),
                                 _NORMAL_BLOCK, __FILE__, __LINE__ );
   if( buffer == NULL )
      exit( 1 );

   // Get the size of the buffer by calling _msize_dbg
   size = _msize_dbg( buffer, _NORMAL_BLOCK );
   printf( "Size of block after _malloc_dbg of 40 longs: %u\n", size );

   // Expand the buffer using _expand_dbg and show the new size
   buffer = (long *)_expand_dbg( buffer, size + sizeof(long),
                                 _NORMAL_BLOCK, __FILE__, __LINE__ );

   if( buffer == NULL )
      exit( 1 );
   size = _msize_dbg( buffer, _NORMAL_BLOCK );
   printf( "Size of block after _expand_dbg of 1 more long: %u\n",
           size );

   free( buffer );
   exit( 0 );
}
```

```Output
Size of block after _malloc_dbg of 40 longs: 160
Size of block after _expand_dbg of 1 more long: 164
```

## Comment

The output of this program depends on your computer's ability to expand all the sections. If all sections are expanded, the output is reflected in the Output section.

## See also

[Debug routines](../debug-routines.md)\
[`_malloc_dbg`](malloc-dbg.md)
