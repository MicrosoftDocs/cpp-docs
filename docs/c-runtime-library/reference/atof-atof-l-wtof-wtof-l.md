---
title: "atof, _atof_l, _wtof, _wtof_l | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_wtof_l"
  - "atof"
  - "_atof_l"
  - "_wtof"
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
  - "_tstof"
  - "_ttof"
  - "atof"
  - "stdlib/atof"
  - "math/atof"
  - "_atof_l"
  - "stdlib/_atof_l"
  - "math/_atof_l"
  - "_wtof"
  - "corecrt_wstdlib/_wtof"
  - "_wtof_l"
  - "corecrt_wstdlib/_wtof_l"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "tstof function"
  - "atof_l function"
  - "_atof_l function"
  - "atof function"
  - "_tstof function"
  - "_ttof function"
  - "wtof function"
  - "_wtof_l function"
  - "ttof function"
  - "wtof_l function"
  - "_wtof function"
  - "string conversion, to floating point values"
ms.assetid: eb513241-c9a9-4f5c-b7e7-a49b14abfb75
caps.latest.revision: 26
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
# atof, _atof_l, _wtof, _wtof_l
Convert a string to double.  
  
## Syntax  
  
```  
double atof(  
   const char *str   
);  
double _atof_l(  
   const char *str,  
   _locale_t locale  
);  
double _wtof(  
   const wchar_t *str   
);  
double _wtof_l(  
   const wchar_t *str,  
   _locale_t locale  
);  
```  
  
## Parameters  
 `str`  
 String to be converted.  
  
 `locale`  
 Locale to use.  
  
## Return Value  
 Each function returns the `double` value produced by interpreting the input characters as a number. The return value is 0.0 if the input cannot be converted to a value of that type.  
  
 In all out-of-range cases, errno is set to `ERANGE`. If the parameter passed in is `NULL`, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, these functions set `errno` to `EINVAL` and return 0.  
  
## Remarks  
 These functions convert a character string to a double-precision, floating-point value.  
  
 The input string is a sequence of characters that can be interpreted as a numerical value of the specified type. The function stops reading the input string at the first character that it cannot recognize as part of a number. This character may be the null character ('\0' or L'\0') terminating the string.  
  
 The `str` argument to `atof` and `_wtof` has the following form:  
  
 [`whitespace`] [`sign`] [`digits`] [`.digits`] [ {`e` &#124; `E` }[`sign`]`digits`]  
  
 A `whitespace` consists of space or tab characters, which are ignored; `sign` is either plus (+) or minus (–); and `digits` are one or more decimal digits. If no digits appear before the decimal point, at least one must appear after the decimal point. The decimal digits may be followed by an exponent, which consists of an introductory letter (`e`, or `E`) and an optionally signed decimal integer.  
 
 The UCRT versions of these functions do not support conversion of Fortran-style (`d` or `D`) exponent letters. This non-standard extension was supported by earlier versions of the CRT, and may be a breaking change for your code.  
  
 The versions of these functions with the `_l` suffix are identical except that they use the locale parameter passed in instead of the current locale.  
  
### Generic-Text Routine Mappings  
  
|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_tstof`|`atof`|`atof`|`_wtof`|  
|`_ttof`|`atof`|`atof`|`_wtof`|  
  
## Requirements  
  
|Routine(s)|Required header|  
|------------------|---------------------|  
|`atof`, `_atof_l`|C: \<math.h> or \<stdlib.h> C++: \<cstdlib>, \<stdlib.h>, \<cmath> or \<math.h>|  
|`_wtof`, `_wtof_l`|C: \<stdlib.h> or \<wchar.h> C++: \<cstdlib>, \<stdlib.h> or \<wchar.h>|  
  
## Example  
 This program shows how numbers stored as strings can be converted to numeric values using the `atof` and `_atof_l` functions.  
  
```C  
// crt_atof.c  
//  
// This program shows how numbers stored as   
// strings can be converted to numeric  
// values using the atof and _atof_l functions.  

#include <stdlib.h>  
#include <stdio.h>  
#include <locale.h>  

int main(void)
{
    char    *str = NULL;
    double value = 0;
    _locale_t fr = _create_locale(LC_NUMERIC, "fr-FR");

    // An example of the atof function  
    // using leading and training spaces.  
    str = "  3336402735171707160320 ";
    value = atof(str);
    printf("Function: atof(\"%s\") = %e\n", str, value);

    // Another example of the atof function  
    // using the 'E' exponential formatting keyword.  
    str = "3.1412764583E210";
    value = atof(str);
    printf("Function: atof(\"%s\") = %e\n", str, value);

    // An example of the atof and _atof_l functions  
    // using the 'e' exponential formatting keyword  
    // and showing different decimal point interpretations.  
    str = "  -2,309e-25";
    value = atof(str);
    printf("Function: atof(\"%s\") = %e\n", str, value);
    value = _atof_l(str, fr);
    printf("Function: _atof_l(\"%s\", fr)) = %e\n", str, value);
}  
```  
  
```Output  
Function: atof("  3336402735171707160320 ") = 3.336403e+21
Function: atof("3.1412764583E210") = 3.141276e+210
Function: atof("  -2,309e-25") = -2.000000e+00
Function: _atof_l("  -2,309e-25", fr)) = -2.309000e-25  
```  
  
## See Also  
 [Data Conversion](../../c-runtime-library/data-conversion.md)   
 [Floating-Point Support](../../c-runtime-library/floating-point-support.md)   
 [Locale](../../c-runtime-library/locale.md)   
 [_ecvt](../../c-runtime-library/reference/ecvt.md)   
 [_fcvt](../../c-runtime-library/reference/fcvt.md)   
 [_gcvt](../../c-runtime-library/reference/gcvt.md)   
 [setlocale, _wsetlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md)   
 [_atodbl, _atodbl_l, _atoldbl, _atoldbl_l, _atoflt, _atoflt_l](../../c-runtime-library/reference/atodbl-atodbl-l-atoldbl-atoldbl-l-atoflt-atoflt-l.md)