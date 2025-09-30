---
title: "_heapset"
description: "Learn more about: _heapset"
ms.date: "11/04/2016"
api_name: ["_heapset"]
api_location: ["msvcr90.dll", "msvcr80.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcrt.dll", "msvcr120.dll", "msvcr100.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_heapset", "heapset"]
helpviewer_keywords: ["checking heap", "heapset function", "heaps, checking", "debugging [CRT], heap-related problems", "_heapset function"]
---
# `_heapset`

Checks heaps for minimal consistency and sets the free entries to a specified value.

> [!IMPORTANT]
> This function is obsolete. Beginning in Visual Studio 2015, it is not available in the CRT.

## Syntax

```C
int _heapset(
   unsigned int fill
);
```

#### Parameters

*`fill`*\
Fill character.

## Return value

**`_heapset`** returns one of the following integer manifest constants defined in Malloc.h.

| Value | Description |
|---|---|
| `_HEAPBADBEGIN` | Initial header information invalid or not found. |
| `_HEAPBADNODE` | Heap damaged or bad node found. |
| `_HEAPEMPTY` | Heap not initialized. |
| `_HEAPOK` | Heap appears to be consistent. |

In addition, if an error occurs, **`_heapset`** sets `errno` to `ENOSYS`.

## Remarks

The **`_heapset`** function shows free memory locations or nodes that have been unintentionally overwritten.

**`_heapset`** checks for minimal consistency on the heap and then sets each byte of the heap's free entries to the `fill` value. This known value shows which memory locations of the heap contain free nodes and which contain data that were unintentionally written to freed memory. If the operating system doesn't support **`_heapset`** (for example, Windows 98), the function returns `_HEAPOK` and sets `errno` to `ENOSYS`.

## Requirements

| Routine | Required header | Optional header |
|---|---|---|
| **`_heapset`** | \<malloc.h> | \<errno.h> |

For more compatibility information, see [Compatibility](./compatibility.md) in the Introduction.

## Example

```c
// crt_heapset.c
// This program checks the heap and
// fills in free entries with the character 'Z'.

#include <malloc.h>
#include <stdio.h>
#include <stdlib.h>

int main( void )
{
   int heapstatus;
   char *buffer;

   if( (buffer = malloc( 1 )) == NULL ) // Make sure heap is
      exit( 0 );                        //    initialized
   heapstatus = _heapset( 'Z' );        // Fill in free entries
   switch( heapstatus )
   {
   case _HEAPOK:
      printf( "OK - heap is fine\n" );
      break;
   case _HEAPEMPTY:
      printf( "OK - heap is empty\n" );
      break;
   case _HEAPBADBEGIN:
      printf( "ERROR - bad start of heap\n" );
      break;
   case _HEAPBADNODE:
      printf( "ERROR - bad node in heap\n" );
      break;
   }
   free( buffer );
}
```

```Output
OK - heap is fine
```

## See also

[Memory allocation](./memory-allocation.md)\
[`_heapadd`](./heapadd.md)\
[`_heapchk`](./reference/heapchk.md)\
[`_heapmin`](./reference/heapmin.md)\
[`_heapwalk`](./reference/heapwalk.md)
