---
title: "strtol, wcstol, _strtol_l, _wcstol_l | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "strtol"
  - "wcstol"
  - "_strtol_l"
  - "_wcstol_l"
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
  - "_wcstol_l"
  - "strtol"
  - "_tcstol"
  - "wcstol"
  - "_strtol_l"
  - "_tcstol_l"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "wcstol function"
  - "wcstol_l function"
  - "_tcstol function"
  - "string conversion, to integers"
  - "tcstol function"
  - "strtol_l function"
  - "_wcstol_l function"
  - "_strtol_l function"
  - "strtol function"
ms.assetid: 1787c96a-f283-4a83-9325-33cfc1c7e240
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
# strtol, wcstol, _strtol_l, _wcstol_l
Convert strings to a long-integer value.  
  
## Syntax  
  
```  
long strtol(  
   const char *nptr,  
   char **endptr,  
   int base   
);  
long wcstol(  
   const wchar_t *nptr,  
   wchar_t **endptr,  
   int base   
);  
long _strtol_l(  
   const char *nptr,  
   char **endptr,  
   int base,  
   _locale_t locale  
);  
long _wcstol_l(  
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
 Pointer to character that stops scan.  
  
 `base`  
 Number base to use.  
  
 `locale`  
 Locale to use.  
  
## Return Value  
 `strtol` returns the value represented in the string `nptr`, except when the representation would cause an overflow, in which case it returns `LONG_MAX` or `LONG_MIN`. `strtol` returns 0 if no conversion can be performed. `wcstol` returns values analogously to `strtol`. For both functions, `errno` is set to `ERANGE` if overflow or underflow occurs.  
  
 See [_doserrno, errno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) for more information on these and other return codes.  
  
## Remarks  
 The `strtol` function converts `nptr` to a `long`. `strtol` stops reading the string `nptr` at the first character it cannot recognize as part of a number. This may be the terminating null character, or it may be the first numeric character greater than or equal to `base`.  
  
 `wcstol` is a wide-character version of `strtol`; its `nptr` argument is a wide-character string. These functions behave identically otherwise.  
  
### Generic-Text Routine Mappings  
  
|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_tcstol`|`strtol`|`strtol`|`wcstol`|  
|`_tcstol_l`|`_strtol_l`|`_strtol_l`|`_wcstol_l`|  
  
 The current locale's `LC_NUMERIC` category setting determines recognition of the radix character in `nptr`*;* for more information, see [setlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md). The functions without the `_l` suffix use the current locale; `_strtol_l` and `_wcstol_l` are identical to the corresponding functions without the `_l` suffix except that they use the locale passed in instead. For more information, see [Locale](../../c-runtime-library/locale.md).  
  
 If `endptr` is not `NULL`, a pointer to the character that stopped the scan is stored at the location pointed to by `endptr`. If no conversion can be performed (no valid digits were found or an invalid base was specified), the value of `nptr` is stored at the location pointed to by `endptr`.  
  
 `strtol` expects `nptr` to point to a string of the following form:  
  
 [`whitespace`] [{`+` &#124; `–`}] [`0` [{ `x` &#124; `X` }]] [`digits`]  
  
 A `whitespace` may consist of space and tab characters, which are ignored; `digits` are one or more decimal digits. The first character that does not fit this form stops the scan. If `base` is between 2 and 36, then it is used as the base of the number. If `base` is 0, the initial characters of the string pointed to by `nptr` are used to determine the base. If the first character is 0 and the second character is not 'x' or 'X', the string is interpreted as an octal integer. If the first character is '0' and the second character is 'x' or 'X', the string is interpreted as a hexadecimal integer. If the first character is '1' through '9', the string is interpreted as a decimal integer. The letters 'a' through 'z' (or 'A' through 'Z') are assigned the values 10 through 35; only letters whose assigned values are less than `base` are permitted. The first character outside the range of the base stops the scan. For example, if `base` is 0 and the first character scanned is '0', an octal integer is assumed and an '8' or '9' character will stop the scan.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`strtol`|\<stdlib.h>|  
|`wcstol`|\<stdlib.h> or \<wchar.h>|  
|`_strtol_l`|\<stdlib.h>|  
  
 For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.  
  
## Example  
 See the example for [strtod](../../c-runtime-library/reference/strtod-strtod-l-wcstod-wcstod-l.md).  
  
## .NET Framework Equivalent  
 [System::Convert::ToInt64](https://msdn.microsoft.com/en-us/library/system.convert.toint64.aspx)  
  
## See Also  
 [Data Conversion](../../c-runtime-library/data-conversion.md)   
 [Locale](../../c-runtime-library/locale.md)   
 [localeconv](../../c-runtime-library/reference/localeconv.md)   
 [setlocale, _wsetlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md)   
 [String to Numeric Value Functions](../../c-runtime-library/string-to-numeric-value-functions.md)   
 [strtod, _strtod_l, wcstod, _wcstod_l](../../c-runtime-library/reference/strtod-strtod-l-wcstod-wcstod-l.md)   
 [strtoul, _strtoul_l, wcstoul, _wcstoul_l](../../c-runtime-library/reference/strtoul-strtoul-l-wcstoul-wcstoul-l.md)   
 [atof, _atof_l, _wtof, _wtof_l](../../c-runtime-library/reference/atof-atof-l-wtof-wtof-l.md)