---
title: "_itoa_s, _i64toa_s, _ui64toa_s, _itow_s, _i64tow_s, _ui64tow_s | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_ui64tow_s"
  - "_itoa_s"
  - "_itow_s"
  - "_ui64toa_s"
  - "_i64tow_s"
  - "_i64toa_s"
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
  - "i64tot_s"
  - "itow_s"
  - "_ui64tow_s"
  - "_itow_s"
  - "ui64tot_s"
  - "_ui64toa_s"
  - "itoa_s"
  - "_i64tow_s"
  - "_i64tot_s"
  - "_itot_s"
  - "_i64toa_s"
  - "_itoa_s"
  - "ui64toa_s"
  - "i64toa_s"
  - "_ui64tot_s"
  - "i64tow_s"
  - "itot_s"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_ui64toa_s function"
  - "_itow_s function"
  - "_i64tow_s function"
  - "_itot_s function"
  - "converting integers"
  - "itow_s function"
  - "i64toa_s function"
  - "_ui64tow_s function"
  - "integers, converting"
  - "_i64tot_s function"
  - "itoa_s function"
  - "_itoa_s function"
  - "ui64toa_s function"
  - "i64tow_s function"
  - "converting numbers, to strings"
  - "_ui64tot_s function"
  - "_i64toa_s function"
ms.assetid: eb746581-bff3-48b5-a973-bfc0a4478ecf
caps.latest.revision: 28
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
# _itoa_s, _i64toa_s, _ui64toa_s, _itow_s, _i64tow_s, _ui64tow_s
Converts an integer to a string. These are versions of [_itoa, _i64toa, _ui64toa, _itow, _i64tow, _ui64tow](../../c-runtime-library/reference/itoa-i64toa-ui64toa-itow-i64tow-ui64tow.md) with security enhancements as described in [Security Features in the CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
## Syntax  
  
```  
errno_t _itoa_s(  
   int value,  
   char *buffer,  
   size_t sizeInCharacters,  
   int radix   
);  
errno_t _i64toa_s(  
   __int64 value,  
   char *buffer,  
   size_t sizeInCharacters,  
   int radix   
);  
errno_t _ui64toa_s(  
   unsigned _int64 value,  
   char *buffer,  
   size_t sizeInCharacters,  
   int radix   
);  
errno_t _itow_s(  
   int value,  
   wchar_t *buffer,  
   size_t sizeInCharacters,  
   int radix   
);  
errno_t _i64tow_s(  
   __int64 value,  
   wchar_t *buffer,  
   size_t sizeInCharacters,  
   int radix   
);  
errno_t _ui64tow_s(  
   unsigned __int64 value,  
   wchar_t *buffer,  
   size_t sizeInCharacters,  
   int radix   
);  
template <size_t size>  
errno_t _itoa_s(  
   int value,  
   char (&buffer)[size],  
   int radix   
); // C++ only  
template <size_t size>  
errno_t _itow_s(  
   int value,  
   wchar_t (&buffer)[size],  
   int radix   
); // C++ only  
```  
  
#### Parameters  
 [in] `value`  
 Number to be converted.  
  
 [out] `buffer`  
 Filled with the result of the conversion.  
  
 [in] `sizeInCharacters`  
 Size of the buffer in single-byte characters or wide characters.  
  
 [in] `radix`  
 Base of `value`; which must be in the range 2–36.  
  
## Return Value  
 Zero if successful; an error code on failure. If any of the following conditions applies, the function invokes an invalid parameter handler, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md).  
  
### Error Conditions  
  
|value|buffer|sizeInCharacters|radix|Return|  
|-----------|------------|----------------------|-----------|------------|  
|any|`NULL`|any|any|`EINVAL`|  
|any|any|<=0|any|`EINVAL`|  
|any|any|<= length of the result string required|any|`EINVAL`|  
|any|any|any|`radix` < 2 or `radix` > 36|`EINVAL`|  
  
 **Security Issues**  
  
 These functions can generate an access violation if `buffer` does not point to valid memory and is not `NULL`, or if the length of the buffer is not long enough to hold the result string.  
  
