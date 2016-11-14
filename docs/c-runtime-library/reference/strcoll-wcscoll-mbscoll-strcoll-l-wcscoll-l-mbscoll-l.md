---
title: "strcoll, wcscoll, _mbscoll, _strcoll_l, _wcscoll_l, _mbscoll_l | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "wcscoll"
  - "_mbscoll"
  - "_mbscoll_l"
  - "strcoll"
  - "_strcoll_l"
  - "_wcscoll_l"
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
  - "api-ms-win-crt-string-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "wcscoll"
  - "_mbscoll"
  - "_tcscoll"
  - "_ftcscoll"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "code pages, using for string comparisons"
  - "mbscoll function"
  - "wcscoll_l function"
  - "ftcscoll function"
  - "wcscoll function"
  - "_strcoll_l function"
  - "tcscoll function"
  - "_ftcscoll function"
  - "_tcscoll function"
  - "_wcscoll_l function"
  - "_mbscoll function"
  - "strcoll_l function"
  - "strcoll functions"
  - "strings [C++], comparing by code page"
ms.assetid: 900a7540-c7ec-4c2f-b292-7a85f63e3fe8
caps.latest.revision: 20
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
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
  
 All of these functions validate their parameters. If either `string1` or `string2` is a null pointer, or if `count` is greater than `INT_MAX`, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md) . If execution is allowed to continue, these functions return `_NLSCMPERROR` and set `errno` to `EINVAL`.  
  
 The comparison of the two strings is a locale-dependent operation since each locale has different rules for ordering characters. The versions of these functions without the `_l` suffix use the current thread's locale for this locale-dependent behavior; the versions with the `_l` suffix are identical to the corresponding function without the suffix except that they use the locale passed in as a parameter instead of the current locale. For more information, see [Locale](../../c-runtime-library/locale.md).  
  
### Generic-Text Routine Mappings  
  
|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_tcscoll`|`strcoll`|`_mbscoll`|`wcscoll`|  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`strcoll`|\<string.h>|  
|`wcscoll`|\<wchar.h>, \<string.h>|  
|`_mbscoll`, `_mbscoll_l`|\<mbstring.h>|  
|`_strcoll_l`|\<string.h>|  
|`_wcscoll_l`|\<wchar.h>, \<string.h>|  
  
 For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).  
  
## .NET Framework Equivalent  
 [System::String::Compare](https://msdn.microsoft.com/en-us/library/system.string.compare.aspx)  
  
## See Also  
 [Locale](../../c-runtime-library/locale.md)   
 [String Manipulation](../../c-runtime-library/string-manipulation-crt.md)   
 [strcoll Functions](../../c-runtime-library/strcoll-functions.md)   
 [localeconv](../../c-runtime-library/reference/localeconv.md)   
 [_mbsnbcoll, _mbsnbcoll_l, _mbsnbicoll, _mbsnbicoll_l](../../c-runtime-library/reference/mbsnbcoll-mbsnbcoll-l-mbsnbicoll-mbsnbicoll-l.md)   
 [setlocale, _wsetlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md)   
 [strcmp, wcscmp, _mbscmp](../../c-runtime-library/reference/strcmp-wcscmp-mbscmp.md)   
 [_stricmp, _wcsicmp, _mbsicmp, _stricmp_l, _wcsicmp_l, _mbsicmp_l](../../c-runtime-library/reference/stricmp-wcsicmp-mbsicmp-stricmp-l-wcsicmp-l-mbsicmp-l.md)   
 [strncmp, wcsncmp, _mbsncmp, _mbsncmp_l](../../c-runtime-library/reference/strncmp-wcsncmp-mbsncmp-mbsncmp-l.md)   
 [_strnicmp, _wcsnicmp, _mbsnicmp, _strnicmp_l, _wcsnicmp_l, _mbsnicmp_l](../../c-runtime-library/reference/strnicmp-wcsnicmp-mbsnicmp-strnicmp-l-wcsnicmp-l-mbsnicmp-l.md)   
 [strxfrm, wcsxfrm, _strxfrm_l, _wcsxfrm_l](../../c-runtime-library/reference/strxfrm-wcsxfrm-strxfrm-l-wcsxfrm-l.md)