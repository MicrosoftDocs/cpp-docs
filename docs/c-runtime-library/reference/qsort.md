---
title: "qsort | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
apiname: ["qsort"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ntdll.dll", "ucrtbase.dll", "api-ms-win-crt-utility-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["qsort"]
dev_langs: ["C++"]
helpviewer_keywords: ["qsort function", "quick-sort algorithm", "sorting arrays", "arrays [CRT], sorting"]
ms.assetid: d6cb33eb-d209-485f-8d41-229eb743c027
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# qsort

Performs a quick sort. A more secure version of this function is available; see [qsort_s](qsort-s.md).

## Syntax

```C
void qsort(
   void *base,
   size_t num,
   size_t width,
   int (__cdecl *compare )(const void *, const void *)
);
```

### Parameters

<br/>
Start of target array.

*number*<br/>
Array size in elements.

*width*<br/>
Element size in bytes.

*compare*<br/>
Pointer to a user-supplied routine that compares two array elements and returns a value that specifies their relationship.

## Remarks

The **qsort** function implements a quick-sort algorithm to sort an array of *number* elements, each of *width* bytes. The argument *base* is a pointer to the base of the array to be sorted. **qsort** overwrites this array by using the sorted elements.

**qsort** calls the *compare* routine one or more times during the sort, and passes pointers to two array elements on each call.

```C
compare( (void *) & elem1, (void *) & elem2 );
```

The routine compares the elements and returns one of the following values.

|Compare function return value|Description|
|-----------------------------------|-----------------|
|< 0|**elem1** less than **elem2**|
|0|**elem1** equivalent to **elem2**|
|> 0|**elem1** greater than **elem2**|

The array is sorted in increasing order, as defined by the comparison function. To sort an array in decreasing order, reverse the sense of "greater than" and "less than" in the comparison function.

This function validates its parameters. If *compare* or *number* is **NULL**, or if *base* is **NULL** and **number* is nonzero, or if *width* is less than zero, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, the function returns and **errno** is set to **EINVAL**.

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**qsort**|\<stdlib.h> and \<search.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

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

[Searching and Sorting](../../c-runtime-library/searching-and-sorting.md)<br/>
[bsearch](bsearch.md)<br/>
[_lsearch](lsearch.md)<br/>
