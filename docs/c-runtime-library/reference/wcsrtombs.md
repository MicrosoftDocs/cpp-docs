---
title: "wcsrtombs | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "wcsrtombs"
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
  - "wcsrtombs"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "wcsrtombs function"
  - "string conversion, wide characters"
  - "wide characters, strings"
ms.assetid: a8d21fec-0d36-4085-9d81-9b1c61c7259d
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
# wcsrtombs
Convert a wide character string to its multibyte character string representation. A more secure version of this function is available; see [wcsrtombs_s](../../c-runtime-library/reference/wcsrtombs-s.md).  
  
## Syntax  
  
```  
size_t wcsrtombs(  
   char *mbstr,  
   const wchar_t **wcstr,  
   sizeof count,  
   mbstate_t *mbstate  
);  
template <size_t size>  
size_t wcsrtombs(  
   char (&mbstr)[size],  
   const wchar_t **wcstr,  
   sizeof count,  
   mbstate_t *mbstate  
); // C++ only  
```  
  
#### Parameters  
 [out] `mbstr`  
 The resulting converted multibyte character string's address location.  
  
 [in] `wcstr`  
 Indirectly points to the location of the wide character string to be converted.  
  
 [in] `count`  
 The number of character to be converted.  
  
 [in] `mbstate`  
 A pointer to an `mbstate_t` conversion state object.  
  
## Return Value  
 Returns the number of bytes successfully converted, not including the null terminating null byte (if any), otherwise a -1 if an error occurred.  
  
## Remarks  
 The `wcsrtombs` function converts a string of wide characters, beginning in the specified conversion state contained in `mbstate`, from the values indirect pointed to in `wcstr`, into the address of `mbstr`. The conversion will continue for each character until: after a null terminating wide character is encountered, when a non corresponding character is encountered or when the next character would exceed the limit contained in `count`. If `wcsrtombs` encounters the wide-character null character (L'\0') either before or when `count` occurs, it converts it to an 8-bit 0 and stops.  
  
 Thus, the multibyte character string at `mbstr` is null-terminated only if `wcsrtombs` encounters a wide character null character during conversion. If the sequences pointed to by `wcstr` and `mbstr` overlap, the behavior of `wcsrtombs` is undefined. `wcsrtombs` is affected by the LC_TYPE category of the current locale.  
  
 The `wcsrtombs` function differs from [wcstombs, _wcstombs_l](../../c-runtime-library/reference/wcstombs-wcstombs-l.md) by its restartability. The conversion state is stored in `mbstate` for subsequent calls to the same or other restartable functions. Results are undefined when mixing the use of restartable and nonrestartable functions.  For example, an application would use `wcsrlen` rather than `wcsnlen`, if a subsequent call to `wcsrtombs` were used instead of `wcstombs`.  
  
 If the `mbstr` argument is `NULL`, `wcsrtombs` returns the required size in bytes of the destination string. If `mbstate` is null, the internal `mbstate_t` conversion state is used. If the character sequence `wchar` does not have a corresponding multibyte character representation, a -1 is returned and the `errno` is set to `EILSEQ`.  
  
 In C++, this function has a template overload that invokes the newer, secure counterpart of this function. For more information, see [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).  
  
## Exceptions  
 The `wcsrtombs` function is multithread safe as long as no function in the current thread calls `setlocale` while this function is executing and the `mbstate` is not null.  
  
## Example  
  
```  
// crt_wcsrtombs.cpp  
// compile with: /W3  
// This code example converts a wide  
// character string into a multibyte  
// character string.  
  
#include <stdio.h>  
#include <memory.h>  
#include <wchar.h>  
#include <errno.h>  
  
#define MB_BUFFER_SIZE 100  
  
int main()  
{  
    const wchar_t   wcString[] =   
                    {L"Every good boy does fine."};  
    const wchar_t   *wcsIndirectString = wcString;  
    char            mbString[MB_BUFFER_SIZE];  
    size_t          countConverted;  
    mbstate_t       mbstate;  
  
    // Reset to initial shift state  
    ::memset((void*)&mbstate, 0, sizeof(mbstate));  
  
    countConverted = wcsrtombs(mbString, &wcsIndirectString,  
                               MB_BUFFER_SIZE, &mbstate); // C4996  
    // Note: wcsrtombs is deprecated; consider using wcsrtombs_s  
    if (errno == EILSEQ)  
    {  
        printf( "An encoding error was detected in the string.\n" );  
    }  
    else   
    {  
        printf( "The string was successfuly converted.\n" );  
    }  
}  
```  
  
```Output  
The string was successfuly converted.  
```  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`wcsrtombs`|\<wchar.h>|  
  
## See Also  
 [Data Conversion](../../c-runtime-library/data-conversion.md)   
 [Locale](../../c-runtime-library/locale.md)   
 [Interpretation of Multibyte-Character Sequences](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)   
 [wcrtomb](../../c-runtime-library/reference/wcrtomb.md)   
 [wcrtomb_s](../../c-runtime-library/reference/wcrtomb-s.md)   
 [wctomb, _wctomb_l](../../c-runtime-library/reference/wctomb-wctomb-l.md)   
 [wcstombs, _wcstombs_l](../../c-runtime-library/reference/wcstombs-wcstombs-l.md)   
 [mbsinit](../../c-runtime-library/reference/mbsinit.md)