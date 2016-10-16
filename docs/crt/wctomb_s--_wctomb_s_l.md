---
title: "wctomb_s, _wctomb_s_l"
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
  - "_wctomb_s_l"
  - "wctomb_s"
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
  - "wctomb_s"
  - "_wctomb_s_l"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "wctomb_s function"
  - "wctomb_s_l function"
  - "string conversion, wide characters"
  - "wide characters, converting"
  - "_wctomb_s_l function"
  - "characters, converting"
  - "string conversion, multibyte character strings"
ms.assetid: 7e94a888-deed-4dbd-b5e9-d4a0455538b8
caps.latest.revision: 16
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
# wctomb_s, _wctomb_s_l
Converts a wide character to the corresponding multibyte character. A version of [wctomb, _wctomb_l](../crt/wctomb--_wctomb_l.md) with security enhancements as described in [Security Features in the CRT](../crt/security-features-in-the-crt.md).  
  
## Syntax  
  
```  
errno_t wctomb_s(  
   int *pRetValue,  
   char *mbchar,  
   size_t sizeInBytes,  
   wchar_t wchar   
);  
errno_t _wctomb_s_l(  
   int *pRetValue,  
   char *mbchar,  
   size_t sizeInBytes,  
   wchar_t wchar,  
   _locale_t locale  
);  
```  
  
#### Parameters  
 [out] `pRetValue`  
 The number of bytes, or a code indicating the result.  
  
 [out] `mbchar`  
 The address of a multibyte character.  
  
 [in] `sizeInBytes`  
 Size of the buffer `mbchar`.  
  
 [in] `wchar`  
 A wide character.  
  
 [in] `locale`  
 The locale to use.  
  
## Return Value  
 Zero if successful, an error code on failure.  
  
 Error Conditions  
  
|`mbchar`|`sizeInBytes`|Return value|`pRetValue`|  
|--------------|-------------------|------------------|-----------------|  
|`NULL`|>0|`EINVAL`|not modified|  
|any|>`INT_MAX`|`EINVAL`|not modified|  
|any|too small|`EINVAL`|not modified|  
  
 If any of the above error conditions occurs, the invalid parameter handler is invoked, as described in [Parameter Validation](../crt/parameter-validation.md). If execution is allowed to continue, `wctomb` returns `EINVAL` and sets `errno` to `EINVAL`.  
  
## Remarks  
 The `wctomb_s` function converts its `wchar` argument to the corresponding multibyte character and stores the result at `mbchar`. You can call the function from any point in any program.  
  
 If `wctomb_s` converts the wide character to a multibyte character, it puts the number of bytes (which is never greater than `MB_CUR_MAX`) in the wide character into the integer pointed to by `pRetValue`. If `wchar` is the wide-character null character (L'\0'), `wctomb_s` fills `pRetValue` with 1. If the target pointer `mbchar` is NULL, `wctomb_s` puts 0 in `pRetValue`. If the conversion is not possible in the current locale, `wctomb_s` puts –1 in `pRetValue`.  
  
 `wctomb_s` uses the current locale for locale-dependent information; `_wctomb_s_l` is identical except that it uses the locale passed in instead. For more information, see [Locale](../crt/locale.md).  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`wctomb_s`|\<stdlib.h>|  
|`_wctomb_s_l`|\<stdlib.h>|  
  
 For additional compatibility information, see [Compatibility](../crt/compatibility.md) in the Introduction.  
  
## Example  
 This program illustrates the behavior of the `wctomb` function.  
  
```  
// crt_wctomb_s.cpp  
#include <stdio.h>  
#include <stdlib.h>  
  
int main( void )  
{  
    int i;  
    wchar_t wc = L'a';  
    char *pmb = (char *)malloc( MB_CUR_MAX );  
  
    printf_s( "Convert a wide character:\n" );  
    wctomb_s( &i, pmb, MB_CUR_MAX, wc );  
    printf_s( "   Characters converted: %u\n", i );  
    printf_s( "   Multibyte character: %.1s\n\n", pmb );  
}  
```  
  
 **Convert a wide character:**  
 **Characters converted: 1**  
 **Multibyte character: a**   
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).  
  
## See Also  
 [Data Conversion](../crt/data-conversion.md)   
 [Locale](../crt/locale.md)   
 [_mbclen, mblen, _mblen_l](../crt/_mbclen--mblen--_mblen_l.md)   
 [mbstowcs, _mbstowcs_l](../crt/mbstowcs--_mbstowcs_l.md)   
 [mbtowc, _mbtowc_l](../crt/mbtowc--_mbtowc_l.md)   
 [wcstombs, _wcstombs_l](../crt/wcstombs--_wcstombs_l.md)   
 [WideCharToMultiByte](http://msdn.microsoft.com/library/windows/desktop/dd374130)