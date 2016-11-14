---
title: "_strnicmp, _wcsnicmp, _mbsnicmp, _strnicmp_l, _wcsnicmp_l, _mbsnicmp_l | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_wcsnicmp"
  - "_strnicmp_l"
  - "_wcsnicmp_l"
  - "_strnicmp"
  - "_mbsnicmp"
  - "_mbsnicmp_l"
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
  - "wcsnicmp_l"
  - "_strnicmp"
  - "_ftcsnicmp"
  - "mbsnicmp_l"
  - "_ftcsncicmp"
  - "mbsnicmp"
  - "_tcsncicmp"
  - "_mbsnicmp"
  - "_tcsnicmp"
  - "strnicmp_l"
  - "_wcsnicmp"
  - "_wcsnicmp_l"
  - "CORECRT_WSTRING/_wcsnicmp"
  - "CORECRT_WSTRING/_wcsnicmp_l"
  - "string/_strnicmp"
  - "string/_strnicmp_l"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "tcsnicmp function"
  - "_tcsncicmp function"
  - "_mbsnicmp_l function"
  - "mbsnicmp_l function"
  - "wcsnicmp_l function"
  - "wcsnicmp function"
  - "string comparison [C++], lowercase"
  - "ftcsnicmp function"
  - "strnicmp_l function"
  - "strncmp function"
  - "_strnicmp function"
  - "strings [C++], comparing characters of"
  - "_wcsnicmp_l function"
  - "tcsncicmp function"
  - "string comparison [C++], strncmp function"
  - "_mbsnicmp function"
  - "ftcsncicmp function"
  - "_tcsnicmp function"
  - "_ftcsncicmp function"
  - "_strnicmp_l function"
  - "_ftcsnicmp function"
  - "characters [C++], comparing"
  - "mbsnicmp function"
  - "_wcsnicmp function"
ms.assetid: df6e5037-4039-4c85-a0a6-21d4ef513966
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
# _strnicmp, _wcsnicmp, _mbsnicmp, _strnicmp_l, _wcsnicmp_l, _mbsnicmp_l
Compares the specified number of characters of two strings without regard to case.  
  
