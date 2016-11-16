---
title: "_mbsnbset_s, _mbsnbset_s_l | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_mbsnbset_s_l"
  - "_mbsnbset_s"
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
  - "mbsnbset_s"
  - "_mbsnbset_s_l"
  - "_mbsnbset_s"
  - "mbsnbset_s_l"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "tcsnset_s function"
  - "mbsnbset_s function"
  - "mbsnbset_s_l function"
  - "_mbsnbset_s_l function"
  - "_tcsnset_s_l function"
  - "_mbsnbset_s function"
  - "_tcsnset_s function"
  - "tcsnset_s_l function"
ms.assetid: 811f92c9-cc31-4bbd-8017-2d1bfc6fb96f
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
# _mbsnbset_s, _mbsnbset_s_l
Sets the first `n` bytes of a multibyte-character string to a specified character. These versions of [_mbsnbset, _mbsnbset_l](../../c-runtime-library/reference/mbsnbset-mbsnbset-l.md) have security enhancements, as described in [Security Features in the CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
> [!IMPORTANT]
>  This API cannot be used in applications that execute in the [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)]. For more information, see [CRT functions not supported with /ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Syntax  
  
```  
errno_t _mbsnbset_s(  
   unsigned char *str,  
   size_t size,  
   unsigned int c,  
   size_t count   
);  
errno_t _mbsnbset_s_l(  
   unsigned char *str,  
   size_t size,  
   unsigned int c,  
   size_t count,  
   _locale_t locale  
);  
template <size_t size>  
errno_t _mbsnbset_s(  
   unsigned char (&str)[size],  
   unsigned int c,  
   size_t count   
); // C++ only  
template <size_t size>  
errno_t _mbsnbset_s_l(  
   unsigned char (&str)[size],  
   unsigned int c,  
   size_t count,  
   _locale_t locale  
); // C++ only  
```  
  
#### Parameters  
 `str`  
 String to be altered.  
  
 `size`  
 The size of the string buffer.  
  
 `c`  
 Single-byte or multibyte-character setting.  
  
 `count`  
 Number of bytes to be set.  
  
 `locale`  
 Locale to use.  
  
## Return Value  
 Zero if successful; otherwise, an error code.  
  
## Remarks  
 The `_mbsnbset_s` and `_mbsnbset_s_l` functions set, at most, the first `count` bytes of `str` to `c`. If `count` is greater than the length of `str`, the length of `str` is used instead of `count`. If `c` is a multibyte character and cannot be set entirely into the last byte that's specified by `count`, the last byte is padded with a blank character. `_mbsnbset_s` and `_mbsnbset_s_l` do not place a terminating null at the end of `str`.  
  
 `_mbsnbset_s` and `_mbsnbset_s_l` resemble `_mbsnset`, except that they set `count` bytes rather than `count` characters of `c`.  
  
 If `str` is `NULL` or `count` is zero, this function generates an invalid parameter exception, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, `errno` is set to `EINVAL` and the function returns `NULL`. Also, if `c` is not a valid multibyte character, `errno` is set to `EINVAL` and a space is used instead.  
  
 The output value is affected by the setting of the `LC_CTYPE` category setting of the locale; see [setlocale, _wsetlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md) for more information. The `_mbsnbset_s` version of this function uses the current locale for this locale-dependent behavior; the `_mbsnbset_s_l` version is identical except that it instead uses the locale parameter that's passed in. For more information, see [Locale](../../c-runtime-library/locale.md).  
  
 In C++, use of these functions is simplified by template overloads; the overloads can infer buffer length automatically and thereby eliminate the need to specify a size argument. For more information, see [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).  
  
 The debug versions of these functions first fill the buffer with 0xFD. To disable this behavior, use [_CrtSetDebugFillThreshold](../../c-runtime-library/reference/crtsetdebugfillthreshold.md).  
  
### Generic-Text Routine Mappings  
  
|Tchar.h routine|_UNICODE and _MBCS not defined|_MBCS defined|_UNICODE defined|  
|---------------------|--------------------------------------|--------------------|-----------------------|  
|`_tcsnset_s`|`_strnset_s`|`_mbsnbset_s`|`_wcsnset_s`|  
|`_tcsnset_s_l`|`_strnset_s _l`|`_mbsnbset_s_l`|`_wcsnset_s_l`|  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_mbsnbset_s`|\<mbstring.h>|  
|`_mbsnbset_s_l`|\<mbstring.h>|  
  
 For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).  
  
## Example  
  
```  
// crt_mbsnbset_s.c  
#include <mbstring.h>  
#include <stdio.h>  
  
int main( void )  
{  
   char string[15] = "This is a test";  
   /* Set not more than 4 bytes of string to be *'s */  
   printf( "Before: %s\n", string );  
   _mbsnbset_s( string, sizeof(string), '*', 4 );  
   printf( "After:  %s\n", string );  
}  
```  
  
## Output  
  
```Output  
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