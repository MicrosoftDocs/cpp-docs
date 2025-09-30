---
title: "qsort"
description: "Describes the Microsoft C runtime quick sort API `qsort`"
ms.date: "8/2/2023"
api_name: ["qsort", "_o_qsort"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ntdll.dll", "ucrtbase.dll", "api-ms-win-crt-utility-l1-1-0.dll", "ntoskrnl.exe"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["qsort"]
helpviewer_keywords: ["qsort function", "quick-sort algorithm", "sorting arrays", "arrays [CRT], sorting"]
---
# `qsort`

Performs a quick sort. A more secure version of this function is available; see [`qsort_s`](qsort-s.md).

## Syntax

```C
void qsort(
   void *base,
   size_t number,
   size_t width,
   int (__cdecl *compare )(const void *, const void *)
);
```

### Parameters

*`base`*\
Start of target array.

*`number`*\
Array size in elements.

*`width`*\
Element size in bytes.

*`compare`*\
Pointer to a user-supplied routine that compares two array elements and returns a value that specifies their relationship.

## Remarks

The **`qsort`** function implements a quick-sort algorithm to sort an array of *`number`* elements, each of *`width`* bytes. The argument *`base`* is a pointer to the base of the array to be sorted. **`qsort`** overwrites this array by using the sorted elements.

**`qsort`** calls the *`compare`* routine one or more times during the sort, and passes pointers to two array elements on each call. If *`compare`* indicates two elements are the same, their order in the resulting sorted array is unspecified.

```C
compare(const void *elem1, const void *elem2);
```

The routine compares the elements and returns one of the following values.

| Compare function return value | Description |
|---|---|
| < 0 | **`elem1`** less than **`elem2`** |
| 0 | **`elem1`** equivalent to **`elem2`** |
| > 0 | **`elem1`** greater than **`elem2`** |

The array is sorted in increasing order, as defined by the comparison function. To sort an array in decreasing order, reverse the sense of "greater than" and "less than" in the comparison function.

This function validates its parameters. If *`compare`* or *`number`* is `NULL`, or if *`base`* is `NULL` and *`number`* is nonzero, or if *`width`* is less than zero, the invalid parameter handler is invoked, as described in [Parameter validation](../parameter-validation.md). If execution is allowed to continue, the function returns, and `errno` is set to `EINVAL`.

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

## Requirements

| Routine | Required header |
|---|---|
| **`qsort`** | `<stdlib.h>` and `<search.h>` |

For more compatibility information, see [Compatibility](../compatibility.md).

## Example

```C
// crt_qsort.c
// arguments: every good boy deserves favor

/* This program reads the command-line
* parameters and uses qsort to sort them. It
* then displays the sorted arguments.
*/

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int compare( const void *arg1, const void *arg2 );

int main( int argc, char **argv )
{
   int i;
   /* Eliminate argv[0] from sort: */
   argv++;
   argc--;

   /* Sort remaining args using Quicksort algorithm: */
   qsort( (void *)argv, (size_t)argc, sizeof( char * ), compare );

   /* Output sorted list: */
   for( i = 0; i < argc; ++i )
      printf( " %s", argv[i] );
   printf( "\n" );
}

int compare( const void *arg1, const void *arg2 )
{
   /* Compare all of both strings: */
   return _stricmp( * ( char** ) arg1, * ( char** ) arg2 );
}
```

```Output
boy deserves every favor good
```

## See also

[Searching and sorting](../searching-and-sorting.md)\
[`bsearch`](bsearch.md)\
[`_lsearch`](lsearch.md)
