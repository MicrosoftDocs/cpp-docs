---
title: "strtold, _strtold_l, wcstold, _wcstold_l"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
apiname: 
  - wcstold
  - strtold
  - _strtold_l
  - _wcstold_l
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
  - api-ms-win-crt-convert-l1-1-0.dll
apitype: DLLExport
ms.assetid: 928c0c9a-bc49-445b-8822-100eb5954115
caps.latest.revision: 6
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
# strtold, _strtold_l, wcstold, _wcstold_l
Converts strings to a long double-precision floating-point value.  
  
## Syntax  
  
```  
long double strtold(  
   const char *nptr,  
   char **endptr   
);  
long double _strtold_l(  
   const char *nptr,  
   char **endptr,  
   _locale_t locale  
);  
long double wcstold(  
   const wchar_t *nptr,  
   wchar_t **endptr   
);  
long double wcstold_l(  
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
 `strtold` returns the value of the floating-point number as a `long double`, except when the representation would cause an overflow—in that case, the function returns +/–`HUGE_VALL`. The sign of `HUGE_VALL` matches the sign of the value that cannot be represented. `strtold` returns 0 if no conversion can be performed or an underflow occurs.  
  
 `wcstold` returns values analogously to `strtold`. For both functions, `errno` is set to `ERANGE` if overflow or underflow occurs and the invalid parameter handler is invoked, as described in [Parameter Validation](../VS_visualcpp/Parameter-Validation.md).  
  
 For more information about return codes, see [errno, _doserrno, _sys_errlist, and _sys_nerr](../VS_visualcpp/errno--_doserrno--_sys_errlist--and-_sys_nerr.md).  
  
## Remarks  
 Each function converts the input string `nptr` to a `long double`. The `strtold` function converts `nptr` to a long double-precision value. `strtold` stops reading the string `nptr` at the first character it cannot recognize as part of a number. This may be the terminating null character. The wide-character version of `strtold` is `wcstold`; its `nptr` argument is a wide-character string. Otherwise, these functions behave identically.  
  
### Generic-Text Routine Mappings  
  
|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_tcstold`|`strtold`|`strtold`|`wcstold`|  
|`_tcstold_l`|`_strtold_l`|`_strtold_l`|`_wcstold_l`|  
  
 The `LC_NUMERIC` category setting of the current locale determines the recognition of the radix character in `nptr`. For more information, see [setlocale, _wsetlocale](../VS_visualcpp/setlocale--_wsetlocale.md). The functions without the `_l` suffix use the current locale; `_strtold_l` and `_wcstold_l` are identical to `_strtold` and `_wcstold` except that they instead use the locale that's passed in. For more information, see [Locale](../VS_visualcpp/Locale.md).  
  
 If `endptr` is not `NULL`, a pointer to the character that stopped the scan is stored at the location that's pointed to by `endptr`. If no conversion can be performed (no valid digits were found or an invalid base was specified), the value of `nptr` is stored at the location that's pointed to by `endptr`.  
  
 `strtold` expects `nptr` to point to a string of the following form:  
  
 [`whitespace`] [`sign`] [`digits`] [`.digits`] [ {`d` &#124; `D` &#124; `e` &#124; `E`}[`sign`]`digits`]  
  
 A `whitespace` may consist of space and tab characters, which are ignored; `sign` is either plus (`+`) or minus (`–`); and `digits` are one or more decimal digits. If no digits appear before the radix character, at least one must appear after the radix character. The decimal digits can be followed by an exponent, which consists of an introductory letter (`d`, `D`, `e`, or `E`) and an optionally signed integer. If neither an exponent part nor a radix character appears, a radix character is assumed to follow the last digit in the string. The first character that does not fit this form stops the scan.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`strtold`, `_strtold_l`|<stdlib.h>|  
|`wcstold`, `_wcstold_l`|<stdlib.h> or <wchar.h>|  
  
 For additional compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md).  
  
## Example  
  
```  
// crt_strtold.c  
// Build with: cl /W4 /Tc crt_strtold.c  
// This program uses strtold to convert a  
// string to a long double-precision value.  
  
#include <stdlib.h>  
#include <stdio.h>  
  
int main( void )  
{  
   char *string;  
   char *stopstring;  
   long double x;  
  
   string = "3.1415926535898This stopped it";  
   x = strtold(string, &stopstring);  
   printf("string = %s\n", string);  
   printf("   strtold = %.13Lf\n", x);  
   printf("   Stopped scan at: %s\n\n", stopstring);  
}  
```  
  
 **string = 3.1415926535898This stopped it**  
 **strtold = 3.1415926535898**  
 **Stopped scan at: This stopped it**   
## .NET Framework Equivalent  
 [System::Convert::ToDouble](https://msdn.microsoft.com/en-us/library/system.convert.todouble.aspx)  
  
## See Also  
 [Data Conversion](../VS_visualcpp/Data-Conversion.md)   
 [Floating-Point Support](../VS_visualcpp/Floating-Point-Support.md)   
 [Interpretation of Multibyte-Character Sequences](../VS_visualcpp/Interpretation-of-Multibyte-Character-Sequences.md)   
 [Locale](../VS_visualcpp/Locale.md)   
 [String to Numeric Value Functions](../VS_visualcpp/String-to-Numeric-Value-Functions.md)   
 [strtod, _strtod_l, wcstod, _wcstod_l](../VS_visualcpp/strtod--_strtod_l--wcstod--_wcstod_l.md)   
 [strtol, wcstol, _strtol_l, _wcstol_l](../VS_visualcpp/strtol--wcstol--_strtol_l--_wcstol_l.md)   
 [strtoul, _strtoul_l, wcstoul, _wcstoul_l](../VS_visualcpp/strtoul--_strtoul_l--wcstoul--_wcstoul_l.md)   
 [atof, _atof_l, _wtof, _wtof_l](../VS_visualcpp/atof--_atof_l--_wtof--_wtof_l.md)   
 [localeconv](../VS_visualcpp/localeconv.md)   
 [_create_locale, _wcreate_locale](../VS_visualcpp/_create_locale--_wcreate_locale.md)   
 [_free_locale](../VS_visualcpp/_free_locale.md)