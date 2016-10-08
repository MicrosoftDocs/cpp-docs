---
title: "_memicmp, _memicmp_l"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
  - C
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
apiname: 
  - _memicmp_l
  - _memicmp
apilocation: 
  - msvcrt.dll
  - msvcr80.dll
  - msvcr90.dll
  - msvcr100.dll
  - msvcr100_clr0400.dll
  - msvcr110.dll
  - msvcr110_clr0400.dll
  - msvcr120.dll
  - msvcr120_clr0400.dll
  - ucrtbase.dll
  - api-ms-win-crt-string-l1-1-0.dll
apitype: DLLExport
ms.assetid: 0a6eb945-4077-4f84-935d-1aaebe8db8cb
caps.latest.revision: 17
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# _memicmp, _memicmp_l
Compares characters in two buffers (case-insensitive).  
  
## Syntax  
  
```  
int _memicmp(  
   const void *buf1,  
   const void *buf2,  
   size_t count   
);  
int _memicmp_l(  
   const void *buf1,  
   const void *buf2,  
   size_t count,  
   _locale_t locale  
);  
```  
  
#### Parameters  
 `buf1`  
 First buffer.  
  
 `buf2`  
 Second buffer.  
  
 `count`  
 Number of characters.  
  
 `locale`  
 Locale to use.  
  
## Return Value  
 The return value indicates the relationship between the buffers.  
  
|Return value|Relationship of first count bytes of buf1 and buf2|  
|------------------|--------------------------------------------------------|  
|< 0|`buf1` less than `buf2`.|  
|0|`buf1` identical to `buf2`.|  
|> 0|`buf1` greater than `buf2`.|  
|`_NLSCMPERROR`|An error occurred.|  
  
## Remarks  
 The `_memicmp` function compares the first `count` characters of the two buffers `buf1` and `buf2` byte by byte. The comparison is not case-sensitive.  
  
 If either `buf1` or `buf2` is a null pointer, this function invokes an invalid parameter handler, as described in [Parameter Validation](../VS_visualcpp/Parameter-Validation.md). If execution is allowed to continue, the function returns `_NLSCMPERROR` and sets `errno` to `EINVAL`.  
  
 `_memicmp` uses the current locale for locale-dependent behavior; `_memicmp_l` is identical except that it uses the locale passed in instead. For more information, see [Locale](../VS_visualcpp/Locale.md).  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_memicmp`|<memory.h> or <string.h>|  
|`_memicmp_l`|<memory.h> or <string.h>|  
  
 For more compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md) in the Introduction.  
  
## Example  
  
```  
// crt_memicmp.c  
// This program uses _memicmp to compare  
// the first 29 letters of the strings named first and  
// second without regard to the case of the letters.  
  
#include <memory.h>  
#include <stdio.h>  
#include <string.h>  
  
int main( void )  
{  
   int result;  
   char first[] = "Those Who Will Not Learn from History";  
   char second[] = "THOSE WHO WILL NOT LEARN FROM their mistakes";  
   // Note that the 29th character is right here ^  
  
   printf( "Compare '%.29s' to '%.29s'\n", first, second );  
   result = _memicmp( first, second, 29 );  
   if( result < 0 )  
      printf( "First is less than second.\n" );  
   else if( result == 0 )  
      printf( "First is equal to second.\n" );  
   else if( result > 0 )  
      printf( "First is greater than second.\n" );  
}  
```  
  
 **Compare 'Those Who Will Not Learn from' to 'THOSE WHO WILL NOT LEARN FROM'**  
**First is equal to second.**   
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).  
  
## See Also  
 [Buffer Manipulation](../VS_visualcpp/Buffer-Manipulation.md)   
 [_memccpy](../VS_visualcpp/_memccpy.md)   
 [memchr, wmemchr](../VS_visualcpp/memchr--wmemchr.md)   
 [memcmp, wmemcmp](../VS_visualcpp/memcmp--wmemcmp.md)   
 [memcpy, wmemcpy](../VS_visualcpp/memcpy--wmemcpy.md)   
 [memset, wmemset](../VS_visualcpp/memset--wmemset.md)   
 [_stricmp, _wcsicmp, _mbsicmp, _stricmp_l, _wcsicmp_l, _mbsicmp_l](../VS_visualcpp/_stricmp--_wcsicmp--_mbsicmp--_stricmp_l--_wcsicmp_l--_mbsicmp_l.md)   
 [_strnicmp, _wcsnicmp, _mbsnicmp, _strnicmp_l, _wcsnicmp_l, _mbsnicmp_l](../VS_visualcpp/_strnicmp--_wcsnicmp--_mbsnicmp--_strnicmp_l--_wcsnicmp_l--_mbsnicmp_l.md)