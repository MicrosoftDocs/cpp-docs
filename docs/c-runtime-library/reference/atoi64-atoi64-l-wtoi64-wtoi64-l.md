---
title: "_atoi64, _atoi64_l, _wtoi64, _wtoi64_l | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_atoi64_l"
  - "_wtoi64"
  - "_atoi64"
  - "_wtoi64_l"
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
  - "_atoi64"
  - "_tstoi64"
  - "_ttoi64"
  - "wtoi64"
  - "_tstoi64_l"
  - "atoi64"
  - "_wtoi64_l"
  - "_wtoi64"
  - "wtoi64_l"
  - "_atoi64_l"
  - "atoi64_l"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "tstoi64 function"
  - "wtoi64 function"
  - "atoi64_l function"
  - "_ttoi64 function"
  - "string conversion, to integers"
  - "wtoi64_l function"
  - "atoi64 function"
  - "_tstoi64 function"
  - "_atoi64_l function"
  - "_wtoi64_l function"
  - "ttoi64 function"
  - "_wtoi64 function"
  - "_atoi64 function"
ms.assetid: 2c3e30fd-545d-4222-8364-0c5905df9526
caps.latest.revision: 24
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
# _atoi64, _atoi64_l, _wtoi64, _wtoi64_l
Converts a string to a 64-bit integer.  
  
## Syntax  
  
```  
__int64 _atoi64(  
   const char *str   
);  
__int64 _wtoi64(  
   const wchar_t *str   
);  
__int64 _atoi64_l(  
   const char *str,  
   _locale_t locale  
);  
__int64 _wtoi64_l(  
   const wchar_t *str,  
   _locale_t locale  
);  
```  
  
#### Parameters  
 `str`  
 String to be converted.  
  
 `locale`  
 Locale to use.  
  
## Return Value  
 Each function returns the `__int64` value produced by interpreting the input characters as a number. The return value is 0 for `_atoi64` if the input cannot be converted to a value of that type.  
  
 In the case of overflow with large positive integral values, `_atoi64` returns `I64_MAX` and `I64_MIN` in the case of overflow with large negative integral values.  
  
 In all out-of-range cases, `errno` is set to `ERANGE`. If the parameter passed in is `NULL`, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, these functions set `errno` to `EINVAL` and return 0.  
  
## Remarks  
 These functions convert a character string to a 64-bit integer value.  
  
 The input string is a sequence of characters that can be interpreted as a numerical value of the specified type. The function stops reading the input string at the first character that it cannot recognize as part of a number. This character might be the null character ('\0' or L'\0') terminating the string.  
  
 The `str` argument to `_atoi64` has the following form:  
  
```  
[whitespace] [sign] [digits]]  
```  
  
 A `whitespace` consists of space or tab characters, which are ignored; `sign` is either plus (+) or minus (–); and `digits` are one or more digits.  
  
 `_wtoi64` is identical to `_atoi64` except that it takes a wide character string as a parameter.  
  
 The versions of these functions with the `_l` suffix are identical except that they use the locale parameter passed in instead of the current locale. For more information, see [Locale](../../c-runtime-library/locale.md).  
  
### Generic-Text Routine Mappings  
  
|Tchar.h routine|_UNICODE and _MBCS not defined|_MBCS defined|_UNICODE defined|  
|---------------------|--------------------------------------|--------------------|-----------------------|  
|`_tstoi64`|`_atoi64`|`_atoi64`|`_wtoi64`|  
|`_ttoi64`|`_atoi64`|`_atoi64`|`_wtoi64`|  
  
## Requirements  
  
|Routines|Required header|  
|--------------|---------------------|  
|`_atoi64`, `_atoi64_l`|\<stdlib.h>|  
|`_wtoi64`, `_wtoi64_l`|\<stdlib.h> or \<wchar.h>|  
  
## Example  
 This program shows how numbers stored as strings can be converted to numeric values using the `_atoi64` functions.  
  
```  
// crt_atoi64.c  
// This program shows how numbers stored as  
// strings can be converted to numeric values  
// using the _atoi64 functions.  
#include <stdlib.h>  
#include <stdio.h>  
#include <errno.h>  
  
int main( void )  
{  
    char    *str = NULL;  
    __int64 value = 0;  
  
    // An example of the _atoi64 function  
    // with leading and trailing white spaces.  
    str = "  -2309 ";  
    value = _atoi64( str );  
    printf( "Function: _atoi64( \"%s\" ) = %d\n", str, value );  
  
    // Another example of the _atoi64 function   
    // with an arbitrary decimal point.  
    str = "314127.64";  
    value = _atoi64( str );  
    printf( "Function: _atoi64( \"%s\" ) = %d\n", str, value );  
  
    // Another example of the _atoi64 function  
    // with an overflow condition occurring.  
    str = "3336402735171707160320";  
    value = _atoi64( str );  
    printf( "Function: _atoi64( \"%s\" ) = %d\n", str, value );  
    if (errno == ERANGE)  
    {  
       printf("Overflow condition occurred.\n");  
    }  
}  
```  
  
```Output  
Function: _atoi64( "  -2309 " ) = -2309  
Function: _atoi64( "314127.64" ) = 314127  
Function: _atoi64( "3336402735171707160320" ) = -1  
Overflow condition occurred.  
```  
  
## .NET Framework Equivalent  
  
-   [System::Convert::ToInt64](https://msdn.microsoft.com/en-us/library/system.convert.toint64.aspx)  
  
-   [System::Convert::ToUInt64](https://msdn.microsoft.com/en-us/library/system.convert.touint64.aspx)  
  
## See Also  
 [Data Conversion](../../c-runtime-library/data-conversion.md)   
 [Floating-Point Support](../../c-runtime-library/floating-point-support.md)   
 [Locale](../../c-runtime-library/locale.md)   
 [_ecvt](../../c-runtime-library/reference/ecvt.md)   
 [_fcvt](../../c-runtime-library/reference/fcvt.md)   
 [_gcvt](../../c-runtime-library/reference/gcvt.md)   
 [setlocale, _wsetlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md)   
 [_atodbl, _atodbl_l, _atoldbl, _atoldbl_l, _atoflt, _atoflt_l](../../c-runtime-library/reference/atodbl-atodbl-l-atoldbl-atoldbl-l-atoflt-atoflt-l.md)