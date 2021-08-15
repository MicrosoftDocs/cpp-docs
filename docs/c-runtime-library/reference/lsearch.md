---
description: "Learn more about: _lsearch"
title: "_lsearch"
ms.date: "4/2/2020"
api_name: ["_lsearch", "_o__lsearch"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-utility-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_lsearch"]
helpviewer_keywords: ["_lsearch function", "values, searching for", "keys, finding in arrays", "arrays [CRT], searching", "linear searches", "searching, linear", "lsearch function"]
ms.assetid: 8200f608-159a-46f0-923b-1a37ee1af7e0
---
# _lsearch

Performs a linear search for a value; adds to end of list if not found. A more secure version of this function is available; see [_lsearch_s](lsearch-s.md).

## Syntax

```C
void *_lsearch(
   const void *key,
   void *base,
   unsigned int *num,
   unsigned int width,
   int (__cdecl *compare)(const void *, const void *)
);
```

### Parameters

*key*<br/>
Object to search for.

*base*<br/>
Pointer to the base of array to be searched.

*number*<br/>
Number of elements.

*width*<br/>
Width of each array element.

*compare*<br/>
Pointer to the comparison routine. The first parameter is a pointer to the key for search. The second parameter is a pointer to an array element to be compared with the key.

## Return Value

If the key is found, **_lsearch** returns a pointer to the element of the array at *base* that matches *key*. If the key is not found, **_lsearch** returns a pointer to the newly added item at the end of the array.

## Remarks

The **_lsearch** function performs a linear search for the value *key* in an array of *number* elements, each of *width* bytes. Unlike **bsearch**, **_lsearch** does not require the array to be sorted. If *key* is not found, **_lsearch** adds it to the end of the array and increments *number*.

The *compare* argument is a pointer to a user-supplied routine that compares two array elements and returns a value specifying their relationship. **_lsearch** calls the *compare* routine one or more times during the search, passing pointers to two array elements on each call. *compare* must compare the elements and return either nonzero (meaning the elements are different) or 0 (meaning the elements are identical).

This function validates its parameters. If *compare*, *key* or *number* is **NULL**, or if *base* is **NULL** and *number* is nonzero, or if *width* is less than zero, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, **errno** is set to **EINVAL** and the function returns **NULL**.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_lsearch**|\<search.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_lsearch.c
#include <search.h>
#include <string.h>
#include <stdio.h>

int compare( const void *arg1, const void *arg2 );

int main(void)
{
   char * wordlist[4] = { "hello", "thanks", "bye" };
                            // leave room to grow...
   int n = 3;
   char **result;
   char *key = "extra";
   int i;

   printf( "wordlist before _lsearch:" );
   for( i=0; i<n; ++i ) printf( " %s", wordlist[i] );
   printf( "\n" );

   result = (char **)_lsearch( &key, wordlist,
                      &n, sizeof(char *), compare );

   printf( "wordlist after _lsearch:" );
   for( i=0; i<n; ++i ) printf( " %s", wordlist[i] );
   printf( "\n" );
}

int compare(const void *arg1, const void *arg2 )
{
   return( _stricmp( * (char**)arg1, * (char**)arg2 ) );
}
```

```Output
wordlist before _lsearch: hello thanks bye
wordlist after _lsearch: hello thanks bye extra
```

## See also

[Searching and Sorting](../../c-runtime-library/searching-and-sorting.md)<br/>
[bsearch](bsearch.md)<br/>
[_lfind](lfind.md)<br/>
[_lsearch_s](lsearch-s.md)<br/>
