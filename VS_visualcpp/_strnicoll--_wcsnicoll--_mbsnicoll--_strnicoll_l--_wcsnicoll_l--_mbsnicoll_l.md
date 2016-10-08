---
title: "_strnicoll, _wcsnicoll, _mbsnicoll, _strnicoll_l, _wcsnicoll_l, _mbsnicoll_l"
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
  - _mbsnicoll_l
  - _mbsnicoll
  - _wcsnicoll_l
  - _strnicoll
  - _strnicoll_l
  - _wcsnicoll
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
ms.assetid: abf0c569-725b-428d-9ff2-924f430104b4
caps.latest.revision: 21
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
# _strnicoll, _wcsnicoll, _mbsnicoll, _strnicoll_l, _wcsnicoll_l, _mbsnicoll_l
Compares strings by using locale-specific information.  
  
> [!IMPORTANT]
>  `_mbsnicoll` and `_mbsnicoll_l` cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported with /ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Syntax  
  
```  
int _strnicoll(  
   const char *string1,  
   const char *string2,  
   size_t count   
);  
int _wcsnicoll(  
   const wchar_t *string1,  
   const wchar_t *string2 ,  
   size_t count   
);  
int _mbsnicoll(  
   const unsigned char *string1,  
   const unsigned char *string2,  
   size_t count   
);  
int _strnicoll_l(  
   const char *string1,  
   const char *string2,  
   size_t count,  
   _locale_t locale  
);  
int _wcsnicoll_l(  
   const wchar_t *string1,  
   const wchar_t *string2 ,  
   size_t count,  
   _locale_t locale  
);  
int _mbsnicoll_l(  
   const unsigned char *string1,  
   const unsigned char *string2,  
   size_t count,  
   _locale_t locale  
);  
```  
  
#### Parameters  
 `string1, string2`  
 Null-terminated strings to compare  
  
 `count`  
 Number of characters to compare  
  
 `locale`  
 The locale to use.  
  
## Return Value  
 Each of these functions returns a value indicating the relationship of the substrings of `string1` and `string2`*,* as follows.  
  
|Return value|Relationship of string1 to string2|  
|------------------|----------------------------------------|  
|< 0|`string1` less than `string2`|  
|0|`string1` identical to `string2`|  
|> 0|`string1` greater than `string2`|  
  
 Each of these functions returns `_NLSCMPERROR`. To use `_NLSCMPERROR`, include either STRING.H or MBSTRING.H. `_wcsnicoll` can fail if either `string1` or `string2` contains wide-character codes outside the domain of the collating sequence. When an error occurs, `_wcsnicoll` may set `errno` to `EINVAL`. To check for an error on a call to `_wcsnicoll`, set `errno` to 0 and then check `errno` after calling `_wcsnicoll`**.**  
  
## Remarks  
 Each of these functions performs a case-insensitive comparison of the first `count` characters in `string1` and `string2` according to the code page. These functions should be used only when there is a difference between the character set order and the lexicographic character order in the code page and this difference is of interest for the string comparison. The versions of these functions without the `_l` suffix use the current locale and code page. The versions with the`_l` suffix are identical except that they use the locale passed in instead. For more information, see [Locale](../VS_visualcpp/Locale.md).  
  
 All of these functions validate their parameters. If either `string1` or `string2` is a null pointer, or if count is greater than `INT_MAX`, the invalid parameter handler is invoked, as described in [Parameter Validation](../VS_visualcpp/Parameter-Validation.md) . If execution is allowed to continue, these functions return `_NLSCMPERROR` and set `errno` to `EINVAL`**.**  
  
### Generic-Text Routine Mappings  
  
|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_tcsncicoll`|`_strnicoll`|`_mbsnbicoll`|`_wcsnicoll`|  
|`_tcsnicoll`|`_strnicoll`|[_mbsnbicoll](../VS_visualcpp/_mbsnbcoll--_mbsnbcoll_l--_mbsnbicoll--_mbsnbicoll_l.md)|`_wcsnicoll`|  
|`_tcsnicoll_l`|`_strnicoll_l`|`_mbsnbicoll_l`|`_wcsnicoll_l`|  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_strnicoll`, `_strnicoll_l`|<string.h>|  
|`_wcsnicoll`, `_wcsnicoll_l`|<wchar.h> or <string.h>|  
|`_mbsnicoll`, `_mbsnicoll_l`|<mbstring.h>|  
  
 For additional compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md).  
  
## .NET Framework Equivalent  
 [System::String::Compare](https://msdn.microsoft.com/en-us/library/system.string.compare.aspx)  
  
## See Also  
 [Locale](../VS_visualcpp/Locale.md)   
 [String Manipulation](../VS_visualcpp/String-Manipulation--CRT-.md)   
 [strcoll Functions](../VS_visualcpp/strcoll-Functions.md)   
 [localeconv](../VS_visualcpp/localeconv.md)   
 [_mbsnbcoll, _mbsnbcoll_l, _mbsnbicoll, _mbsnbicoll_l](../VS_visualcpp/_mbsnbcoll--_mbsnbcoll_l--_mbsnbicoll--_mbsnbicoll_l.md)   
 [setlocale, _wsetlocale](../VS_visualcpp/setlocale--_wsetlocale.md)   
 [strcmp, wcscmp, _mbscmp](../VS_visualcpp/strcmp--wcscmp--_mbscmp.md)   
 [_stricmp, _wcsicmp, _mbsicmp, _stricmp_l, _wcsicmp_l, _mbsicmp_l](../VS_visualcpp/_stricmp--_wcsicmp--_mbsicmp--_stricmp_l--_wcsicmp_l--_mbsicmp_l.md)   
 [strncmp, wcsncmp, _mbsncmp, _mbsncmp_l](../VS_visualcpp/strncmp--wcsncmp--_mbsncmp--_mbsncmp_l.md)   
 [_strnicmp, _wcsnicmp, _mbsnicmp, _strnicmp_l, _wcsnicmp_l, _mbsnicmp_l](../VS_visualcpp/_strnicmp--_wcsnicmp--_mbsnicmp--_strnicmp_l--_wcsnicmp_l--_mbsnicmp_l.md)   
 [strxfrm, wcsxfrm, _strxfrm_l, _wcsxfrm_l](../VS_visualcpp/strxfrm--wcsxfrm--_strxfrm_l--_wcsxfrm_l.md)