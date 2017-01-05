---
title: "mbsrtowcs_s | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "mbsrtowcs_s"
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
  - "mbsrtowcs_s"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "mbsrtowcs_s function"
ms.assetid: 4ee084ec-b15d-4e5a-921d-6584ec3b5a60
caps.latest.revision: 24
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
# mbsrtowcs_s
Convert a multibyte character string in the current locale to its wide character string representation. A version of [mbsrtowcs](../../c-runtime-library/reference/mbsrtowcs.md) with security enhancements as described in [Security Features in the CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
## Syntax  
  
```  
errno_t mbsrtowcs_s(  
   size_t * pReturnValue,  
   wchar_t * wcstr,  
   size_t sizeInWords,  
   const char ** mbstr,  
   size_t count,  
   mbstate_t * mbstate  
);  
template <size_t size>  
errno_t mbsrtowcs_s(  
   size_t * pReturnValue,  
   wchar_t (&wcstr)[size],  
   const char ** mbstr,  
   size_t count,  
   mbstate_t * mbstate  
); // C++ only  
```  
  
#### Parameters  
 [out] `pReturnValue`  
 The number of characters converted.  
  
 [out] `wcstr`  
 Address of buffer to store the resulting converted wide character string.  
  
 [out] `sizeInWords`  
 The size of `wcstr` in words (wide characters).  
  
 [in, out] `mbstr`  
 Indirect pointer to the location of the multibyte character string to be converted.  
  
 [in] `count`  
 The maximum number of wide characters to store in the `wcstr` buffer, not including the terminating null, or [_TRUNCATE](../../c-runtime-library/truncate.md).  
  
 [in, out] `mbstate`  
 A pointer to an `mbstate_t` conversion state object. If this value is a null pointer, a static internal conversion state object is used. Because the internal `mbstate_t` object is not thread-safe, we recommend that you always pass your own `mbstate` parameter.  
  
## Return Value  
 Zero if conversion is successful, or an error code on failure.  
  
|Error condition|Return value and `errno`|  
|---------------------|------------------------------|  
|`wcstr` is a null pointer and `sizeInWords` > 0|`EINVAL`|  
|`mbstr` is a null pointer|`EINVAL`|  
|The string indirectly pointed to by `mbstr` contains a multibyte sequence that is not valid for the current locale.|`EILSEQ`|  
|The destination buffer is too small to contain the converted string (unless `count` is `_TRUNCATE`; for more information, see Remarks)|`ERANGE`|  
  
 If any one of these conditions occurs, the invalid parameter exception is invoked as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md) . If execution is allowed to continue, the function returns an error code and sets `errno` as indicated in the table.  
  
## Remarks  
 The `mbsrtowcs_s` function converts a string of multibyte characters indirectly pointed to by `mbstr` into wide characters stored in the buffer pointed to by `wcstr`, by using the conversion state contained in `mbstate`. The conversion will continue for each character until one of these conditions is met:  
  
-   A multibyte null character is encountered  
  
-   An invalid multibyte character is encountered  
  
-   The number of wide characters stored in the `wcstr` buffer equals `count`.  
  
 The destination string `wcstr` is always null-terminated, even in the case of an error, unless `wcstr` is a null pointer.  
  
 If `count` is the special value [_TRUNCATE](../../c-runtime-library/truncate.md), `mbsrtowcs_s` converts as much of the string as will fit into the destination buffer, while still leaving room for a null terminator.  
  
 If `mbsrtowcs_s` successfully converts the source string, it puts the size in wide characters of the converted string and the null terminator into `*``pReturnValue`, provided `pReturnValue` is not a null pointer. This occurs even if the `wcstr` argument is a null pointer and lets you determine the required buffer size. Note that if `wcstr` is a null pointer, `count` is ignored.  
  
 If `wcstr` is not a null pointer, the pointer object pointed to by `mbstr` is assigned a null pointer if conversion stopped because a terminating null character was reached. Otherwise, it is assigned the address just past the last multibyte character converted, if any. This allows a subsequent function call to restart conversion where this call stopped.  
  
 If `mbstate` is a null pointer, the library internal `mbstate_t` conversion state static object is used. Because this internal static object is not thread-safe, we recommend that you pass your own `mbstate` value.  
  
 If `mbsrtowcs_s` encounters a multibyte character that is not valid in the current locale, it puts -1 in `*``pReturnValue`, sets the destination buffer `wcstr` to an empty string, sets `errno` to `EILSEQ`, and returns `EILSEQ`.  
  
 If the sequences pointed to by `mbstr` and `wcstr` overlap, the behavior of `mbsrtowcs_s` is undefined. `mbsrtowcs_s` is affected by the LC_TYPE category of the current locale.  
  
> [!IMPORTANT]
>  Ensure that `wcstr` and `mbstr` do not overlap, and that `count` correctly reflects the number of multibyte characters to convert.  
  
 The `mbsrtowcs_s` function differs from [mbstowcs_s, _mbstowcs_s_l](../../c-runtime-library/reference/mbstowcs-s-mbstowcs-s-l.md) by its restartability. The conversion state is stored in `mbstate` for subsequent calls to the same or other restartable functions. Results are undefined when mixing the use of restartable and nonrestartable functions. For example, an application should use `mbsrlen` instead of `mbslen`, if a subsequent call to `mbsrtowcs_s` is used instead of `mbstowcs_s.`  
  
 In C++, using this function is simplified by template overloads; the overloads can infer buffer length automatically (eliminating the requirement to specify a size argument) and they can automatically replace older, non-secure functions by using their newer, secure counterparts. For more information, see [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).  
  
## Exceptions  
 The `mbsrtowcs_s` function is multithread safe if no function in the current thread calls `setlocale` as long as this function is executing and the `mbstate` argument is not a null pointer.  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`mbsrtowcs_s`|\<wchar.h>|  
  
## See Also  
 [Data Conversion](../../c-runtime-library/data-conversion.md)   
 [Locale](../../c-runtime-library/locale.md)   
 [Interpretation of Multibyte-Character Sequences](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)   
 [mbrtowc](../../c-runtime-library/reference/mbrtowc.md)   
 [mbtowc, _mbtowc_l](../../c-runtime-library/reference/mbtowc-mbtowc-l.md)   
 [mbstowcs_s, _mbstowcs_s_l](../../c-runtime-library/reference/mbstowcs-s-mbstowcs-s-l.md)   
 [mbsinit](../../c-runtime-library/reference/mbsinit.md)