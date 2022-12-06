---
description: "Learn more about: _lfind"
title: "_lfind"
ms.date: "4/2/2020"
api_name: ["_lfind", "_o__lfind"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-utility-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_lfind"]
helpviewer_keywords: ["linear searching", "lfind function", "arrays [CRT], searching", "searching, linear", "finding keys in arrays", "_lfind function"]
ms.assetid: a40ece70-1674-4b75-94bd-9f57cfff18f2
---
# `_lfind`

Performs a linear search for the specified key. A more secure version of this function is available; see [`_lfind_s`](lfind-s.md).

## Syntax

```C
void *_lfind(
   const void *key,
   const void *base,
   unsigned int *num,
   unsigned int width,
   int (__cdecl *compare)(const void *, const void *)
);
```

### Parameters

*`key`*\
Object to search for.

*`base`*\
Pointer to the base of search data.

*`number`*\
Number of array elements.

*`width`*\
Width of array elements.

*`compare`*\
Pointer to comparison routine. The first parameter is a pointer to key for search. The second parameter is a pointer to array element to be compared with key.

## Return value

If the key is found, **`_lfind`** returns a pointer to the element of the array at *`base`* that matches *`key`*. If the key isn't found, **`_lfind`** returns `NULL`.

## Remarks

The **`_lfind`** function performs a linear search for the value *`key`* in an array of *`number`* elements, each of *`width`* bytes. Unlike `bsearch`, **`_lfind`** doesn't require the array to be sorted. The *`base`* argument is a pointer to the base of the array to be searched. The *`compare`* argument is a pointer to a user-supplied routine that compares two array elements and then returns a value specifying their relationship. **`_lfind`** calls the *`compare`* routine one or more times during the search, passing pointers to two array elements on each call. The *`compare`* routine must compare the elements and then return nonzero (meaning the elements are different) or 0 (meaning the elements are identical).

This function validates its parameters. If *`compare`*, *`key`* or *`number`* is `NULL`, or if *`base`* is `NULL` and *`number`* is nonzero, or if *`width`* is less than zero, the invalid parameter handler is invoked, as described in [Parameter validation](../parameter-validation.md). If execution is allowed to continue, `errno` is set to `EINVAL` and the function returns `NULL`.

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

## Requirements

| Routine | Required header |
|---|---|
| **`_lfind`** | \<search.h> |

For more compatibility information, see [Compatibility](../compatibility.md).

## Example

```C
// crt_lfind.c
// This program uses _lfind to search a string array
// for an occurrence of "hello".

#include <search.h>
#include <string.h>
#include <stdio.h>

int compare(const void *arg1, const void *arg2 )
{
   return( _stricmp( * (char**)arg1, * (char**)arg2 ) );
}

int main( )
{
   char *arr[] = {"Hi", "Hello", "Bye"};
   int n = sizeof(arr) / sizeof(char*);
   char **result;
   char *key = "hello";

   result = (char **)_lfind( &key, arr,
                      &n, sizeof(char *), compare );

   if( result )
      printf( "%s found\n", *result );
   else
      printf( "hello not found!\n" );
}
```

```Output
Hello found
```

## See also

[Searching and sorting](../searching-and-sorting.md)\
[`_lfind_s`](lfind-s.md)\
[`bsearch`](bsearch.md)\
[`_lsearch`](lsearch.md)\
[`qsort`](qsort.md)
