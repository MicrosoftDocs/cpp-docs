---
title: "strtod, _strtod_l, wcstod, _wcstod_l"
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
  - wcstod
  - _wcstod_l
  - _strtod_l
  - strtod
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
ms.assetid: 0444f74a-ba2a-4973-b7f0-1d77ba88c6ed
caps.latest.revision: 17
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
# strtod, _strtod_l, wcstod, _wcstod_l
Convert strings to a double-precision value.  
  
## Syntax  
  
```  
double strtod(  
   const char *nptr,  
   char **endptr   
);  
double _strtod_l(  
   const char *nptr,  
   char **endptr,  
   _locale_t locale  
);  
double wcstod(  
   const wchar_t *nptr,  
   wchar_t **endptr   
);  
double wcstod_l(  
   const wchar_t *nptr,  
   wchar_t **endptr,  
   _locale_t locale  
);  
```  
  
#### Parameters  
 `nptr`  
 Null-terminated string to convert.  
  
 `endptr`  
 Pointer to character that stops scan.  
  
 `locale`  
 The locale to use.  
  
## Return Value  
 `strtod` returns the value of the floating-point number, except when the representation would cause an overflow, in which case the function returns +/–`HUGE_VAL`. The sign of `HUGE_VAL` matches the sign of the value that cannot be represented. `strtod` returns 0 if no conversion can be performed or an underflow occurs.  
  
 `wcstod` returns values analogously to `strtod`. For both functions, `errno` is set to `ERANGE` if overflow or underflow occurs and the invalid parameter handler is invoked, as described in [Parameter Validation](../VS_visualcpp/Parameter-Validation.md).  
  
 See [_doserrno, errno, _sys_errlist, and _sys_nerr](../VS_visualcpp/errno--_doserrno--_sys_errlist--and-_sys_nerr.md) for more information on this and other return codes.  
  
## Remarks  
 Each function converts the input string `nptr` to a `double`. The `strtod` function converts `nptr` to a double-precision value. `strtod` stops reading the string `nptr` at the first character it cannot recognize as part of a number. This may be the terminating null character. `wcstod` is a wide-character version of `strtod`; its `nptr` argument is a wide-character string. These functions behave identically otherwise.  
  
### Generic-Text Routine Mappings  
  
|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_tcstod`|`strtod`|`strtod`|`wcstod`|  
|`_tcstod_l`|`_strtod_l`|`_strtod_l`|`_wcstod_l`|  
  
 The `LC_NUMERIC` category setting of the current locale determines recognition of the radix character in `nptr`*;* for more information, see [setlocale](../VS_visualcpp/setlocale--_wsetlocale.md). The functions without the `_l` suffix use the current locale; `_strtod_l` is identical to `_strtod_l` except that they use the locale passed in instead. For more information, see [Locale](../VS_visualcpp/Locale.md).  
  
 If `endptr` is not `NULL`, a pointer to the character that stopped the scan is stored at the location pointed to by `endptr`. If no conversion can be performed (no valid digits were found or an invalid base was specified), the value of `nptr` is stored at the location pointed to by `endptr`.  
  
 `strtod` expects `nptr` to point to a string of the following form:  
  
 [`whitespace`] [`sign`] [`digits`] [`.digits`] [ {`d` &#124; `D` &#124; `e` &#124; `E`}[`sign`]`digits`]  
  
 A `whitespace` may consist of space and tab characters, which are ignored; `sign` is either plus (`+`) or minus (`–`); and `digits` are one or more decimal digits. If no digits appear before the radix character, at least one must appear after the radix character. The decimal digits can be followed by an exponent, which consists of an introductory letter (`d`, `D`, `e`, or `E`) and an optionally signed integer. If neither an exponent part nor a radix character appears, a radix character is assumed to follow the last digit in the string. The first character that does not fit this form stops the scan.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`strtod`, `_strtod_l`|<stdlib.h>|  
|`wcstod`, `_wcstod_l`|<stdlib.h> or <wchar.h>|  
  
 For additional compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md) in the Introduction.  
  
## Example  
  
```  
// crt_strtod.c  
// This program uses strtod to convert a  
// string to a double-precision value; strtol to  
// convert a string to long integer values; and strtoul  
// to convert a string to unsigned long-integer values.  
//  
  
#include <stdlib.h>  
#include <stdio.h>  
  
int main( void )  
{  
   char   *string, *stopstring;  
   double x;  
   long   l;  
   int    base;  
   unsigned long ul;  
  
   string = "3.1415926This stopped it";  
   x = strtod( string, &stopstring );  
   printf( "string = %s\n", string );  
   printf("   strtod = %f\n", x );  
   printf("   Stopped scan at: %s\n\n", stopstring );  
  
   string = "-10110134932This stopped it";  
   l = strtol( string, &stopstring, 10 );  
   printf( "string = %s\n", string );  
   printf("   strtol = %ld\n", l );  
   printf("   Stopped scan at: %s\n\n", stopstring );  
  
   string = "10110134932";  
   printf( "string = %s\n", string );  
  
   // Convert string using base 2, 4, and 8:  
   for( base = 2; base <= 8; base *= 2 )  
   {  
      // Convert the string:  
      ul = strtoul( string, &stopstring, base );  
      printf( "   strtol = %ld (base %d)\n", ul, base );  
      printf( "   Stopped scan at: %s\n", stopstring );  
   }  
}  
```  
  
 **string = 3.1415926This stopped it**  
 **strtod = 3.141593**  
 **Stopped scan at: This stopped it**  
**string = -10110134932This stopped it**  
 **strtol = -2147483648**  
 **Stopped scan at: This stopped it**  
**string = 10110134932**  
 **strtol = 45 (base 2)**  
 **Stopped scan at: 34932**  
 **strtol = 4423 (base 4)**  
 **Stopped scan at: 4932**  
 **strtol = 2134108 (base 8)**  
 **Stopped scan at: 932**   
## .NET Framework Equivalent  
 [System::Convert::ToDouble](https://msdn.microsoft.com/en-us/library/system.convert.todouble.aspx)  
  
## See Also  
 [Data Conversion](../VS_visualcpp/Data-Conversion.md)   
 [Floating-Point Support](../VS_visualcpp/Floating-Point-Support.md)   
 [Interpretation of Multibyte-Character Sequences](../VS_visualcpp/Interpretation-of-Multibyte-Character-Sequences.md)   
 [Locale](../VS_visualcpp/Locale.md)   
 [String to Numeric Value Functions](../VS_visualcpp/String-to-Numeric-Value-Functions.md)   
 [strtol, wcstol, _strtol_l, _wcstol_l](../VS_visualcpp/strtol--wcstol--_strtol_l--_wcstol_l.md)   
 [strtoul, _strtoul_l, wcstoul, _wcstoul_l](../VS_visualcpp/strtoul--_strtoul_l--wcstoul--_wcstoul_l.md)   
 [atof, _atof_l, _wtof, _wtof_l](../VS_visualcpp/atof--_atof_l--_wtof--_wtof_l.md)   
 [localeconv](../VS_visualcpp/localeconv.md)   
 [_create_locale, _wcreate_locale](../VS_visualcpp/_create_locale--_wcreate_locale.md)   
 [_free_locale](../VS_visualcpp/_free_locale.md)