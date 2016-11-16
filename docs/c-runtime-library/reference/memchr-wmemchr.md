---
title: "memchr, wmemchr | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "wmemchr"
  - "memchr"
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
apitype: "DLLExport"
f1_keywords: 
  - "memchr"
  - "wmemchr"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "memchr function"
  - "wmemchr function"
ms.assetid: 5a348581-28f1-4256-8434-687245f7fc9f
caps.latest.revision: 19
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
# memchr, wmemchr
Find characters in a buffer.  
  
## Syntax  
  
```  
void *memchr(  
   const void *buf,  
   int c,  
   size_t count  
); // C only  
void *memchr(  
   void *buf,  
   int c,  
   size_t count  
); // C++ only  
const void *memchr(  
   const void *buf,  
   int c,  
   size_t count  
); // C++ only  
wchar_t *wmemchr(  
   const wchar_t * buf,   
   wchar_t c,  
   size_t count  
); // C only  
wchar_t *wmemchr(  
   wchar_t * buf,   
   wchar_t c,  
   size_t count  
); // C++ only  
const wchar_t *wmemchr(  
   const wchar_t * buf,   
   wchar_t c,  
   size_t count  
); // C++ only  
```  
  
#### Parameters  
 `buf`  
 Pointer to buffer.  
  
 `c`  
 Character to look for.  
  
 `count`  
 Number of characters to check.  
  
## Return Value  
 If successful, returns a pointer to the first location of `c` in `buf`. Otherwise it returns `NULL`.  
  
## Remarks  
 `memchr` and `wmemchr` look for the first occurrence of `c` in the first `count` bytes of `buf`. It stops when it finds `c` or when it has checked the first `count` bytes.  
  
 In C, these functions take a `const` pointer for the first argument. In C++, two overloads are available. The overload taking a pointer to `const` returns a pointer to `const`; the version that takes a pointer to non-`const` returns a pointer to non-`const`. The macro _CONST_CORRECT_OVERLOADS is defined if both the `const` and non-`const` versions of these functions are available. If you require the non-`const` behavior for both C++ overloadsin C++, define the symbol _CONST_RETURN.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`memchr`|\<memory.h> or \<string.h>|  
|`wmemchr`|\<wchar.h>|  
  
 For more information about compatibility, see [Compatibility](../../c-runtime-library/compatibility.md).  
  
## Libraries  
 All versions of the [C run-time libraries](../../c-runtime-library/crt-library-features.md).  
  
## Example  
  
```  
// crt_memchr.c  
  
#include <memory.h>  
#include <stdio.h>  
  
int  ch = 'r';  
char str[] =    "lazy";  
char string[] = "The quick brown dog jumps over the lazy fox";  
char fmt1[] =   "         1         2         3         4         5";  
char fmt2[] =   "12345678901234567890123456789012345678901234567890";  
  
int main( void )  
{  
   char *pdest;  
   int result;  
   printf( "String to be searched:\n             %s\n", string );  
   printf( "             %s\n             %s\n\n", fmt1, fmt2 );  
  
   printf( "Search char: %c\n", ch );  
   pdest = memchr( string, ch, sizeof( string ) );  
   result = (int)(pdest - string + 1);  
   if ( pdest != NULL )  
      printf( "Result:      %c found at position %d\n", ch, result );  
   else  
      printf( "Result:      %c not found\n" );  
}  
```  
  
## Output  
  
```  
String to be searched:  
             The quick brown dog jumps over the lazy fox  
                      1         2         3         4         5  
             12345678901234567890123456789012345678901234567890  
  
Search char: r  
Result:      r found at position 12  
```  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).  
  
## See Also  
 [Buffer Manipulation](../../c-runtime-library/buffer-manipulation.md)   
 [_memccpy](../../c-runtime-library/reference/memccpy.md)   
 [memcmp, wmemcmp](../../c-runtime-library/reference/memcmp-wmemcmp.md)   
 [memcpy, wmemcpy](../../c-runtime-library/reference/memcpy-wmemcpy.md)   
 [memset, wmemset](../../c-runtime-library/reference/memset-wmemset.md)   
 [strchr, wcschr, _mbschr, _mbschr_l](../../c-runtime-library/reference/strchr-wcschr-mbschr-mbschr-l.md)