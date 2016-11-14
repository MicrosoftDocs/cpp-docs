---
title: "strtoull, _strtoull_l, wcstoull, _wcstoull_l | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_strtoull_l"
  - "_wcstoull_l"
  - "strtoull"
  - "wcstoull"
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
  - "_wcstoull_l"
  - "_tcstoull"
  - "_tcstoull_l"
  - "wcstoull"
  - "_strtoull_l"
  - "strtoull"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "strtoull function"
  - "_tcstoull_l function"
  - "_tcstoull function"
  - "_wcstoull_l function"
  - "_strtoull_l function"
  - "wcstoull function"
ms.assetid: 36dac1cc-e901-40a0-8802-63562d6d01df
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
# strtoull, _strtoull_l, wcstoull, _wcstoull_l
Converts strings to an unsigned long long-integer value.  
  
## Syntax  
  
```  
unsigned long long strtoull(  
   const char *nptr,  
   char **endptr,  
   int base   
);  
unsigned long long _strtoull_l(  
   const char *nptr,  
   char **endptr,  
   int base,  
   _locale_t locale  
);  
unsigned long long wcstoull(  
   const wchar_t *nptr,  
   wchar_t **endptr,  
   int base   
);  
unsigned long long _wcstoull_l(  
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
 Locale to use.  
  
## Return Value  
 `strtoull` returns the converted value, if any, or `ULLONG_MAX` on overflow. `strtoull` returns 0 if no conversion can be performed. `wcstoull` returns values analogously to `strtoull`. For both functions, `errno` is set to `ERANGE` if overflow or underflow occurs.  
  
 For more information about return codes, see [errno, _doserrno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## Remarks  
 Each of these functions converts the input string `nptr` to an `unsigned long long` integer value.  
  
 `strtoull` stops reading the string `nptr` at the first character it cannot recognize as part of a number. This may be the terminating null character, or it may be the first numeric character that's greater than or equal to `base`. The setting of the `LC_NUMERIC` category of the locale determines recognition of the radix character in `nptr`; for more information, see [setlocale, _wsetlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md). `strtoull` and `wcstoull` use the current locale; `_strtoull_l` and `_wcstoull_l` instead use the locale that's passed in but are identical otherwise. For more information, see [Locale](../../c-runtime-library/locale.md).  
  
 If `endptr` is not `NULL`, a pointer to the character that stopped the scan is stored at the location that's pointed to by `endptr`. If no conversion can be performed (no valid digits were found or an invalid base was specified), the value of `nptr` is stored at the location that's pointed to by `endptr`.  
  
 `wcstoull` is a wide-character version of `strtoull` and its `nptr` argument is a wide-character string. Otherwise, these functions behave identically.  
  
### Generic-Text Routine Mappings  
  
|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_tcstoull`|`strtoull`|`strtoull`|`wcstoull`|  
|`_tcstoull_l`|`strtoull_l`|`_strtoull_l`|`_wcstoull_l`|  
  
 `strtoull` expects `nptr` to point to a string of the following form:  
  
 [`whitespace`] [{`+` &#124; `–`}] [`0` [{ `x` &#124; `X` }]] [`digits` &#124; [`letters`]]  
  
 A `whitespace` may consist of space and tab characters, which are ignored; `digits` are one or more decimal digits; `letters` are one or more of the letters 'a' through 'z' (or 'A' through 'Z'). The first character that does not fit this form stops the scan. If `base` is between 2 and 36, then it is used as the base of the number. If `base` is 0, the initial characters of the string that's pointed to by `nptr` are used to determine the base. If the first character is '0' and the second character is not 'x' or 'X', the string is interpreted as an octal integer. If the first character is '0' and the second character is 'x' or 'X', the string is interpreted as a hexadecimal integer. If the first character is '1' through '9', the string is interpreted as a decimal integer. The letters 'a' through 'z' (or 'A' through 'Z') are assigned the values 10 through 35; only letters whose assigned values are less than `base` are permitted. The first character outside the range of the base stops the scan. For example, if `base` is 0 and the first character scanned is '0', an octal integer is assumed and an '8' or '9' character stops the scan. `strtoull` allows a plus sign (`+`) or minus sign (`–`) prefix; a leading minus sign indicates that the return value is negated.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`strtoull`|\<stdlib.h>|  
|`wcstoull`|\<stdlib.h> or \<wchar.h>|  
|`_strtoull_l`|\<stdlib.h>|  
|`_wcstoull_l`|\<stdlib.h> or \<wchar.h>|  
  
 For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).  
  
## Example  
 See the example for [strtod](../../c-runtime-library/reference/strtod-strtod-l-wcstod-wcstod-l.md).  
  
## .NET Framework Equivalent  
 [System::Convert::ToUInt64](https://msdn.microsoft.com/en-us/library/system.convert.touint32.aspx)  
  
## See Also  
 [Data Conversion](../../c-runtime-library/data-conversion.md)   
 [Locale](../../c-runtime-library/locale.md)   
 [localeconv](../../c-runtime-library/reference/localeconv.md)   
 [setlocale, _wsetlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md)   
 [String to Numeric Value Functions](../../c-runtime-library/string-to-numeric-value-functions.md)   
 [strtod, _strtod_l, wcstod, _wcstod_l](../../c-runtime-library/reference/strtod-strtod-l-wcstod-wcstod-l.md)   
 [strtol, wcstol, _strtol_l, _wcstol_l](../../c-runtime-library/reference/strtol-wcstol-strtol-l-wcstol-l.md)   
 [strtoul, _strtoul_l, wcstoul, _wcstoul_l](../../c-runtime-library/reference/strtoul-strtoul-l-wcstoul-wcstoul-l.md)   
 [strtoll, _strtoll_l, wcstoll, _wcstoll_l](../../c-runtime-library/reference/strtoll-strtoll-l-wcstoll-wcstoll-l.md)   
 [atof, _atof_l, _wtof, _wtof_l](../../c-runtime-library/reference/atof-atof-l-wtof-wtof-l.md)