## Remarks  
 Except for the parameters and return value, the `_itoa_s` functions have the same behavior as the corresponding less secure versions.  
  
 In C++, using these functions is simplified by template overloads; the overloads can infer buffer length automatically (eliminating the need to specify a size argument) and they can automatically replace older, non-secure functions with their newer, secure counterparts. For more information, see [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).  
  
 The debug versions of these functions first fill the buffer with 0xFD. To disable this behavior, use [_CrtSetDebugFillThreshold](../../c-runtime-library/reference/crtsetdebugfillthreshold.md).  
  
### Generic-Text Routine Mappings  
  
|Tchar.h routine|_UNICODE and _MBCS not defined|_MBCS defined|_UNICODE defined|  
|---------------------|--------------------------------------|--------------------|-----------------------|  
|`_itot_s`|`_itoa_s`|`_itoa_s`|`_itow_s`|  
|`_i64tot_s`|`_i64toa_s`|`_i64toa_s`|`_i64tow_s`|  
|`_ui64tot_s`|`_ui64toa_s`|`_ui64toa_s`|`_ui64tow_s`|  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_itoa_s`|\<stdlib.h>|  
|`_i64toa_s`|\<stdlib.h>|  
|`_ui64toa_s`|\<stdlib.h>|  
|`_itow_s`|\<stdlib.h> or \<wchar.h>|  
|`_i64tow_s`|\<stdlib.h> or \<wchar.h>|  
|`_ui64tow_s`|\<stdlib.h> or \<wchar.h>|  
  
 For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.  
  
## Example  
  
```  
// crt_itoa_s.c  
#include <stdlib.h>  
#include <string.h>  
  
int main( void )  
{  
    char buffer[65];  
    int r;  
    for( r=10; r>=2; --r )  
    {  
       _itoa_s( -1, buffer, 65, r );  
       printf( "base %d: %s (%d chars)\n", r, buffer, strnlen(buffer, _countof(buffer)) );  
    }  
    printf( "\n" );  
    for( r=10; r>=2; --r )  
    {  
       _i64toa_s( -1L, buffer, 65, r );  
       printf( "base %d: %s (%d chars)\n", r, buffer, strnlen(buffer, _countof(buffer)) );  
    }  
    printf( "\n" );  
    for( r=10; r>=2; --r )  
    {  
       _ui64toa_s( 0xffffffffffffffffL, buffer, 65, r );  
       printf( "base %d: %s (%d chars)\n", r, buffer, strnlen(buffer, _countof(buffer)) );  
    }  
}  
```  
  
## Output  
  
```  
base 10: -1 (2 chars)  
base 9: 12068657453 (11 chars)  
base 8: 37777777777 (11 chars)  
base 7: 211301422353 (12 chars)  
base 6: 1550104015503 (13 chars)  
base 5: 32244002423140 (14 chars)  
base 4: 3333333333333333 (16 chars)  
base 3: 102002022201221111210 (21 chars)  
base 2: 11111111111111111111111111111111 (32 chars)  
  
base 10: -1 (2 chars)  
base 9: 145808576354216723756 (21 chars)  
base 8: 1777777777777777777777 (22 chars)  
base 7: 45012021522523134134601 (23 chars)  
base 6: 3520522010102100444244423 (25 chars)  
base 5: 2214220303114400424121122430 (28 chars)  
base 4: 33333333333333333333333333333333 (32 chars)  
base 3: 11112220022122120101211020120210210211220 (41 chars)  
base 2: 1111111111111111111111111111111111111111111111111111111111111111 (64 chars)  
  
base 10: 18446744073709551615 (20 chars)  
base 9: 145808576354216723756 (21 chars)  
base 8: 1777777777777777777777 (22 chars)  
base 7: 45012021522523134134601 (23 chars)  
base 6: 3520522010102100444244423 (25 chars)  
base 5: 2214220303114400424121122430 (28 chars)  
base 4: 33333333333333333333333333333333 (32 chars)  
base 3: 11112220022122120101211020120210210211220 (41 chars)  
base 2: 1111111111111111111111111111111111111111111111111111111111111111 (64 chars)  
```  
  
## .NET Framework Equivalent  
 [System::Convert::ToString](https://msdn.microsoft.com/en-us/library/system.convert.tostring.aspx)  
  
## See Also  
 [Data Conversion](../../c-runtime-library/data-conversion.md)   
 [_ltoa, _ltow](../../c-runtime-library/reference/ltoa-ltow.md)   
 [_ultoa, _ultow](../../c-runtime-library/reference/ultoa-ultow.md)