---
description: "Learn more about: _msize_dbg"
title: "_msize_dbg"
ms.date: "11/04/2016"
api_name: ["_msize_dbg"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_msize_dbg", "msize_dbg"]
helpviewer_keywords: ["memory blocks", "_msize_dbg function", "msize_dbg function"]
ms.assetid: a333f4b6-f8a2-4e61-bb69-cb34063b8cef
---
# `_msize_dbg`

Calculates the size of a block of memory in the heap (debug version only).

## Syntax

```C
size_t _msize_dbg(
   void *userData,
   int blockType
);
```

### Parameters

*`userData`*\
Pointer to the memory block for which to determine the size.

*`blockType`*\
Type of the specified memory block: `_CLIENT_BLOCK` or `_NORMAL_BLOCK`.

## Return value

On successful completion, **`_msize_dbg`** returns the size (in bytes) of the specified memory block; otherwise it returns `NULL`.

## Remarks

**`_msize_dbg`** is a debug version of the _[`msize`](msize.md) function. When [`_DEBUG`](../debug.md) isn't defined, each call to **`_msize_dbg`** is reduced to a call to `_msize`. Both `_msize` and **`_msize_dbg`** calculate the size of a memory block in the base heap, but **`_msize_dbg`** adds two debugging features: It includes the buffers on either side of the user portion of the memory block in the returned size and it allows size calculations for specific block types.

For information about how memory blocks are allocated, initialized, and managed in the debug version of the base heap, see [CRT debug heap details](../crt-debug-heap-details.md). For information about the allocation block types and how they're used, see [Types of blocks on the debug heap](../crt-debug-heap-details.md#types-of-blocks-on-the-debug-heap). For information about the differences between standard heap functions and the debug versions, see [Debug versions of heap allocation functions](../debug-versions-of-heap-allocation-functions.md).

This function validates its parameter. If *`memblock`* is a null pointer, **`_msize_dbg`** invokes an invalid parameter handler, as described in [Parameter validation](../parameter-validation.md). If the error is handled, the function sets `errno` to `EINVAL` and returns -1.

## Requirements

| Routine | Required header |
|---|---|
| **`_msize_dbg`** | \<crtdbg.h> |

For more compatibility information, see [Compatibility](../compatibility.md).

## Libraries

Debug versions of [C run-time libraries](../crt-library-features.md) only.

## Example

```C
// crt_msize_dbg.c
// compile with: /MTd
/*
* This program allocates a block of memory using _malloc_dbg
* and then calls _msize_dbg to display the size of that block.
* Next, it uses _realloc_dbg to expand the amount of
* memory used by the buffer and then calls _msize_dbg again to
* display the new amount of memory allocated to the buffer.
*/

#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <crtdbg.h>

int main( void )
{
        long *buffer, *newbuffer;
        size_t size;

        /*
         * Call _malloc_dbg to include the filename and line number
         * of our allocation request in the header
         */
        buffer = (long *)_malloc_dbg( 40 * sizeof(long), _NORMAL_BLOCK, __FILE__, __LINE__ );
        if( buffer == NULL )
               exit( 1 );

        /*
         * Get the size of the buffer by calling _msize_dbg
         */
        size = _msize_dbg( buffer, _NORMAL_BLOCK );
        printf( "Size of block after _malloc_dbg of 40 longs: %u\n", size );

        /*
         * Reallocate the buffer using _realloc_dbg and show the new size
         */
        newbuffer = _realloc_dbg( buffer, size + (40 * sizeof(long)), _NORMAL_BLOCK, __FILE__, __LINE__ );
        if( newbuffer == NULL )
               exit( 1 );
        buffer = newbuffer;
        size = _msize_dbg( buffer, _NORMAL_BLOCK );
        printf( "Size of block after _realloc_dbg of 40 more longs: %u\n", size );

        free( buffer );
        exit( 0 );
}
```

### Output

```Output
Size of block after _malloc_dbg of 40 longs: 160
Size of block after _realloc_dbg of 40 more longs: 320
```

## See also

[Debug routines](../debug-routines.md)\
[`_malloc_dbg`](malloc-dbg.md)
