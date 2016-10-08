---
title: "strcoll, wcscoll, _mbscoll, _strcoll_l, _wcscoll_l, _mbscoll_l"
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
  - wcscoll
  - _mbscoll
  - _mbscoll_l
  - strcoll
  - _strcoll_l
  - _wcscoll_l
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
ms.assetid: 900a7540-c7ec-4c2f-b292-7a85f63e3fe8
caps.latest.revision: 20
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# strcoll, wcscoll, _mbscoll, _strcoll_l, _wcscoll_l, _mbscoll_l
Compares strings by using the current locale or a specified LC_COLLATE conversion-state category.  
  
> [!IMPORTANT]
>  `_mbscoll` and `_mbscoll_l` cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported with /ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Syntax  
  
```  
int strcoll(  
   const char *string1,  
   const char *string2   
);  
int wcscoll(  
   const wchar_t *string1,  
   const wchar_t *string2   
);  
int _mbscoll(  
   const unsigned char *string1,  
   const unsigned char *string2   
);  
int _strcoll_l(  
   const char *string1,  
   const char *string2,  
   _locale_t locale   
);  
int wcscoll_l(  
   const wchar_t *string1,  
   const wchar_t *string2,  
   _locale_t locale   
);  
int _mbscoll_l(  
   const unsigned char *string1,  
   const unsigned char *string2,  
   _locale_t locale   
);  
```  
  
#### Parameters  
 `string1`, `string2`  
 Null-terminated strings to compare.  
  
 `locale`  
 Locale to use.  
  
## Return Value  
 Each of these functions returns a value indicating the relationship of `string1` to `string2`*,* as follows.  
  
|Return value|Relationship of string1 to string2|  
|------------------|----------------------------------------|  
|< 0|`string1` less than `string2`|  
|0|`string1` identical to `string2`|  
|> 0|`string1` greater than `string2`|  
  
 Each of these functions returns `_NLSCMPERROR` on an error. To use `_NLSCMPERROR`, include either STRING.H or MBSTRING.H. `wcscoll` can fail if either `string1` or `string2` is NULL or contains wide-character codes outside the domain of the collating sequence. When an error occurs, `wcscoll` may set `errno` to `EINVAL`. To check for an error on a call to `wcscoll`, set `errno` to 0 and then check `errno` after calling `wcscoll`.  
  
## Remarks  
 Each of these functions performs a case-sensitive comparison of `string1` and `string2` according to the code page currently in use. These functions should be used only when there is a difference between the character set order and the lexicographic character order in the current code page and this difference is of interest for the string comparison.  
  
 All of these functions validate their parameters. If either `string1` or `string2` is a null pointer, or if `count` is greater than `INT_MAX`, the invalid parameter handler is invoked, as described in [Parameter Validation](../VS_visualcpp/Parameter-Validation.md) . If execution is allowed to continue, these functions return `_NLSCMPERROR` and set `errno` to `EINVAL`.  
  
 The comparison of the two strings is a locale-dependent operation since each locale has different rules for ordering characters. The versions of these functions without the `_l` suffix use the current thread's locale for this locale-dependent behavior; the versions with the `_l` suffix are identical to the corresponding function without the suffix except that they use the locale passed in as a parameter instead of the current locale. For more information, see [Locale](../VS_visualcpp/Locale.md).  
  
### Generic-Text Routine Mappings  
  
|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_tcscoll`|`strcoll`|`_mbscoll`|`wcscoll`|  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`strcoll`|<string.h>|  
|`wcscoll`|<wchar.h>, <string.h>|  
|`_mbscoll`, `_mbscoll_l`|<mbstring.h>|  
|`_strcoll_l`|<string.h>|  
|`_wcscoll_l`|<wchar.h>, <string.h>|  
  
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