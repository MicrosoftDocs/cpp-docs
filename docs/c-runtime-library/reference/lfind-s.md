---
title: "_lfind_s | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_lfind_s"
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
  - "lfind_s"
  - "_lfind_s"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "linear searching"
  - "keys, finding in arrays"
  - "lfind_s function"
  - "arrays [CRT], searching"
  - "searching, linear"
  - "_lfind_s function"
ms.assetid: f1d9581d-5c9d-4222-a31c-a6dfafefa40d
caps.latest.revision: 26
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
# _lfind_s
Performs a linear search for the specified key. A version of [_lfind](../../c-runtime-library/reference/lfind.md) with security enhancements as described in [Security Features in the CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
## Syntax  
  
```  
void *_lfind_s(  
   const void *key,  
   const void *base,  
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
 Pointer to the base of search data.  
  
 `num`  
 Number of array elements.  
  
 `size`  
 Size of array elements in bytes.  
  
 `compare`  
 Pointer to comparison routine. The first parameter is the `context` pointer. The second parameter is a pointer to key for search. The third parameter is a pointer to array element to be compared with key.  
  
 `context`  
 A pointer to an object that might be accessed in the comparison function.  
  
## Return Value  
 If the key is found, `_lfind_s` returns a pointer to the element of the array at `base` that matches `key`. If the key is not found, `_lfind_s` returns `NULL`.  
  
 If invalid parameters are passed to the function, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, `errno` is set to `EINVAL` and the function returns `NULL`.  
  
### Error Conditions  
  
|key|base|compare|num|size|errno|  
|---------|----------|-------------|---------|----------|-----------|  
|`NULL`|any|any|any|any|`EINVAL`|  
|any|`NULL`|any|!= 0|any|`EINVAL`|  
|any|any|any|any|zero|`EINVAL`|  
|any|any|`NULL`|an|any|`EINVAL`|  
  
## Remarks  
 The `_lfind_s` function performs a linear search for the value `key` in an array of `num` elements, each of `width` bytes. Unlike `bsearch_s`, `_lfind_s` does not require the array to be sorted. The `base` argument is a pointer to the base of the array to be searched. The `compare` argument is a pointer to a user-supplied routine that compares two array elements and then returns a value specifying their relationship. `_lfind_s` calls the `compare` routine one or more times during the search, passing the `context` pointer and pointers to two array elements on each call. The `compare` routine must compare the elements then return nonzero (meaning that the elements are different) or 0 (meaning the elements are identical).  
  
 `_lfind_s` is similar to `_lfind` except for the addition of the `context` pointer to the arguments of the comparison function and the parameter list of the function. The `context` pointer can be useful if the searched data structure is part of an object and the `compare` function needs to access members of the object. The `compare` function can cast the void pointer into the appropriate object type and access members of that object. The addition of the `context` parameter makes `_lfind_s` more secure because additional context can be used to avoid reentrancy bugs associated with using static variables to make data available to the `compare` function.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_lfind_s`|\<search.h>|  
  
 For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.  
  
## Example  
  
```  
// crt_lfind_s.cpp  
// This program uses _lfind_s to search a string array,  
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
// Codepage 850 is the OEM codepage used by the command line,  
// so \x00e1 is the German Sharp S  
  
char *array1[] = { "wei\x00e1", "weis", "annehmen", "weizen", "Zeit",  
                   "weit" };  
  
#define GERMAN_LOCALE "German_Germany.850"  
  
#endif  
  
#ifdef CODEPAGE_1252  
   // If using codepage 1252 (ISO 8859-1, Latin-1), use \x00df  
   // for the German Sharp S  
char *array1[] = { "wei\x00df", "weis", "annehmen", "weizen", "Zeit",  
                   "weit" };  
  
#define GERMAN_LOCALE "German_Germany.1252"  
  
#endif  
  
// The context parameter lets you create a more generic compare.  
// Without this parameter, you would have stored the locale in a  
// static variable, thus making it vulnerable to thread conflicts  
// (if this were a multithreaded program).  
  
int compare( void *pvlocale, const void *str1, const void *str2)  
{  
    char *s1 = *(char**)str1;  
    char *s2 = *(char**)str2;  
  
    locale& loc = *( reinterpret_cast< locale * > ( pvlocale));  
  
    return use_facet< collate<char> >(loc).compare(  
       s1, s1+strlen(s1),  
       s2, s2+strlen(s2) );  
}  
  
void find_it( char *key, char *array[], unsigned int num, locale &loc )  
{  
   char **result = (char **)_lfind_s( &key, array,   
                      &num, sizeof(char *), compare, &loc );  
   if( result )  
      printf( "%s found\n", *result );  
   else  
      printf( "%s not found\n", key );  
}  
  
int main( )  
{  
   find_it( "weit", array1, sizeof(array1)/sizeof(char*), locale(GERMAN_LOCALE) );  
}  
```  
  
```Output  
weit found  
```  
  
## .NET Framework Equivalent  
 <xref:System.Collections.ArrayList.Contains%2A>  
  
## See Also  
 [Searching and Sorting](../../c-runtime-library/searching-and-sorting.md)   
 [bsearch_s](../../c-runtime-library/reference/bsearch-s.md)   
 [_lsearch_s](../../c-runtime-library/reference/lsearch-s.md)   
 [qsort_s](../../c-runtime-library/reference/qsort-s.md)   
 [_lfind](../../c-runtime-library/reference/lfind.md)