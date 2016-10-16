---
title: "wcstombs, _wcstombs_l"
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
  - "wcstombs"
  - "_wcstombs_l"
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
  - "wcstombs"
  - "_wcstombs_l"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_wcstombs_l function"
  - "wcstombs function"
  - "string conversion, wide characters"
  - "wide characters, converting"
  - "wcstombs_l function"
  - "characters, converting"
  - "string conversion, multibyte character strings"
ms.assetid: 91234252-9ea1-423a-af99-e9d0ce4a40e3
caps.latest.revision: 28
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
# wcstombs, _wcstombs_l
Converts a sequence of wide characters to a corresponding sequence of multibyte characters. More secure versions of these functions are available; see [wcstombs_s, _wcstombs_s_l](../crt/wcstombs_s--_wcstombs_s_l.md).  
  
## Syntax  
  
```  
size_t wcstombs(  
   char *mbstr,  
   const wchar_t *wcstr,  
   size_t count   
);  
size_t _wcstombs_l(  
   char *mbstr,  
   const wchar_t *wcstr,  
   size_t count,  
   _locale_t locale  
);  
template <size_t size>  
size_t wcstombs(  
   char (&mbstr)[size],  
   const wchar_t *wcstr,  
   size_t count   
); // C++ only  
template <size_t size>  
size_t _wcstombs_l(  
   char (&mbstr)[size],  
   const wchar_t *wcstr,  
   size_t count,  
   _locale_t locale  
); // C++ only  
```  
  
#### Parameters  
 `mbstr`  
 The address of a sequence of multibyte characters.  
  
 `wcstr`  
 The address of a sequence of wide characters.  
  
 `count`  
 The maximum number of bytes that can be stored in the multibyte output string.  
  
 `locale`  
 The locale to use.  
  
## Return Value  
 If `wcstombs` successfully converts the multibyte string, it returns the number of bytes written into the multibyte output string, excluding the terminating `NULL` (if any). If the `mbstr` argument is `NULL`, `wcstombs` returns the required size in bytes of the destination string. If `wcstombs` encounters a wide character it cannot convert to a multibyte character, it returns –1 cast to type `size_t` and sets `errno` to `EILSEQ`.  
  
## Remarks  
 The `wcstombs` function converts the wide-character string pointed to by `wcstr` to the corresponding multibyte characters and stores the results in the `mbstr` array. The `count` parameter indicates the maximum number of bytes that can be stored in the multibyte output string (that is, the size of `mbstr`). In general, it is not known how many bytes will be required when converting a wide-character string. Some wide characters will require only one byte in the output string; others require two. If there are two bytes in the multibyte output string for every wide character in the input string (including the wide character `NULL`), the result is guaranteed to fit.  
  
 If `wcstombs` encounters the wide-character null character (L'\0') either before or when `count` occurs, it converts it to an 8-bit 0 and stops. Thus, the multibyte character string at `mbstr` is null-terminated only if `wcstombs` encounters a wide-character null character during conversion. If the sequences pointed to by `wcstr` and `mbstr` overlap, the behavior of `wcstombs` is undefined.  
  
 If the `mbstr` argument is `NULL`, `wcstombs` returns the required size in bytes of the destination string.  
  
 `wcstombs` validates its parameters. If `wcstr` is `NULL`, or if `count` is greater than`INT_MAX`, this function invokes the invalid parameter handler, as described in [Parameter Validation](../crt/parameter-validation.md) . If execution is allowed to continue, the function sets `errno` to `EINVAL` and returns -1.  
  
 `wcstombs` uses the current locale for any locale-dependent behavior; `_wcstombs_l` is identical except that it uses the locale passed in instead. For more information, see [Locale](../crt/locale.md).  
  
 In C++, these functions have template overloads that invoke the newer, secure counterparts of these functions. For more information, see [Secure Template Overloads](../crt/secure-template-overloads.md).  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`wcstombs`|\<stdlib.h>|  
|`_wcstombs_l`|\<stdlib.h>|  
  
 For additional compatibility information, see [Compatibility](../crt/compatibility.md) in the Introduction.  
  
## Example  
 This program illustrates the behavior of the `wcstombs` function.  
  
```  
// crt_wcstombs.c  
// compile with: /W3  
// This example demonstrates the use  
// of wcstombs, which converts a string  
// of wide characters to a string of   
// multibyte characters.  
  
#include <stdlib.h>  
#include <stdio.h>  
  
#define BUFFER_SIZE 100  
  
int main( void )  
{  
    size_t  count;  
    char    *pMBBuffer = (char *)malloc( BUFFER_SIZE );  
    wchar_t *pWCBuffer = L"Hello, world.";  
  
    printf("Convert wide-character string:\n" );  
  
    count = wcstombs(pMBBuffer, pWCBuffer, BUFFER_SIZE ); // C4996  
    // Note: wcstombs is deprecated; consider using wcstombs_s instead  
    printf("   Characters converted: %u\n",  
            count );  
    printf("    Multibyte character: %s\n\n",  
           pMBBuffer );  
  
    free(pMBBuffer);  
}  
```  
  
 **Convert wide-character string:**  
 **Characters converted: 13**  
 **Multibyte character: Hello, world.**   
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).  
  
## See Also  
 [Data Conversion](../crt/data-conversion.md)   
 [Locale](../crt/locale.md)   
 [_mbclen, mblen, _mblen_l](../crt/_mbclen--mblen--_mblen_l.md)   
 [mbstowcs, _mbstowcs_l](../crt/mbstowcs--_mbstowcs_l.md)   
 [mbtowc, _mbtowc_l](../crt/mbtowc--_mbtowc_l.md)   
 [wctomb, _wctomb_l](../crt/wctomb--_wctomb_l.md)   
 [WideCharToMultiByte](http://msdn.microsoft.com/library/windows/desktop/dd374130)