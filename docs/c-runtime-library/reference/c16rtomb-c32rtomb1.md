---
title: "c16rtomb, c32rtomb1 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "cpp"
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "c16rtomb"
  - "c32rtomb"
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
  - "c16rtomb"
  - "c32rtomb"
  - "uchar/c16rtomb"
  - "uchar/c32rtomb"
dev_langs: 
  - "C"
  - "C++"
helpviewer_keywords: 
  - "c16rtomb function"
  - "c32rtomb function"
ms.assetid: 7f5743ca-a90e-4e3f-a310-c73e16f4e14d
caps.latest.revision: 3
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
# c16rtomb, c32rtomb
Convert a UTF-16 or UTF-32 wide character into a multibyte character in the current locale.  
  
## Syntax  
  
```  
size_t c16rtomb(  
    char *mbchar,   
    char16_t wchar,  
    mbstate_t *state  
);  
size_t c32rtomb(  
    char *mbchar,   
    char32_t wchar,  
    mbstate_t *state  
);  
```  
  
#### Parameters  
 [out] `mbchar`  
 Pointer to an array to store the multibyte converted character.  
  
 [in] `wchar`  
 A wide character to convert.  
  
 [in, out] `state`  
 A pointer to an `mbstate_t` object.  
  
## Return Value  
 The number of bytes stored in array object `mbchar`, including any shift sequences. If `wchar` is not a valid wide character, the value (`size_t`)(-1) is returned, `errno` is set to `EILSEQ`, and the value of `state` is unspecified.  
  
## Remarks  
 The `c16rtomb` function converts the UTF-16 character `wchar` to the equivalent multibyte narrow character sequence in the current locale. If `mbchar` is not a null pointer, the function stores the converted sequence in the array object pointed to by `mbchar`. Up to `MB_CUR_MAX` bytes are stored in `mbchar`, and `state` is set to the resulting multibyte shift state.    If `wchar` is a null wide character, a sequence required to restore the initial shift state is stored, if needed, followed by the null character, and `state` is set to the initial conversion state. The `c32rtomb` function is identical, but converts a UTF-32 character.  
  
 If `mbchar` is a null pointer, the behavior is equivalent to a call to the function that substitutes an internal buffer for `mbchar` and a wide null character for `wchar`.  
  
 The `state` conversion state object allows you to make subsequent calls to this function and other restartable functions that maintain the shift state of the multibyte output characters. Results are undefined when you mix the use of restartable and non-restartable functions, or if a call to `setlocale` is made between restartable function calls.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`c16rtomb`, `c32rtomb`|C, C++: \<uchar.h>|  
  
 For compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).  
  
## See Also  
 [Data Conversion](../../c-runtime-library/data-conversion.md)   
 [Locale](../../c-runtime-library/locale.md)   
 [Interpretation of Multibyte-Character Sequences](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)   
 [mbrtoc16, mbrtoc32](../../c-runtime-library/reference/mbrtoc16-mbrtoc323.md)   
 [wcrtomb](../../c-runtime-library/reference/wcrtomb.md)   
 [wcrtomb_s](../../c-runtime-library/reference/wcrtomb-s.md)