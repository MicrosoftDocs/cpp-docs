---
title: "strspn, wcsspn, _mbsspn, _mbsspn_l"
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
  - _mbsspn_l
  - wcsspn
  - strspn
  - _mbsspn
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
ms.assetid: d077284a-809f-4068-959e-c6d6262677eb
caps.latest.revision: 20
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
# strspn, wcsspn, _mbsspn, _mbsspn_l
Returns the index of the first character, in a string, that does not belong to a set of characters.  
  
> [!IMPORTANT]
>  `_mbsspn` and `_mbsspn_l` cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported with /ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Syntax  
  
```  
size_t strspn(  
   const char *str,  
   const char *strCharSet   
);  
size_t wcsspn(  
   const wchar_t *str,  
   const wchar_t *strCharSet   
);  
size_t _mbsspn(  
   const unsigned char *str,  
   const unsigned char *strCharSet   
);  
size_t _mbsspn_l(  
   const unsigned char *str,  
   const unsigned char *strCharSet,  
   _locale_t locale  
);  
```  
  
#### Parameters  
 `str`  
 Null-terminated string to search.  
  
 `strCharSet`  
 Null-terminated character set.  
  
 `locale`  
 Locale to use.  
  
## Return Value  
 Returns an integer value specifying the length of the substring in `str` that consists entirely of characters in `strCharSet`*.* If `str` begins with a character not in `strCharSet`*,* the function returns 0.  
  
## Remarks  
 The `strspn` function returns the index of the first character in `str` that does not belong to the set of characters in `strCharSet`. The search does not include terminating null characters.  
  
 `wcsspn` and `_mbsspn` are wide-character and multibyte-character versions of `strspn`**.** The arguments of `wcsspn` are wide-character strings; those of `_mbsspn` are multibyte-character strings. `_mbsspn` validates its parameters. If `str` or `strCharSet` is`NULL`, the invalid parameter handler is invoked, as described in [Parameter Validation](../VS_visualcpp/Parameter-Validation.md) . If execution is allowed to continue, `_mbspn` sets `errno` to `EINVAL` and returns 0. `strspn` and `wcsspn` do not validate their parameters. These three functions behave identically otherwise.  
  
 The output value is affected by the setting of the `LC_CTYPE` category setting of the locale; see [setlocale](../VS_visualcpp/setlocale--_wsetlocale.md) for more information. The versions of these functions without the `_l` suffix use the current locale for this locale-dependent behavior; the versions with the `_l` suffix are identical except that they use the locale parameter passed in instead. For more information, see [Locale](../VS_visualcpp/Locale.md).  
  
### Generic-Text Routine Mappings  
  
|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_tcsspn`|`strspn`|`_mbsspn`|`wcsspn`|  
|**n/a**|**n/a**|`_mbsspn_l`|**n/a**|  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`strspn`|<string.h>|  
|`wcsspn`|<string.h> or <wchar.h>|  
|`_mbsspn`, `_mbsspn_l`|<mbstring.h>|  
  
 For additional compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md).  
  
## Example  
  
```  
// crt_strspn.c  
// This program uses strspn to determine  
// the length of the segment in the string "cabbage"  
// consisting of a's, b's, and c's. In other words,  
// it finds the first non-abc letter.  
//  
  
#include <string.h>  
#include <stdio.h>  
  
int main( void )  
{  
   char string[] = "cabbage";  
   int  result;  
   result = strspn( string, "abc" );  
   printf( "The portion of '%s' containing only a, b, or c "  
           "is %d bytes long\n", string, result );  
}  
```  
  
 **The portion of 'cabbage' containing only a, b, or c is 5 bytes long**   
## .NET Framework Equivalent  
 [System::String::Substring](https://msdn.microsoft.com/en-us/library/system.string.substring.aspx)  
  
## See Also  
 [String Manipulation](../VS_visualcpp/String-Manipulation--CRT-.md)   
 [Locale](../VS_visualcpp/Locale.md)   
 [Interpretation of Multibyte-Character Sequences](../VS_visualcpp/Interpretation-of-Multibyte-Character-Sequences.md)   
 [_strspnp, _wcsspnp, _mbsspnp, _mbsspnp_l](../VS_visualcpp/_strspnp--_wcsspnp--_mbsspnp--_mbsspnp_l.md)   
 [strcspn, wcscspn, _mbscspn, _mbscspn_l](../VS_visualcpp/strcspn--wcscspn--_mbscspn--_mbscspn_l.md)   
 [strncat, _strncat_l, wcsncat, _wcsncat_l, _mbsncat, _mbsncat_l](../VS_visualcpp/strncat--_strncat_l--wcsncat--_wcsncat_l--_mbsncat--_mbsncat_l.md)   
 [strncmp, wcsncmp, _mbsncmp, _mbsncmp_l](../VS_visualcpp/strncmp--wcsncmp--_mbsncmp--_mbsncmp_l.md)   
 [strncpy, _strncpy_l, wcsncpy, _wcsncpy_l, _mbsncpy, _mbsncpy_l](../VS_visualcpp/strncpy--_strncpy_l--wcsncpy--_wcsncpy_l--_mbsncpy--_mbsncpy_l.md)   
 [_strnicmp, _wcsnicmp, _mbsnicmp, _strnicmp_l, _wcsnicmp_l, _mbsnicmp_l](../VS_visualcpp/_strnicmp--_wcsnicmp--_mbsnicmp--_strnicmp_l--_wcsnicmp_l--_mbsnicmp_l.md)   
 [strrchr, wcsrchr, _mbsrchr, _mbsrchr_l](../VS_visualcpp/strrchr--wcsrchr--_mbsrchr--_mbsrchr_l.md)