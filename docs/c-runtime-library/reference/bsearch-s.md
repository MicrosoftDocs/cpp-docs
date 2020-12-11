---
description: "Learn more about: bsearch_s"
title: "bsearch_s"
ms.date: "4/2/2020"
api_name: ["bsearch_s", "_o_bsearch_s"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-utility-l1-1-0.dll", "ntoskrnl.exe", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["bsearch_s"]
helpviewer_keywords: ["arrays [CRT], binary search", "bsearch_s function"]
ms.assetid: d5690d5e-6be3-4f1d-aa0b-5ca6dbded276
---
# bsearch_s

Performs a binary search of a sorted array. This function is a version of [bsearch](bsearch.md) with security enhancements as described in [Security features in the CRT](../../c-runtime-library/security-features-in-the-crt.md).

## Syntax

```C
void *bsearch_s(
   const void *key,
   const void *base,
   size_t number,
   size_t width,
   int ( __cdecl *compare ) ( void *, const void *key, const void *datum),
   void * context
);
```

### Parameters

*key*\
Pointer to the key to search for.

*base*\
Pointer to the base of the search data.

*number*\
Number of elements.

*width*\
Width of elements.

*compare*\
Callback function that compares two elements. The first argument is the *context* pointer. The second argument is a pointer to the *key* for the search. The third argument is a pointer to the array element to be compared with *key*.

*context*\
A pointer to an object that can be accessed in the comparison function.

## Return value

**bsearch_s** returns a pointer to an occurrence of *key* in the array pointed to by *base*. If *key* is not found, the function returns **NULL**. If the array is not in ascending sort order or contains duplicate records with identical keys, the result is unpredictable.

If invalid parameters are passed to the function, it invokes the invalid parameter handler as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, **errno** is set to **EINVAL** and the function returns **NULL**. For more information, see [errno, _doserrno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

### Error conditions

|*key*|*base*|*compare*|*number*|*width*|**`errno`** value|
|-|-|-|-|-|-|
|**NULL**|any|any|any|any|**EINVAL**|
|any|**NULL**|any|!= 0|any|**EINVAL**|
|any|any|any|any|= 0|**EINVAL**|
|any|any|**NULL**|an|any|**EINVAL**|

## Remarks

The **bsearch_s** function performs a binary search of a sorted array of *number* elements, each of *width* bytes in size. The *base* value is a pointer to the base of the array to be searched, and *key* is the value being sought. The *compare* parameter is a pointer to a user-supplied routine that compares the requested key to an array element and returns one of the following values specifying their relationship:

|Value returned by *compare* routine|Description|
|-----------------------------------------|-----------------|
|\< 0|Key is less than array element.|
|0|Key is equal to array element.|
|> 0|Key is greater than array element.|

The *context* pointer may be useful if the searched data structure is part of an object, and the compare function needs to access members of the object. The *compare* function may cast the void pointer into the appropriate object type and access members of that object. The addition of the *context* parameter makes **bsearch_s** more secure since additional context may be used to avoid reentrancy bugs associated with using static variables to make data available to the *compare* function.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**bsearch_s**|\<stdlib.h> and \<search.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

This program sorts a string array with [qsort_s](qsort-s.md), and then uses bsearch_s to find the word "cat".

```cpp
// crt_bsearch_s.cpp
// This program uses bsearch_s to search a string array,
// passing a locale as the context.
// compile with: /EHsc
#include <stdlib.h>
#include <stdio.h>
#include <search.h>
#include <process.h>
#include <locale.h>
#include <locale>
#include <windows.h>
using namespace std;

// The sort order is dependent on the code page.  Use 'chcp' at the
// command line to change the codepage.  When executing this application,
// the command prompt codepage must match the codepage used here:

#define CODEPAGE_850

#ifdef CODEPAGE_850
#define ENGLISH_LOCALE "English_US.850"
#endif

#ifdef CODEPAGE_1252
#define ENGLISH_LOCALE "English_US.1252"
#endif

// The context parameter lets you create a more generic compare.
// Without this parameter, you would have stored the locale in a
// static variable, thus making it vulnerable to thread conflicts
// (if this were a multithreaded program).

int compare( void *pvlocale, char **str1, char **str2)
{
    char *s1 = *str1;
    char *s2 = *str2;

    locale& loc = *( reinterpret_cast< locale * > ( pvlocale));

    return use_facet< collate<char> >(loc).compare(
       s1, s1+strlen(s1),
       s2, s2+strlen(s2) );
}

int main( void )
{
   char *arr[] = {"dog", "pig", "horse", "cat", "human", "rat", "cow", "goat"};

   char *key = "cat";
   char **result;
   int i;

   /* Sort using Quicksort algorithm: */
   qsort_s( arr,
            sizeof(arr)/sizeof(arr[0]),
            sizeof( char * ),
            (int (*)(void*, const void*, const void*))compare,
            &locale(ENGLISH_LOCALE) );

   for( i = 0; i < sizeof(arr)/sizeof(arr[0]); ++i )    /* Output sorted list */
      printf( "%s ", arr[i] );

   /* Find the word "cat" using a binary search algorithm: */
   result = (char **)bsearch_s( &key,
                                arr,
                                sizeof(arr)/sizeof(arr[0]),
                                sizeof( char * ),
                                (int (*)(void*, const void*, const void*))compare,
                                &locale(ENGLISH_LOCALE) );
   if( result )
      printf( "\n%s found at %Fp\n", *result, result );
   else
      printf( "\nCat not found!\n" );
}
```

```Output
cat cow dog goat horse human pig rat
cat found at 002F0F04
```

## See also

[Searching and Sorting](../../c-runtime-library/searching-and-sorting.md)\
[_lfind](lfind.md)\
[_lsearch](lsearch.md)\
[qsort](qsort.md)
