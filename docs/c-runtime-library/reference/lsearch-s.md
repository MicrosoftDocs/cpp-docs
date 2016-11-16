---
title: "_lsearch_s | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_lsearch_s"
apilocation: 
  - "msvcrt.dll"
  - "msvcr80.dll"
  - "msvcr90.dll"
  - "msvcr100.dll"
  - "msvcr100_clr0400.dll"
  - "msvcr110.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr120.dll"
  - "msvcr120_clr0400.dll"
  - "ucrtbase.dll"
  - "api-ms-win-crt-utility-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "_lsearch_s"
  - "lsearch_s"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "linear searching"
  - "values, searching for"
  - "keys, finding in arrays"
  - "arrays [CRT], searching"
  - "searching, linear"
  - "_lsearch_s function"
  - "lsearch_s function"
ms.assetid: d2db0635-be7a-4799-8660-255f14450882
caps.latest.revision: 17
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# _lsearch_s
Performs a linear search for a value. A version of [_lsearch](../../c-runtime-library/reference/lsearch.md) with security enhancements as described in [Security Features in the CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
## Syntax  
  
```  
void *_lsearch_s(  
   const void *key,  
   void *base,  
   unsigned int *num,  
   size_t size,  
   int (__cdecl *compare)(void *, const void *, const void *),  
   void * context  
);  
```  
  
#### Parameters  
 `key`  
 Object to search for.  
  
 `base`  
 Pointer to the base of array to be searched.  
  
 `num`  
 Number of elements.  
  
 `size`  
 Size of each array element in bytes.  
  
 `compare`  
 Pointer to the comparison routine. The second parameter is a pointer to the key for search. The third parameter is a pointer to an array element to be compared with the key.  
  
 `context`  
 A pointer to an object that might be accessed in the comparison function.  
  
## Return Value  
 If `key` is found, `_lsearch_s` returns a pointer to the element of the array at `base` that matches `key`. If `key` is not found, `_lsearch_s` returns a pointer to the newly added item at the end of the array.  
  
 If invalid parameters are passed to the function, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, then `errno` is set to `EINVAL` and the function returns `NULL`. For more information, see [errno, _doserrno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
### Error Conditions  
  
|`key`|`base`|`compare`|`num`|`size`|`errno`|  
|-----------|------------|---------------|-----------|------------|-------------|  
|`NULL`|any|any|any|any|`EINVAL`|  
|any|`NULL`|any|!= 0|any|`EINVAL`|  
|any|any|any|any|zero|`EINVAL`|  
|any|any|`NULL`|an|any|`EINVAL`|  
  
## Remarks  
 The `_lsearch_s` function performs a linear search for the value `key` in an array of `num` elements, each of `width` bytes. Unlike `bsearch_s`, `_lsearch_s` does not require the array to be sorted. If `key` is not found, then `_lsearch_s` adds it to the end of the array and increments `num`.  
  
 The `compare` function is a pointer to a user-supplied routine that compares two array elements and returns a value specifying their relationship. The `compare` function also takes the pointer to the context as the first argument. `_lsearch_s` calls `compare` one or more times during the search, passing pointers to two array elements on each call. `compare` must compare the elements and then return either nonzero (meaning the elements are different) or 0 (meaning the elements are identical).  
  
 The `context` pointer can be useful if the searched data structure is part of an object and the `compare` function needs to access members of the object. For example, code in the `compare` function can cast the void pointer into the appropriate object type and access members of that object. The addition of the `context` pointer makes `_lsearch_s` more secure because additional context can be used to avoid reentrancy bugs associated with using static variables to make data available to the `compare` function.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_lsearch_s`|\<search.h>|  
  
 For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).  
  
## See Also  
 [Searching and Sorting](../../c-runtime-library/searching-and-sorting.md)   
 [bsearch_s](../../c-runtime-library/reference/bsearch-s.md)   
 [_lfind_s](../../c-runtime-library/reference/lfind-s.md)   
 [_lsearch](../../c-runtime-library/reference/lsearch.md)