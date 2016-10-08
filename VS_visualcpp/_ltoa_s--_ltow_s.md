---
title: "_ltoa_s, _ltow_s"
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
  - _ltoa_s
  - _ltow_s
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
apitype: DLLExport
ms.assetid: d7dc61ea-1ccd-412d-b262-555a58647386
caps.latest.revision: 18
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
# _ltoa_s, _ltow_s
Converts a long integer to a string. These are versions of [_ltoa, _ltow](../VS_visualcpp/_ltoa--_ltow.md) with security enhancements as described in [Security Features in the CRT](../VS_visualcpp/Security-Features-in-the-CRT.md).  
  
## Syntax  
  
```  
errno_t _ltoa_s(  
    long value,  
    char *str,  
    size_t sizeOfstr,  
    int radix   
);  
errno_t _ltow_s(  
    long value,  
    wchar_t *str,  
    size_t sizeOfstr,  
    int radix   
);  
template <size_t size>  
errno_t _ltoa_s(  
    long value,  
    char (&str)[size],  
    int radix   
); // C++ only  
template <size_t size>  
errno_t _ltow_s(  
    long value,  
    wchar_t (&str)[size],  
    int radix   
); // C++ only  
```  
  
#### Parameters  
 `value`  
 Number to be converted.  
  
 `str`  
 Buffer for the resulting string.  
  
 `sizeOfstr`  
 Size of the `str` in bytes for `_ltoa_s` or words for `_ltow_s`.  
  
 `radix`  
 Base of `value`.  
  
## Return Value  
 Zero if the function was successful or an error code.  
  
## Remarks  
 The `_ltoa_s` function converts the digits of `value` to a null-terminated character string and stores the result (up to 33 bytes) in `str`. The `radix` argument specifies the base of `value`, which must be in the range 2 – 36. If `radix` equals 10 and `value` is negative, the first character of the stored string is the minus sign (–). `_ltow_s` is a wide character version of `_ltoa_s`; the second argument of `_ltow_s` is a wide character strings.  
  
 If `str` is a `NULL` pointer or `sizeOfstr` is less than or equal to zero, these functions invoke an invalid parameter handler, as described in [Parameter Validation](../VS_visualcpp/Parameter-Validation.md). If execution is allowed to continue, these functions return -1 and set `errno` to `EINVAL` or if the `value` or `str` out of range of a long integer, these functions return a -1 and set the `errno` to `ERANGE`.  
  
 In C++, using these functions is simplified by template overloads; the overloads can infer buffer length automatically (eliminating the need to specify a size argument) and they can automatically replace older, non-secure functions with their newer, secure counterparts. For more information, see [Secure Template Overloads](../VS_visualcpp/Secure-Template-Overloads.md).  
  
### Generic-Text Routine Mappings  
  
|Tchar.h routine|_UNICODE and _MBCS not defined|_MBCS defined|_UNICODE defined|  
|---------------------|--------------------------------------|--------------------|-----------------------|  
|`_ltot_s`|`_ltoa_s`|`_ltoa_s`|`_ltow_s`|  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_ltoa_s`|<stdlib.h>|  
|`_ltow_s`|<stdlib.h>|  
  
 For more compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md) in the Introduction.  
  
## .NET Framework Equivalent  
 [System::Convert::ToString](https://msdn.microsoft.com/en-us/library/system.convert.tostring.aspx)  
  
## See Also  
 [Data Conversion](../VS_visualcpp/Data-Conversion.md)   
 [_itoa, _i64toa, _ui64toa, _itow, _i64tow, _ui64tow](../VS_visualcpp/_itoa--_i64toa--_ui64toa--_itow--_i64tow--_ui64tow.md)   
 [_ultoa, _ultow](../VS_visualcpp/_ultoa--_ultow.md)   
 [_ultoa_s, _ultow_s](../VS_visualcpp/_ultoa_s--_ultow_s.md)