---
title: "memmove, wmemmove | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "memmove"
  - "wmemmove"
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
  - "memmove"
  - "wmemmove"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "wmemmove function"
  - "memmove function"
ms.assetid: 3a906114-9cf3-40d7-bd99-ee452004f218
caps.latest.revision: 21
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
# memmove, wmemmove
Moves one buffer to another. More secure versions of these functions are available; see [memmove_s, wmemmove_s](../../c-runtime-library/reference/memmove-s-wmemmove-s.md).  
  
## Syntax  
  
```  
void *memmove(  
   void *dest,  
   const void *src,  
   size_t count   
);  
wchar_t *wmemmove(  
   wchar_t *dest,  
   const wchar_t *src,  
   size_t count  
);  
```  
  
#### Parameters  
 `dest`  
 Destination object.  
  
 `src`  
 Source object.  
  
 `count`  
 Number of bytes (`memmove`) or characters (`wmemmove`) to copy.  
  
## Return Value  
 The value of `dest`*.*  
  
## Remarks  
 Copies `count` bytes (`memmove`) or characters (`wmemmove`) from `src` to `dest`*.* If some regions of the source area and the destination overlap, both functions ensure that the original source bytes in the overlapping region are copied before being overwritten.  
  
 **Security Note** Make sure that the destination buffer is the same size or larger than the source buffer. For more information, see [Avoiding Buffer Overruns](http://msdn.microsoft.com/library/windows/desktop/ms717795).  
  
 The `memmove` and `wmemmove` functions will only be deprecated if the constant `_CRT_SECURE_DEPRECATE_MEMORY` is defined prior to the inclusion statement in order for the functions to be deprecated, such as in the example below:  
  
```  
#define _CRT_SECURE_DEPRECATE_MEMORY  
#include <string.h>  
or  
#define _CRT_SECURE_DEPRECATE_MEMORY  
#include <wchar.h>  
```  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`memmove`|\<string.h>|  
|`wmemmove`|\<wchar.h>|  
  
 For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.  
  
## Example  
  
```  
// crt_memcpy.c  
// Illustrate overlapping copy: memmove  
// always handles it correctly; memcpy may handle  
// it correctly.  
//  
  
#include <memory.h>  
#include <string.h>  
#include <stdio.h>  
  
char str1[7] = "aabbcc";  
  
int main( void )  
{  
   printf( "The string: %s\n", str1 );  
   memcpy( str1 + 2, str1, 4 );  
   printf( "New string: %s\n", str1 );  
  
   strcpy_s( str1, sizeof(str1), "aabbcc" );   // reset string  
  
   printf( "The string: %s\n", str1 );  
   memmove( str1 + 2, str1, 4 );  
   printf( "New string: %s\n", str1 );  
}  
```  
  
```Output  
The string: aabbcc  
New string: aaaabb  
The string: aabbcc  
New string: aaaabb  
```  
  
## .NET Framework Equivalent  
 [System::Buffer::BlockCopy](https://msdn.microsoft.com/en-us/library/system.buffer.blockcopy.aspx)  
  
## See Also  
 [Buffer Manipulation](../../c-runtime-library/buffer-manipulation.md)   
 [_memccpy](../../c-runtime-library/reference/memccpy.md)   
 [memcpy, wmemcpy](../../c-runtime-library/reference/memcpy-wmemcpy.md)   
 [strcpy, wcscpy, _mbscpy](../../c-runtime-library/reference/strcpy-wcscpy-mbscpy.md)   
 [strncpy, _strncpy_l, wcsncpy, _wcsncpy_l, _mbsncpy, _mbsncpy_l](../../c-runtime-library/reference/strncpy-strncpy-l-wcsncpy-wcsncpy-l-mbsncpy-mbsncpy-l.md)