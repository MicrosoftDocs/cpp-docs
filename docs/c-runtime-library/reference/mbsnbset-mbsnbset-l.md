---
title: "_mbsnbset, _mbsnbset_l | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_mbsnbset"
  - "_mbsnbset_l"
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
  - "api-ms-win-crt-multibyte-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "mbsnbset"
  - "mbsnbset_l"
  - "_mbsnbset"
  - "_mbsnbset_l"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "tcsnset function"
  - "_tcsnset_l function"
  - "_mbsnbset function"
  - "_tcsnset function"
  - "_mbsnbset_l function"
  - "mbsnbset_l function"
  - "tcsnset_l function"
  - "mbsnbset function"
ms.assetid: 8e46ef75-9a56-42d2-a522-a08450c67c19
caps.latest.revision: 24
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
# _mbsnbset, _mbsnbset_l
Sets the first `n` bytes of a multibyte-character string to a specified character. More secure versions of these functions are available; see [_mbsnbset_s, _mbsnbset_s_l](../../c-runtime-library/reference/mbsnbset-s-mbsnbset-s-l.md).  
  
> [!IMPORTANT]
>  This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported with /ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Syntax  
  
```  
unsigned char *_mbsnbset(  
   unsigned char *str,  
   unsigned int c,  
   size_t count   
);  
unsigned char *_mbsnbset_l(  
   unsigned char *str,  
   unsigned int c,  
   size_t count,  
   _locale_t locale  
);  
```  
  
#### Parameters  
 `str`  
 String to be altered.  
  
 `c`  
 Single-byte or multibyte-character setting.  
  
 `count`  
 Number of bytes to be set.  
  
 `locale`  
 Locale to use.  
  
## Return Value  
 `_mbsnbset` returns a pointer to the altered string.  
  
## Remarks  
 The `_mbsnbset` and `_mbsnbset_l` functions set, at most, the first `count` bytes of `str` to `c`. If `count` is greater than the length of `str`, the length of `str` is used instead of `count`. If `c` is a multibyte character and cannot be set entirely into the last byte specified by `count`, the last byte is padded with a blank character. `_mbsnbset` and `_mbsnbset_l`does not place a terminating null at the end of `str`.  
  
 `_mbsnbset` and `_mbsnbset_l`is similar to `_mbsnset`, except that it sets `count` bytes rather than `count` characters of `c`.  
  
 If `str` is `NULL` or `count` is zero, this function generates an invalid parameter exception as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, `errno` is set to `EINVAL` and the function returns `NULL`. Also, if `c` is not a valid multibyte character, `errno` is set to `EINVAL` and a space is used instead.  
  
 The output value is affected by the setting of the `LC_CTYPE` category setting of the locale; see [setlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md) for more information. The `_mbsnbset` version of this function uses the current locale for this locale-dependent behavior; the `_mbsnbset_l` version is identical except that it use the locale parameter passed in instead. For more information, see [Locale](../../c-runtime-library/locale.md).  
  
 **Security Note** This API incurs a potential threat brought about by a buffer overrun problem. Buffer overrun problems are a frequent method of system attack, resulting in an unwarranted elevation of privilege. For more information, see [Avoiding Buffer Overruns](http://msdn.microsoft.com/library/windows/desktop/ms717795).  
  
### Generic-Text Routine Mappings  
  
|Tchar.h routine|_UNICODE and _MBCS not defined|_MBCS defined|_UNICODE defined|  
|---------------------|--------------------------------------|--------------------|-----------------------|  
|`_tcsnset`|`_strnset`|`_mbsnbset`|`_wcsnset`|  
|`_tcsnset_l`|`_strnset_l`|`_mbsnbset_l`|`_wcsnset_l`|  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_mbsnbset`|\<mbstring.h>|  
|`_mbsnbset_l`|\<mbstring.h>|  
  
 For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).  
  
## Example  
  
```  
// crt_mbsnbset.c  
// compile with: /W3  
#include <mbstring.h>  
#include <stdio.h>  
  
int main( void )  
{  
   char string[15] = "This is a test";  
   /* Set not more than 4 bytes of string to be *'s */  
   printf( "Before: %s\n", string );  
   _mbsnbset( string, '*', 4 ); // C4996  
   // Note; _mbsnbset is deprecated; consider _mbsnbset_s  
   printf( "After:  %s\n", string );  
}  
```  
  
## Output  
  
```  
Before: This is a test  
After:  **** is a test  
```  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).  
  
## See Also  
 [String Manipulation](../../c-runtime-library/string-manipulation-crt.md)   
 [_mbsnbcat, _mbsnbcat_l](../../c-runtime-library/reference/mbsnbcat-mbsnbcat-l.md)   
 [_strnset, _strnset_l, _wcsnset, _wcsnset_l, _mbsnset, _mbsnset_l](../../c-runtime-library/reference/strnset-strnset-l-wcsnset-wcsnset-l-mbsnset-mbsnset-l.md)   
 [_strset, _strset_l, _wcsset, _wcsset_l, _mbsset, _mbsset_l](../../c-runtime-library/reference/strset-strset-l-wcsset-wcsset-l-mbsset-mbsset-l.md)