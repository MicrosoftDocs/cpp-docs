---
title: "_ltoa, _ltow | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_ltoa"
  - "_ltow"
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
apitype: "DLLExport"
f1_keywords: 
  - "ltow"
  - "_ltot"
  - "_ltoa"
  - "_ltow"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "converting integers"
  - "_ltoa function"
  - "_ltow function"
  - "ltow function"
  - "ltoa function"
  - "long integer conversion to string"
  - "converting numbers, to strings"
ms.assetid: 14036104-2c25-4759-87c0-918ed8521e47
caps.latest.revision: 17
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
# _ltoa, _ltow
Converts a long integer to a string. More secure versions of these functions are available; see [_ltoa_s, _ltow_s](../../c-runtime-library/reference/ltoa-s-ltow-s.md).  
  
## Syntax  
  
```  
char *_ltoa(  
   long value,  
   char *str,  
   int radix   
);  
wchar_t *_ltow(  
   long value,  
   wchar_t *str,  
   int radix   
);  
template <size_t size>  
char *_ltoa(  
   long value,  
   char (&str)[size],  
   int radix   
); // C++ only  
template <size_t size>  
wchar_t *_ltow(  
   long value,  
   wchar_t (&str)[size],  
   int radix   
); // C++ only  
```  
  
#### Parameters  
 `value`  
 Number to be converted.  
  
 `str`  
 String result.  
  
 `radix`  
 Base of `value`.  
  
## Return Value  
 Each of these functions returns a pointer to `str`. There is no error return.  
  
## Remarks  
 The `_ltoa` function converts the digits of `value` to a null-terminated character string and stores the result (up to 33 bytes) in `str`. The `radix` argument specifies the base of `value`, which must be in the range 2 – 36. If `radix` equals 10 and `value` is negative, the first character of the stored string is the minus sign (–). `_ltow` is a wide-character version of `_ltoa`; the second argument and return value of `_ltow` are wide-character strings. Each of these functions is Microsoft-specific.  
  
> [!IMPORTANT]
>  To prevent buffer overruns, ensure that the `str` buffer is large enough to hold the converted digits plus the trailing null-character and a sign character.  
  
 In C++, these functions have template overloads. For more information, see [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).  
  
### Generic-Text Routine Mappings  
  
|Tchar.h routine|_UNICODE and _MBCS not defined|_MBCS defined|_UNICODE defined|  
|---------------------|--------------------------------------|--------------------|-----------------------|  
|`_ltot`|`_ltoa`|`_ltoa`|`_ltow`|  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_ltoa`|\<stdlib.h>|  
|`_ltow`|\<stdlib.h>|  
  
 For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.  
  
## Example  
 See the example for [_itoa](../../c-runtime-library/reference/itoa-i64toa-ui64toa-itow-i64tow-ui64tow.md).  
  
## .NET Framework Equivalent  
 [System::Convert::ToString](https://msdn.microsoft.com/en-us/library/system.convert.tostring.aspx)  
  
## See Also  
 [Data Conversion](../../c-runtime-library/data-conversion.md)   
 [_itoa, _i64toa, _ui64toa, _itow, _i64tow, _ui64tow](../../c-runtime-library/reference/itoa-i64toa-ui64toa-itow-i64tow-ui64tow.md)   
 [_ultoa, _ultow](../../c-runtime-library/reference/ultoa-ultow.md)