> [!IMPORTANT]
>  `_mbsnicmp` and `_mbsnicmp_l` cannot be used in applications that execute in the [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)]. For more information, see [CRT functions not supported with /ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Syntax  
  
```  
int _strnicmp(  
   const char *string1,  
   const char *string2,  
   size_t count   
);  
int _wcsnicmp(  
   const wchar_t *string1,  
   const wchar_t *string2,  
   size_t count   
);  
int _mbsnicmp(  
   const unsigned char *string1,  
   const unsigned char *string2,  
   size_t count   
);  
int _strnicmp_l(  
   const char *string1,  
   const char *string2,  
   size_t count,  
   _locale_t locale  
);  
int _wcsnicmp_l(  
   const wchar_t *string1,  
   const wchar_t *string2,  
   size_t count,  
   _locale_t locale  
);  
int _mbsnicmp_l(  
   const unsigned char *string1,  
   const unsigned char *string2,  
   size_t count,  
   _locale_t locale  
);  
```  
  
#### Parameters  
 `string1, string2`  
 Null-terminated strings to compare.  
  
 `count`  
 Number of characters to compare.  
  
 `locale`  
 Locale to use.  
  
## Return Value  
 Indicates the relationship between the substrings, as follows.  
  
|Return value|Description|  
|------------------|-----------------|  
|< 0|`string1` substring is less than `string2` substring.|  
|0|`string1` substring is identical to `string2` substring.|  
|> 0|`string1` substring is greater than `string2` substring.|  
  
 On a parameter validation error, these functions return `_NLSCMPERROR`, which is defined in \<string.h> and \<mbstring.h>.  
  
## Remarks  
 The `_strnicmp` function ordinally compares, at most, the first `count` characters of `string1` and `string2`. The comparison is performed without regard to case by converting each character to lowercase. `_strnicmp` is a case-insensitive version of `strncmp`. The comparison ends if a terminating null character is reached in either string before `count` characters are compared. If the strings are equal when a terminating null character is reached in either string before `count` characters are compared, the shorter string is lesser.  
  
 The characters from 91 to 96 in the ASCII table ('[', '\\', ']', '^', '_', and '\`') evaluate as less than any alphabetic character. This ordering is identical to that of `stricmp`.  
  
 `_wcsnicmp` and `_mbsnicmp` are wide-character and multibyte-character versions of `_strnicmp`. The arguments of `_wcsnicmp` are wide-character strings; those of `_mbsnicmp` are multibyte-character strings. `_mbsnicmp` recognizes multibyte-character sequences according to the current multibyte code page and returns `_NLSCMPERROR` on an error. For more information, see [Code Pages](../../c-runtime-library/code-pages.md). These three functions behave identically otherwise. These functions are affected by the locale setting—the versions that don't have the `_l` suffix use the current locale for their locale-dependent behavior; the versions that do have the `_l` suffix instead use the `locale` that's passed in. For more information, see [Locale](../../c-runtime-library/locale.md).  
  
 All of these functions validate their parameters. If either `string1` or `string2` is a null pointer, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, these functions return `_NLSCMPERROR` and set `errno` to `EINVAL`.  
  
### Generic-Text Routine Mappings  
  
|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_tcsncicmp`|`_strnicmp`|`_mbsnicmp`|`_wcsnicmp`|  
|`_tcsnicmp`|`_strnicmp`|`_mbsnbicmp`|`_wcsnicmp`|  
|`_tcsncicmp_l`|`_strnicmp_l`|`_mbsnicmp_l`|`_wcsnicmp_l`|  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_strnicmp`, `_strnicmp_l`|<string.h>|  
|`_wcsnicmp`, `_wcsnicmp_l`|<string.h> or <wchar.h>|  
|`_mbsnicmp`, `_mbsnicmp_l`|\<mbstring.h>|  
  
 For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).  
  
## Example  
 See the example for [strncmp](../../c-runtime-library/reference/strncmp-wcsncmp-mbsncmp-mbsncmp-l.md).  
  
## .NET Framework Equivalent  
 [System::String::Compare](https://msdn.microsoft.com/en-us/library/system.string.compare.aspx)  
  
## See Also  
 [String Manipulation](../../c-runtime-library/string-manipulation-crt.md)   
 [strcat, wcscat, _mbscat](../../c-runtime-library/reference/strcat-wcscat-mbscat.md)   
 [strcmp, wcscmp, _mbscmp](../../c-runtime-library/reference/strcmp-wcscmp-mbscmp.md)   
 [strcpy, wcscpy, _mbscpy](../../c-runtime-library/reference/strcpy-wcscpy-mbscpy.md)   
 [strncat, _strncat_l, wcsncat, _wcsncat_l, _mbsncat, _mbsncat_l](../../c-runtime-library/reference/strncat-strncat-l-wcsncat-wcsncat-l-mbsncat-mbsncat-l.md)   
 [strncmp, wcsncmp, _mbsncmp, _mbsncmp_l](../../c-runtime-library/reference/strncmp-wcsncmp-mbsncmp-mbsncmp-l.md)   
 [strncpy, _strncpy_l, wcsncpy, _wcsncpy_l, _mbsncpy, _mbsncpy_l](../../c-runtime-library/reference/strncpy-strncpy-l-wcsncpy-wcsncpy-l-mbsncpy-mbsncpy-l.md)   
 [strrchr, wcsrchr, _mbsrchr, _mbsrchr_l](../../c-runtime-library/reference/strrchr-wcsrchr-mbsrchr-mbsrchr-l.md)   
 [_strset, _strset_l, _wcsset, _wcsset_l, _mbsset, _mbsset_l](../../c-runtime-library/reference/strset-strset-l-wcsset-wcsset-l-mbsset-mbsset-l.md)   
 [strspn, wcsspn, _mbsspn, _mbsspn_l](../../c-runtime-library/reference/strspn-wcsspn-mbsspn-mbsspn-l.md)