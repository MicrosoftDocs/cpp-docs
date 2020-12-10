---
description: "Learn more about: _lsearch_s"
title: "_lsearch_s"
ms.date: "4/2/2020"
api_name: ["_lsearch_s", "_o__lsearch_s"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-utility-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_lsearch_s", "lsearch_s"]
helpviewer_keywords: ["linear searching", "values, searching for", "keys, finding in arrays", "arrays [CRT], searching", "searching, linear", "_lsearch_s function", "lsearch_s function"]
ms.assetid: d2db0635-be7a-4799-8660-255f14450882
---
# _lsearch_s

Performs a linear search for a value. A version of [_lsearch](lsearch.md) with security enhancements as described in [Security Features in the CRT](../../c-runtime-library/security-features-in-the-crt.md).

## Syntax

```C
void *_lsearch_s(
   const void *key,
   void *base,
   unsigned int *num,
   size_t size,
   int (__cdecl *compare)(void *, const void *, const void *),
   void * context
);
```

### Parameters

*key*<br/>
Object to search for.

*base*<br/>
Pointer to the base of array to be searched.

*number*<br/>
Number of elements.

*size*<br/>
Size of each array element in bytes.

*compare*<br/>
Pointer to the comparison routine. The second parameter is a pointer to the key for search. The third parameter is a pointer to an array element to be compared with the key.

*context*<br/>
A pointer to an object that might be accessed in the comparison function.

## Return Value

If *key* is found, **_lsearch_s** returns a pointer to the element of the array at *base* that matches *key*. If *key* is not found, **_lsearch_s** returns a pointer to the newly added item at the end of the array.

If invalid parameters are passed to the function, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, then **errno** is set to **EINVAL** and the function returns **NULL**. For more information, see [errno, _doserrno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

### Error Conditions

|*key*|*base*|*compare*|*number*|*size*|**errno**|
|-----------|------------|---------------|-----------|------------|-------------|
|**NULL**|any|any|any|any|**EINVAL**|
|any|**NULL**|any|!= 0|any|**EINVAL**|
|any|any|any|any|zero|**EINVAL**|
|any|any|**NULL**|an|any|**EINVAL**|

## Remarks

The **_lsearch_s** function performs a linear search for the value *key* in an array of *number* elements, each of *width* bytes. Unlike **bsearch_s**, **_lsearch_s** does not require the array to be sorted. If *key* is not found, then **_lsearch_s** adds it to the end of the array and increments *number*.

The *compare* function is a pointer to a user-supplied routine that compares two array elements and returns a value specifying their relationship. The *compare* function also takes the pointer to the context as the first argument. **_lsearch_s** calls *compare* one or more times during the search, passing pointers to two array elements on each call. *compare* must compare the elements and then return either nonzero (meaning the elements are different) or 0 (meaning the elements are identical).

The *context* pointer can be useful if the searched data structure is part of an object and the *compare* function needs to access members of the object. For example, code in the *compare* function can cast the void pointer into the appropriate object type and access members of that object. The addition of the *context* pointer makes **_lsearch_s** more secure because additional context can be used to avoid reentrancy bugs associated with using static variables to make data available to the *compare* function.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_lsearch_s**|\<search.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Searching and Sorting](../../c-runtime-library/searching-and-sorting.md)<br/>
[bsearch_s](bsearch-s.md)<br/>
[_lfind_s](lfind-s.md)<br/>
[_lsearch](lsearch.md)<br/>
