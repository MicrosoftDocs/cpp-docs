---
title: "strtoll, _strtoll_l, wcstoll, _wcstoll_l | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "strtoll"
  - "wcstoll"
  - "_strtoll_l"
  - "_wcstoll_l"
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
  - "api-ms-win-crt-convert-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "_strtoll_l"
  - "_tcstoll_l"
  - "_tcstoll"
  - "_wcstoll_l"
  - "strtoll"
  - "wcstoll"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_tcstoll_l function"
  - "_wcstoll_l function"
  - "strtoll function"
  - "wcstoll function"
  - "_tcstoll function"
  - "_strtoll_l function"
ms.assetid: e2d05dcf-d3b2-4291-9e60-dee77e540fd7
caps.latest.revision: 5
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
# strtoll, _strtoll_l, wcstoll, _wcstoll_l
Converts a string to a `long long` value.  
  
## Syntax  
  
```  
long long strtoll(  
   const char *nptr,  
   char **endptr,  
   int base   
);  
long long wcstoll(  
   const wchar_t *nptr,  
   wchar_t **endptr,  
   int base   
);  
long long _strtoll_l(  
   const char *nptr,  
   char **endptr,  
   int base,  
   _locale_t locale  
);  
long long _wcstoll_l(  
   const wchar_t *nptr,  
   wchar_t **endptr,  
   int base,  
   _locale_t locale  
);  
```  
  
#### Parameters  
 `nptr`  
 Null-terminated string to convert.  
  
 `endptr`  
 Pointer to the character that stops the scan.  
  
 `base`  
 Number base to use.  
  
 `locale`  
 The locale to use.  
  
## Return Value  
 `strtoll` returns the value that's represented in the string `nptr`, except when the representation would cause an overflow—in that case, it returns `LLONG_MAX` or `LLONG_MIN`. The function returns 0 if no conversion can be performed. `wcstoll` returns values analogously to `strtoll`.  
  
 `LLONG_MAX` and `LLONG_MIN` are defined in LIMITS.H.  
  
 If `nptr` is `NULL` or the `base` is nonzero and either less than 2 or greater than 36, `errno` is set to `EINVAL`.  
  
 For more information about return codes, see [errno, _doserrno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## Remarks  
 The `strtoll` function converts `nptr` to a `long long`. Both functions stop reading the string `nptr` at the first character they cannot recognize as part of a number. This may be the terminating null character, or it may be the first numeric character that's greater than or equal to `base`. `wcstoll` is a wide-character version of `strtoll`; its `nptr` argument is a wide-character string. Otherwise, these functions behave identically.  
  
### Generic-Text Routine Mappings  
  
|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_tcstoll`|`strtoll`|`strtoll`|`wcstoll`|  
|`_tcstoll_l`|`_strtoll_l`|`_strtoll_l`|`_wcstoll_l`|  
  
 The locale's `LC_NUMERIC` category setting determines recognition of the radix character in `nptr`; for more information, see [setlocale, _wsetlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md). The functions that don't have the `_l` suffix use the current locale; `_strtoll_l` and `_wcstoll_l` are identical to the corresponding functions that don't have the suffix, except that they instead use the locale that's passed in. For more information, see [Locale](../../c-runtime-library/locale.md).  
  
 If `endptr` is not `NULL`, a pointer to the character that stopped the scan is stored at the location that's pointed to by `endptr`. If no conversion can be performed (no valid digits were found or an invalid base was specified), the value of `nptr` is stored at the location that's pointed to by `endptr`.  
  
 `strtoll` expects `nptr` to point to a string of the following form:  
  
 [`whitespace`] [{`+` &#124; `–`}] [`0` [{ `x` &#124; `X` }]] [`digits` &#124; `letters`]  
  
 A `whitespace` may consist of space and tab characters, which are ignored; `digits` are one or more decimal digits; `letters` are one or more of the letters 'a' through 'z' (or 'A' through 'Z'). The first character that does not fit this form stops the scan. If `base` is between 2 and 36, then it is used as the base of the number. If `base` is 0, the initial characters of the string that's pointed to by `nptr` are used to determine the base. If the first character is '0' and the second character is not 'x' or 'X', the string is interpreted as an octal integer. If the first character is '0' and the second character is 'x' or 'X', the string is interpreted as a hexadecimal integer. If the first character is '1' through '9', the string is interpreted as a decimal integer. The letters 'a' through 'z' (or 'A' through 'Z') are assigned the values 10 through 35; only letters whose assigned values are less than `base` are permitted. The first character outside the range of the base stops the scan. For example, if `base` is 0 and the first character scanned is '0', an octal integer is assumed and an '8' or '9' character stops the scan.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`strtoll`, `_strtoll_l`|\<stdlib.h>|  
|`wcstoll`, `_wcstoll_l`|\<stdlib.h> or \<wchar.h>|  
  
 For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).  
  
## See Also  
 [Data Conversion](../../c-runtime-library/data-conversion.md)   
 [Locale](../../c-runtime-library/locale.md)   
 [localeconv](../../c-runtime-library/reference/localeconv.md)   
 [setlocale, _wsetlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md)   
 [String to Numeric Value Functions](../../c-runtime-library/string-to-numeric-value-functions.md)   
 [strtod, _strtod_l, wcstod, _wcstod_l](../../c-runtime-library/reference/strtod-strtod-l-wcstod-wcstod-l.md)   
 [strtol, wcstol, _strtol_l, _wcstol_l](../../c-runtime-library/reference/strtol-wcstol-strtol-l-wcstol-l.md)   
 [strtoul, _strtoul_l, wcstoul, _wcstoul_l](../../c-runtime-library/reference/strtoul-strtoul-l-wcstoul-wcstoul-l.md)   
 [atof, _atof_l, _wtof, _wtof_l](../../c-runtime-library/reference/atof-atof-l-wtof-wtof-l.md)