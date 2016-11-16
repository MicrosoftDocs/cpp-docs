---
title: "strxfrm, wcsxfrm, _strxfrm_l, _wcsxfrm_l | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "strxfrm"
  - "_wcsxfrm_l"
  - "_strxfrm_l"
  - "wcsxfrm"
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
  - "api-ms-win-crt-string-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "strxfrm"
  - "_tcsxfrm"
  - "wcsxfrm"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "strxfrm_l function"
  - "_tcsxfrm function"
  - "_strxfrm_l function"
  - "strxfrm function"
  - "wcsxfrm_l function"
  - "wcsxfrm function"
  - "string comparison [C++], transforming strings"
  - "tcsxfrm function"
  - "strings [C++], comparing locale"
  - "_wcsxfrm_l function"
ms.assetid: 6ba8e1f6-4484-49aa-83b8-bc2373187d9e
caps.latest.revision: 18
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
# strxfrm, wcsxfrm, _strxfrm_l, _wcsxfrm_l
Transform a string based on locale-specific information.  
  
## Syntax  
  
```  
size_t strxfrm(  
   char *strDest,  
   const char *strSource,  
   size_t count   
);  
size_t wcsxfrm(  
   wchar_t *strDest,  
   const wchar_t *strSource,  
   size_t count   
);  
size_t _strxfrm_l(  
   char *strDest,  
   const char *strSource,  
   size_t count,  
   _locale_t locale  
);  
size_t wcsxfrm_l(  
   wchar_t *strDest,  
   const wchar_t *strSource,  
   size_t count,  
   _locale_t locale  
);  
```  
  
#### Parameters  
 `strDest`  
 Destination string.  
  
 `strSource`  
 Source string.  
  
 `count`  
 Maximum number of characters to place in `strDest`*.*  
  
 `locale`  
 The locale to use.  
  
## Return Value  
 Returns the length of the transformed string, not counting the terminating null character. If the return value is greater than or equal to `count`, the content of `strDest` is unpredictable. On an error, each function sets `errno` and returns `INT_MAX`. For an invalid character, `errno` is set to `EILSEQ`.  
  
## Remarks  
 The `strxfrm` function transforms the string pointed to by `strSource` into a new collated form that is stored in `strDest`. No more than `count` characters, including the null character, are transformed and placed into the resulting string. The transformation is made using the locale's `LC_COLLATE` category setting. For more information on `LC_COLLATE`, see [setlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md). `strxfrm` uses the current locale for its locale-dependent behavior; `_strxfrm_l` is identical except that it uses the locale passed in instead of the current locale. For more information, see [Locale](../../c-runtime-library/locale.md).  
  
 After the transformation, a call to `strcmp` with the two transformed strings yields results identical to those of a call to `strcoll` applied to the original two strings. As with `strcoll` and `stricoll`, `strxfrm` automatically handles multibyte-character strings as appropriate.  
  
 `wcsxfrm` is a wide-character version of `strxfrm`; the string arguments of `wcsxfrm` are wide-character pointers. For `wcsxfrm`, after the string transformation, a call to `wcscmp` with the two transformed strings yields results identical to those of a call to `wcscoll` applied to the original two strings. `wcsxfrm` and `strxfrm` behave identically otherwise. `wcsxfrm` uses the current locale for its locale-dependent behavior; `_wcsxfrm_l` uses the locale passed in instead of the current locale.  
  
 These functions validate their parameters. If `strSource` is a null pointer, or `strDest` is a NULL pointer (unless count is zero), or if `count` is greater than `INT_MAX`, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md) . If execution is allowed to continue, these functions set `errno` to `EINVAL` and return `INT_MAX`.  
  
### Generic-Text Routine Mappings  
  
|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_tcsxfrm`|`strxfrm`|`strxfrm`|`wcsxfrm`|  
|`_tcsxfrm_l`|`_strxfrm_l`|`_strxfrm_l`|`_wcsxfrm_l`|  
  
 In the "C" locale, the order of the characters in the character set (ASCII character set) is the same as the lexicographic order of the characters. However, in other locales, the order of characters in the character set may differ from the lexicographic character order. For example, in certain European locales, the character 'a' (value 0x61) precedes the character '&\#x00E4;' (value 0xE4) in the character set, but the character 'ä' precedes the character 'a' lexicographically.  
  
 In locales for which the character set and the lexicographic character order differ, use `strxfrm` on the original strings and then `strcmp` on the resulting strings to produce a lexicographic string comparison according to the current locale's `LC_COLLATE` category setting. Thus, to compare two strings lexicographically in the above locale, use `strxfrm` on the original strings, then `strcmp` on the resulting strings. Alternately, you can use `strcoll` rather than `strcmp` on the original strings.  
  
 `strxfrm` is basically a wrapper around [LCMapString](http://msdn.microsoft.com/library/windows/desktop/dd318700) with `LCMAP_SORTKEY`.  
  
 The value of the following expression is the size of the array needed to hold the `strxfrm` transformation of the source string:  
  
```  
1 + strxfrm( NULL, string, 0 )  
```  
  
 In the "C" locale only, `strxfrm` is equivalent to the following:  
  
```  
strncpy( _string1, _string2, _count );  
return( strlen( _string1 ) );  
```  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`strxfrm`|\<string.h>|  
|`wcsxfrm`|\<string.h> or \<wchar.h>|  
|`_strxfrm_l`|\<string.h>|  
|`_wcsxfrm_l`|\<string.h> or \<wchar.h>|  
  
 For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).  
  
## See Also  
 [Data Conversion](../../c-runtime-library/data-conversion.md)   
 [localeconv](../../c-runtime-library/reference/localeconv.md)   
 [setlocale, _wsetlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md)   
 [Locale](../../c-runtime-library/locale.md)   
 [String Manipulation](../../c-runtime-library/string-manipulation-crt.md)   
 [strcoll Functions](../../c-runtime-library/strcoll-functions.md)   
 [strcmp, wcscmp, _mbscmp](../../c-runtime-library/reference/strcmp-wcscmp-mbscmp.md)   
 [strncmp, wcsncmp, _mbsncmp, _mbsncmp_l](../../c-runtime-library/reference/strncmp-wcsncmp-mbsncmp-mbsncmp-l.md)