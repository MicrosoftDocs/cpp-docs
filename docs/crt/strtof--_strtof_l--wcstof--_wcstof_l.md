---
title: "strtof, _strtof_l, wcstof, _wcstof_l"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
apiname: 
  - "_strtof_l"
  - "wcstof"
  - "strtof"
  - "_wcstof_l"
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
  - "_tcstof"
  - "wcstof"
  - "_wcstof_l"
  - "_tcstof_l"
  - "_strtof_l"
  - "strtof"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_strtof_l function"
  - "_tcstof function"
  - "_wcstof_l function"
  - "wcstof function"
  - "_tcstof_l function"
  - "strtof function"
ms.assetid: 52221b46-876d-4fcc-afb1-97512c17a43b
caps.latest.revision: 6
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
# strtof, _strtof_l, wcstof, _wcstof_l
Converts strings to a single-precision floating-point value.  
  
## Syntax  
  
```  
float strtof(  
   const char *nptr,  
   char **endptr   
);  
float _strtof_l(  
   const char *nptr,  
   char **endptr,  
   _locale_t locale  
);  
float wcstof(  
   const wchar_t *nptr,  
   wchar_t **endptr   
);  
float wcstof_l(  
   const wchar_t *nptr,  
   wchar_t **endptr,  
   _locale_t locale  
);  
```  
  
#### Parameters  
 `nptr`  
 Null-terminated string to convert.  
  
 `endptr`  
 Pointer to the character that stops the scan.  
  
 `locale`  
 The locale to use.  
  
## Return Value  
 `strtof` returns the value of the floating-point number, except when the representation would cause an overflow, in which case the function returns +/–`HUGE_VALF`. The sign of `HUGE_VALF` matches the sign of the value that cannot be represented. `strtof` returns 0 if no conversion can be performed or an underflow occurs.  
  
 `wcstof` returns values analogously to `strtof`. For both functions, `errno` is set to `ERANGE` if overflow or underflow occurs and the invalid parameter handler is invoked, as described in [Parameter Validation](../crt/parameter-validation.md).  
  
 For more information about return codes, see [errno, _doserrno, _sys_errlist, and _sys_nerr](../crt/errno--_doserrno--_sys_errlist--and-_sys_nerr.md).  
  
## Remarks  
 Each function converts the input string `nptr` to a `float`. The `strtof` function converts `nptr` to a single-precision value. `strtof` stops reading the string `nptr` at the first character it cannot recognize as part of a number. This may be the terminating null character. `wcstof` is a wide-character version of `strtof`; its `nptr` argument is a wide-character string. Otherwise, these functions behave identically.  
  
### Generic-Text Routine Mappings  
  
|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_tcstof`|`strtof`|`strtof`|`wcstof`|  
|`_tcstof_l`|`_strtof_l`|`_strtof_l`|`_wcstof_l`|  
  
 The `LC_NUMERIC` category setting of the current locale determines recognition of the radix character in `nptr`; for more information, see [setlocale, _wsetlocale](../crt/setlocale--_wsetlocale.md). The functions that don't have the `_l` suffix use the current locale; the ones that have the suffix are identical except that they use the locale that's passed in instead. For more information, see [Locale](../crt/locale.md).  
  
 If `endptr` is not `NULL`, a pointer to the character that stopped the scan is stored at the location that's pointed to by `endptr`. If no conversion can be performed (no valid digits were found or an invalid base was specified), the value of `nptr` is stored at the location that's pointed to by `endptr`.  
  
 `strtof` expects `nptr` to point to a string of the following form:  
  
 [`whitespace`] [`sign`] [`digits`] [`.digits`] [ {`d` &#124; `D` &#124; `e` &#124; `E`}[`sign`]`digits`]  
  
 A `whitespace` may consist of space and tab characters, which are ignored; `sign` is either plus (`+`) or minus (`–`); and `digits` are one or more decimal digits. If no digits appear before the radix character, at least one must appear after the radix character. The decimal digits can be followed by an exponent, which consists of an introductory letter (`d`, `D`, `e`, or `E`) and an optionally signed integer. If neither an exponent part nor a radix character appears, a radix character is assumed to follow the last digit in the string. The first character that does not fit this form stops the scan.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`strtof`, `_strtof_l`|\<stdlib.h>|  
|`wcstof`, `_wcstof_l`|\<stdlib.h> or \<wchar.h>|  
  
 For additional compatibility information, see [Compatibility](../crt/compatibility.md).  
  
## Example  
  
```  
// crt_strtof.c  
// This program uses strtof to convert a  
// string to a single-precision value.  
  
#include <stdlib.h>  
#include <stdio.h>  
  
int main( void )  
{  
   char *string;  
   char *stopstring;  
   float x;  
  
   string = "3.14159This stopped it";  
   x = strtof(string, &stopstring);  
   printf("string = %s\n", string);  
   printf("   strtof = %f\n", x);  
   printf("   Stopped scan at: %s\n\n", stopstring);  
}  
```  
  
 **string = 3.14159This stopped it**  
 **strtof = 3.141590**  
 **Stopped scan at: This stopped it**   
## .NET Framework Equivalent  
 [System::Convert::ToSingle](https://msdn.microsoft.com/en-us/library/system.convert.tosingle.aspx)  
  
## See Also  
 [Data Conversion](../crt/data-conversion.md)   
 [Floating-Point Support](../crt/floating-point-support.md)   
 [Interpretation of Multibyte-Character Sequences](../crt/interpretation-of-multibyte-character-sequences.md)   
 [Locale](../crt/locale.md)   
 [String to Numeric Value Functions](../crt/string-to-numeric-value-functions.md)   
 [strtod, _strtod_l, wcstod, _wcstod_l](../crt/strtod--_strtod_l--wcstod--_wcstod_l.md)   
 [strtol, wcstol, _strtol_l, _wcstol_l](../crt/strtol--wcstol--_strtol_l--_wcstol_l.md)   
 [strtoul, _strtoul_l, wcstoul, _wcstoul_l](../crt/strtoul--_strtoul_l--wcstoul--_wcstoul_l.md)   
 [atof, _atof_l, _wtof, _wtof_l](../crt/atof--_atof_l--_wtof--_wtof_l.md)   
 [localeconv](../crt/localeconv.md)   
 [_create_locale, _wcreate_locale](../crt/_create_locale--_wcreate_locale.md)   
 [_free_locale](../crt/_free_locale.md)