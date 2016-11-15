---
title: "wcstombs_s, _wcstombs_s_l | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_wcstombs_s_l"
  - "wcstombs_s"
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
  - "wcstombs_s"
  - "_wcstombs_s_l"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "wcstombs_s function"
  - "string conversion, wide characters"
  - "wide characters, converting"
  - "_wcstombs_s_l function"
  - "wcstombs_s_l function"
  - "characters, converting"
  - "string conversion, multibyte character strings"
ms.assetid: 105f2d33-221a-4f6d-864c-23c1865c42af
caps.latest.revision: 31
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.mt: 
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
# wcstombs_s, _wcstombs_s_l
Converts a sequence of wide characters to a corresponding sequence of multibyte characters. A version of [wcstombs, _wcstombs_l](../../c-runtime-library/reference/wcstombs-wcstombs-l.md) with security enhancements as described in [Security Features in the CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
## Syntax  
  
```  
errno_t wcstombs_s(  
   size_t *pReturnValue,  
   char *mbstr,  
   size_t sizeInBytes,  
   const wchar_t *wcstr,  
   size_t count   
);  
errno_t _wcstombs_s_l(  
   size_t *pReturnValue,  
   char *mbstr,  
   size_t sizeInBytes,  
   const wchar_t *wcstr,  
   size_t count,  
   _locale_t locale  
);  
template <size_t size>  
errno_t wcstombs_s(  
   size_t *pReturnValue,  
   char (&mbstr)[size],  
   const wchar_t *wcstr,  
   size_t count   
); // C++ only  
template <size_t size>  
errno_t _wcstombs_s_l(  
   size_t *pReturnValue,  
   char (&mbstr)[size],  
   const wchar_t *wcstr,  
   size_t count,  
   _locale_t locale  
); // C++ only  
```  
  
#### Parameters  
 [out] `pReturnValue`  
 The number of characters converted.  
  
 [out] `mbstr`  
 The address of a buffer for the resulting converted multibyte character string.  
  
 [in]`sizeInBytes`  
 The size in bytes of the `mbstr` buffer.  
  
 [in] `wcstr`  
 Points to the wide character string to be converted.  
  
 [in] `count`  
 The maximum number of bytes to store in the `mbstr` buffer, not including the terminating null character, or [_TRUNCATE](../../c-runtime-library/truncate.md).  
  
 [in] `locale`  
 The locale to use.  
  
## Return Value  
 Zero if successful, an error code on failure.  
  
|Error condition|Return value and `errno`|  
|---------------------|------------------------------|  
|`mbstr` is `NULL` and `sizeInBytes` > 0|`EINVAL`|  
|`wcstr` is `NULL`|`EINVAL`|  
|The destination buffer is too small to contain the converted string (unless `count` is `_TRUNCATE`; see Remarks below)|`ERANGE`|  
  
 If any of these conditions occurs, the invalid parameter exception is invoked as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md) . If execution is allowed to continue, the function returns an error code and sets `errno` as indicated in the table.  
  
## Remarks  
 The `wcstombs_s` function converts a string of wide characters pointed to by `wcstr` into multibyte characters stored in the buffer pointed to by `mbstr`. The conversion will continue for each character until one of these conditions is met:  
  
-   A null wide character is encountered  
  
-   A wide character that cannot be converted is encountered  
  
-   The number of bytes stored in the `mbstr` buffer equals `count`.  
  
 The destination string is always null-terminated (even in the case of an error).  
  
 If `count` is the special value [_TRUNCATE](../../c-runtime-library/truncate.md), then `wcstombs_s` converts as much of the string as will fit into the destination buffer, while still leaving room for a null terminator.  
  
 If `wcstombs_s` successfully converts the source string, it puts the size in bytes of the converted string, including the null terminator, into `*``pReturnValue` (provided `pReturnValue` is not `NULL`). This occurs even if the `mbstr` argument is `NULL` and provides a way to determine the required buffer size. Note that if `mbstr` is `NULL`, `count` is ignored.  
  
 If `wcstombs_s` encounters a wide character it cannot convert to a multibyte character, it puts 0 in `*``pReturnValue`, sets the destination buffer to an empty string, sets `errno` to `EILSEQ`, and returns `EILSEQ`.  
  
 If the sequences pointed to by `wcstr` and `mbstr` overlap, the behavior of `wcstombs_s` is undefined.  
  
> [!IMPORTANT]
>  Ensure that `wcstr` and `mbstr` do not overlap, and that `count` correctly reflects the number of wide characters to convert.  
  
 `wcstombs_s` uses the current locale for any locale-dependent behavior; `_wcstombs_s_l` is identical to `wcstombs` except that it uses the locale passed in instead. For more information, see [Locale](../../c-runtime-library/locale.md).  
  
 In C++, using these functions is simplified by template overloads; the overloads can infer buffer length automatically (eliminating the need to specify a size argument) and they can automatically replace older, non-secure functions with their newer, secure counterparts. For more information, see [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`wcstombs_s`|\<stdlib.h>|  
  
 For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.  
  
## Example  
 This program illustrates the behavior of the `wcstombs_s` function.  
  
```  
// crt_wcstombs_s.c  
// This example converts a wide character  
// string to a multibyte character string.  
#include <stdio.h>  
#include <stdlib.h>  
#include <assert.h>  
  
#define BUFFER_SIZE 100  
  
int main( void )  
{  
    size_t   i;  
    char      *pMBBuffer = (char *)malloc( BUFFER_SIZE );  
    wchar_t*pWCBuffer = L"Hello, world.";  
  
    printf( "Convert wide-character string:\n" );  
  
    // Conversion  
    wcstombs_s(&i, pMBBuffer, (size_t)BUFFER_SIZE,   
               pWCBuffer, (size_t)BUFFER_SIZE );  
  
    // Output  
    printf("   Characters converted: %u\n", i);  
    printf("    Multibyte character: %s\n\n",  
     pMBBuffer );  
  
    // Free multibyte character buffer  
    if (pMBBuffer)  
    {  
    free(pMBBuffer);  
    }  
}  
```  
  
```Output  
Convert wide-character string:  
   Characters converted: 14  
    Multibyte character: Hello, world.  
```  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).  
  
## See Also  
 [Data Conversion](../../c-runtime-library/data-conversion.md)   
 [Locale](../../c-runtime-library/locale.md)   
 [_mbclen, mblen, _mblen_l](../../c-runtime-library/reference/mbclen-mblen-mblen-l.md)   
 [mbstowcs, _mbstowcs_l](../../c-runtime-library/reference/mbstowcs-mbstowcs-l.md)   
 [mbtowc, _mbtowc_l](../../c-runtime-library/reference/mbtowc-mbtowc-l.md)   
 [wctomb_s, _wctomb_s_l](../../c-runtime-library/reference/wctomb-s-wctomb-s-l.md)   
 [WideCharToMultiByte](http://msdn.microsoft.com/library/windows/desktop/dd374130)