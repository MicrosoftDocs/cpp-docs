---
title: "_strnset_s, _strnset_s_l, _wcsnset_s, _wcsnset_s_l, _mbsnset_s, _mbsnset_s_l"
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
  - _mbsnset_s_l
  - _strnset_s
  - _mbsnset_s
  - _strnset_s_l
  - _wcsnset_s_l
  - _wcsnset_s
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
  - api-ms-win-crt-multibyte-l1-1-0.dll
  - api-ms-win-crt-string-l1-1-0.dll
apitype: DLLExport
ms.assetid: 9cf1b321-b5cb-4469-b285-4c07cfbd8813
caps.latest.revision: 25
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
# _strnset_s, _strnset_s_l, _wcsnset_s, _wcsnset_s_l, _mbsnset_s, _mbsnset_s_l
Initializes characters of a string to a given character. These versions of [_strnset, _strnset_l, _wcsnset, _wcsnset_l, _mbsnset, _mbsnset_l](../VS_visualcpp/_strnset--_strnset_l--_wcsnset--_wcsnset_l--_mbsnset--_mbsnset_l.md) have security enhancements, as described in [Security Features in the CRT](../VS_visualcpp/Security-Features-in-the-CRT.md).  
  
> [!IMPORTANT]
>  `_mbsnset_s` and `_mbsnset_s_l` cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported with /ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Syntax  
  
```  
errno_t _strnset_s(  
   char *str,  
   size_t numberOfElements,  
   int c,  
   size_t count   
);  
errno_t _strnset_s_l(  
   char *str,  
   size_t numberOfElements,  
   int c,  
   size_t count,  
   locale_t locale  
);  
errno_t _wcsnset_s(  
   wchar_t *str,  
   size_t numberOfElements,  
   wchar_t c,  
   size_t count   
);  
errno_t _wcsnset_s_l(  
   wchar_t *str,  
   size_t numberOfElements,  
   wchar_t c,  
   size_t count,  
   _locale_t locale  
);  
errno_t _mbsnset_s(  
   unsigned char *str,  
   size_t numberOfElements,  
   unsigned int c,  
   size_t count   
);  
errno_t _mbsnset_s_l(  
   unsigned char *str,  
   size_t numberOfElements,  
   unsigned int c,  
   size_t count,  
   _locale_t locale  
);  
```  
  
#### Parameters  
 `str`  
 String to be altered.  
  
 `numberOfElements`  
 The size of the `str` buffer.  
  
 `c`  
 Character setting.  
  
 `count`  
 Number of characters to be set.  
  
 `locale`  
 Locale to use.  
  
## Return Value  
 Zero if successful, otherwise an error code.  
  
 These functions validate their arguments. If `str` is not a valid null-terminated string or the size argument is less than or equal to 0, then the invalid parameter handler is invoked, as described in [Parameter Validation](../VS_visualcpp/Parameter-Validation.md). If execution is allowed to continue, these functions return an error code and set `errno` to that error code. The default error code is `EINVAL` if a more specific value does not apply.  
  
## Remarks  
 These functions set, at most, the first `count` characters of `str` to `c`. If `count` is greater than the size of `str`, the size of `str` is used instead of `count`. An error occurs if `count` is greater than `numberOfElements` and both those parameters are greater than the size of `str`.  
  
 `_wcsnset_s` and `_mbsnset_s` are wide-character and multibyte-character versions of `_strnset_s`. The string argument of `_wcsnset_s` is a wide-character string; that of `_mbsnset_s` is amultibyte-character string. These three functions behave identically otherwise.  
  
 The output value is affected by the setting of the `LC_CTYPE` category setting of the locale; see [setlocale](../VS_visualcpp/setlocale--_wsetlocale.md) for more information. The versions of these functions without the `_l` suffix use the current locale for this locale-dependent behavior; the versions with the`_l` suffix are identical except that they use the locale parameter passed in instead. For more information, see [Locale](../VS_visualcpp/Locale.md).  
  
 The debug versions of these functions first fill the buffer with 0xFD. To disable this behavior, use [_CrtSetDebugFillThreshold](../VS_visualcpp/_CrtSetDebugFillThreshold.md).  
  
### Generic-Text Routine Mappings  
  
|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_tcsnset_s`|`_strnset_s`|`_mbsnbset_s`|`_wcsnset_s`|  
|`_tcsnset_s_l`|`_strnset_s_l`|`_mbsnbset_s_l`|`_wcsnset_s_l`|  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_strnset_s`|<string.h>|  
|`_strnset_s_l`|<tchar.h>|  
|`_wcsnset_s`|<string.h> or <wchar.h>|  
|`_wcsnset_s_l`|<tchar.h>|  
|`_mbsnset_s`, `_mbsnset_s_l`|<mbstring.h>|  
  
 For additional compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md).  
  
## Example  
  
```  
// crt_strnset_s.c  
#include <string.h>  
#include <stdio.h>  
  
int main( void )  
{  
   char string[15] = "This is a test";  
   /* Set not more than 4 characters of string to be *'s */  
   printf( "Before: %s\n", string );  
   _strnset_s( string, sizeof(string), '*', 4 );  
   printf( "After:  %s\n", string );  
}  
```  
  
 **Before: This is a test**  
**After:  \*\*\*\* is a test**   
## .NET Framework Equivalent  
 [System::String::Replace](https://msdn.microsoft.com/en-us/library/system.string.replace.aspx)  
  
## See Also  
 [String Manipulation](../VS_visualcpp/String-Manipulation--CRT-.md)   
 [Locale](../VS_visualcpp/Locale.md)   
 [Interpretation of Multibyte-Character Sequences](../VS_visualcpp/Interpretation-of-Multibyte-Character-Sequences.md)   
 [strcat, wcscat, _mbscat](../VS_visualcpp/strcat--wcscat--_mbscat.md)   
 [strcmp, wcscmp, _mbscmp](../VS_visualcpp/strcmp--wcscmp--_mbscmp.md)   
 [strcpy, wcscpy, _mbscpy](../VS_visualcpp/strcpy--wcscpy--_mbscpy.md)   
 [_strset, _strset_l, _wcsset, _wcsset_l, _mbsset, _mbsset_l](../VS_visualcpp/_strset--_strset_l--_wcsset--_wcsset_l--_mbsset--_mbsset_l.md)