---
title: "wcsrtombs_s | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "wcsrtombs_s"
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
  - "wcsrtombs_s"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "string conversion, wide characters"
  - "wcsrtombs_s function"
  - "wide characters, strings"
ms.assetid: 9dccb766-113c-44bb-9b04-07a634dddec8
caps.latest.revision: 27
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
# wcsrtombs_s
Convert a wide character string to its multibyte character string representation. A version of [wcsrtombs](../../c-runtime-library/reference/wcsrtombs.md) with security enhancements as described in [Security Features in the CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
## Syntax  
  
```  
errno_t wcsrtombs_s(  
   size_t *pReturnValue,  
   char *mbstr,  
   size_t sizeInBytes,  
   const wchar_t **wcstr,  
   sizeof count,  
   mbstate_t *mbstate  
);  
template <size_t size>  
errno_t wcsrtombs_s(  
   size_t *pReturnValue,  
   char (&mbstr)[size],  
   const wchar_t **wcstr,  
   sizeof count,  
   mbstate_t *mbstate  
); // C++ only  
```  
  
#### Parameters  
 [out] `pReturnValue`  
 The number of characters converted.  
  
 [out] `mbstr`  
 The address of a buffer for the resulting converted multibyte character string.  
  
 [out] `sizeInBytes`  
 The size in bytes of the `mbstr` buffer.  
  
 [in] `wcstr`  
 Points to the wide character string to be converted.  
  
 [in] `count`  
 The maximum number of bytes to be stored in the `mbstr` buffer, or [_TRUNCATE](../../c-runtime-library/truncate.md).  
  
 [in] `mbstate`  
 A pointer to an `mbstate_t` conversion state object.  
  
## Return Value  
 Zero if successful, an error code on failure.  
  
|Error condition|Return value and `errno`|  
|---------------------|------------------------------|  
|`mbstr` is `NULL` and `sizeInBytes` > 0|`EINVAL`|  
|`wcstr` is `NULL`|`EINVAL`|  
|The destination buffer is too small to contain the converted string (unless `count` is `_TRUNCATE`; see Remarks below)|`ERANGE`|  
  
 If any of these conditions occurs, the invalid parameter exception is invoked as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md) . If execution is allowed to continue, the function returns an error code and sets `errno` as indicated in the table.  
  
## Remarks  
 The `wcsrtombs_s` function converts a string of wide characters pointed to by `wcstr` into multibyte characters stored in the buffer pointed to by `mbstr`, using the conversion state contained in `mbstate`. The conversion will continue for each character until one of these conditions is met:  
  
-   A null wide character is encountered  
  
-   A wide character that cannot be converted is encountered  
  
-   The number of bytes stored in the `mbstr` buffer equals `count`.  
  
 The destination string is always null-terminated (even in the case of an error).  
  
 If `count` is the special value [_TRUNCATE](../../c-runtime-library/truncate.md), then `wcsrtombs_s` converts as much of the string as will fit into the destination buffer, while still leaving room for a null terminator.  
  
 If `wcsrtombs_s` successfully converts the source string, it puts the size in bytes of the converted string, including the null terminator, into `*``pReturnValue` (provided `pReturnValue` is not `NULL`). This occurs even if the `mbstr` argument is `NULL` and provides a way to determine the required buffer size. Note that if `mbstr` is `NULL`, `count` is ignored.  
  
 If `wcsrtombs_s` encounters a wide character it cannot convert to a multibyte character, it puts -1 in `*``pReturnValue`, sets the destination buffer to an empty string, sets `errno` to `EILSEQ`, and returns `EILSEQ`.  
  
 If the sequences pointed to by `wcstr` and `mbstr` overlap, the behavior of `wcsrtombs_s` is undefined. `wcsrtombs_s` is affected by the LC_TYPE category of the current locale.  
  
> [!IMPORTANT]
>  Ensure that `wcstr` and `mbstr` do not overlap, and that `count` correctly reflects the number of wide characters to convert.  
  
 The `wcsrtombs_s` function differs from [wcstombs_s, _wcstombs_s_l](../../c-runtime-library/reference/wcstombs-s-wcstombs-s-l.md) by its restartability. The conversion state is stored in `mbstate` for subsequent calls to the same or other restartable functions. Results are undefined when mixing the use of restartable and nonrestartable functions. For example, an application would use `wcsrlen` rather than `wcslen`, if a subsequent call to `wcsrtombs_s` were used instead of `wcstombs_s.`  
  
 In C++, using these functions is simplified by template overloads; the overloads can infer buffer length automatically (eliminating the need to specify a size argument) and they can automatically replace older, non-secure functions with their newer, secure counterparts. For more information, see [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).  
  
## Exceptions  
 The `wcsrtombs_s` function is multithread safe as long as no function in the current thread calls `setlocale` while this function is executing and the `mbstate` is null.  
  
## Example  
  
```  
// crt_wcsrtombs_s.cpp  
//   
// This code example converts a wide  
// character string into a multibyte  
// character string.  
//  
  
#include <stdio.h>  
#include <memory.h>  
#include <wchar.h>  
#include <errno.h>  
  
#define MB_BUFFER_SIZE 100  
  
void main()  
{  
    const wchar_t   wcString[] =   
                    {L"Every good boy does fine."};  
    const wchar_t   *wcsIndirectString = wcString;  
    char            mbString[MB_BUFFER_SIZE];  
    size_t          countConverted;  
    errno_t         err;  
    mbstate_t       mbstate;  
  
    // Reset to initial shift state  
    ::memset((void*)&mbstate, 0, sizeof(mbstate));  
  
    err = wcsrtombs_s(&countConverted, mbString, MB_BUFFER_SIZE,  
                      &wcsIndirectString, MB_BUFFER_SIZE, &mbstate);  
    if (err == EILSEQ)  
    {  
        printf( "An encoding error was detected in the string.\n" );  
    }  
    else   
    {  
        printf( "The string was successfully converted.\n" );  
    }  
}  
```  
  
```Output  
The string was successfully converted.  
```  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`wcsrtombs_s`|\<wchar.h>|  
  
## See Also  
 [Data Conversion](../../c-runtime-library/data-conversion.md)   
 [Locale](../../c-runtime-library/locale.md)   
 [Interpretation of Multibyte-Character Sequences](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)   
 [wcrtomb](../../c-runtime-library/reference/wcrtomb.md)   
 [wcrtomb_s](../../c-runtime-library/reference/wcrtomb-s.md)   
 [wctomb, _wctomb_l](../../c-runtime-library/reference/wctomb-wctomb-l.md)   
 [wcstombs, _wcstombs_l](../../c-runtime-library/reference/wcstombs-wcstombs-l.md)   
 [mbsinit](../../c-runtime-library/reference/mbsinit.md)