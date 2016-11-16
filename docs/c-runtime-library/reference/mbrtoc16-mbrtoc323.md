---
title: "mbrtoc16, mbrtoc323 | Microsoft Docs"
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
  - "mbrtoc16"
  - "mbrtoc32"
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
  - "mbrtoc16"
  - "mbrtoc32"
  - "uchar/mbrtoc16"
  - "uchar/mbrtoc32"
dev_langs: 
  - "C"
  - "C++"
helpviewer_keywords: 
  - "mbrtoc16 function"
  - "mbrtoc32 function"
ms.assetid: 099ade4d-56f7-4e61-8b45-493f1d7a64bd
caps.latest.revision: 5
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
# mbrtoc16, mbrtoc32
Translates the first multibyte character in a narrow string into the equivalent UTF-16 or UTF-32 character.  
  
## Syntax  
  
```  
size_t mbrtoc16(   
   char16_t* destination,   
   const char* source,   
   size_t max_bytes,   
   mbstate_t* state   
);  
  
size_t mbrtoc32(  
   char32_t* destination,   
   const char* source,   
   size_t max_bytes,   
   mbstate_t* state   
);  
  
```  
  
#### Parameters  
 `destination`  
 Pointer to the `char16_t` or `char32_t` equivalent of the multibyte character to convert. If null, the function does not store a value.  
  
 `source`  
 Pointer to the multibyte character string to convert.  
  
 `max_bytes`  
 The maximum number of bytes in `source` to examine for a character to convert. This should be a value between one and the number of bytes, including any null terminator, remaining in `source`.  
  
 `state`  
 Pointer to a `mbstate_t` conversion state object used to interpret the multibyte string to one or more output characters.  
  
## Return Value  
 On success, returns the value of the first of these conditions that applies, given the current `state` value:  
  
|Value|Condition|  
|-----------|---------------|  
|0|The next `max_bytes` or fewer characters converted from `source` correspond to the null wide character, which is the value stored if `destination` is not null.<br /><br /> `state` contains the initial shift state.|  
|Between 1 and `max_bytes`, inclusive|The value returned is the number of bytes of `source` that complete a valid multibyte character. The converted wide character is stored  if `destination` is not null.|  
|-3|The next wide character resulting from a previous call to the function has been stored in `destination` if `destination` is not null. No bytes from `source` are consumed by this call to the function.<br /><br /> When  `source` points to a multibyte character that requires more than one wide character to represent (for example, a surrogate pair), then the `state` value is updated so that the next function call writes  out the additional character.|  
|-2|The next `max_bytes` bytes represent an incomplete, but potentially valid, multibyte character. No value is stored in `destination`. This result can occur if `max_bytes` is zero.|  
|-1|An encoding error has occurred. The next `max_bytes` or fewer bytes do not contribute to a complete and valid multibyte character. No value is stored in `destination`.<br /><br /> `EILSEQ` is stored in `errno` and the conversion state `state` is unspecified.|  
  
## Remarks  
 The `mbrtoc16` function reads up to `max_bytes` bytes from `source` to find  the first complete, valid multibyte character, and then stores the equivalent UTF-16 character in `destination`. The source bytes are interpreted according to the current thread multibyte locale. If the multibyte character requires more than one UTF-16 output character, such as a surrogate pair, then the `state` value is set to store the next UTF-16 character in `destination` on the next call to `mbrtoc16`. The `mbrtoc32` function is identical, but output is stored as a UTF-32 character.  
  
 If `source` is null, these functions return the equivalent of a call made using arguments of `NULL` for `destination`, `""` for `source`,  and `1` for `max_bytes`. The passed values of `destination` and `max_bytes` are ignored.  
  
 If `source` is not null, the function starts at the beginning of the string and inspects up to `max_bytes` bytes to determine the number of bytes required to complete the next multibyte character, including any shift sequences. If the examined bytes contain a valid and complete multibyte character, the function converts the character into the equivalent 16-bit or 32-bit wide character or characters. If `destination` is not null, the function stores the first (and possibly only) result character in destination. If additional output characters are required, a value is set in `state`, so that subsequent calls to the function output the additional characters and return the value -3. If no more output characters are required, then `state` is set to the initial shift state.  
  
## Requirements  
  
|Function|C header|C++ header|  
|--------------|--------------|------------------|  
|`mbrtoc16`,                `mbrtoc32`|\<uchar.h>|\<cuchar>|  
  
 For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).  
  
## See Also  
 [Data Conversion](../../c-runtime-library/data-conversion.md)   
 [Locale](../../c-runtime-library/locale.md)   
 [Interpretation of Multibyte-Character Sequences](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)   
 [c16rtomb, c32rtomb](../../c-runtime-library/reference/c16rtomb-c32rtomb1.md)   
 [mbrtowc](../../c-runtime-library/reference/mbrtowc.md)   
 [mbsrtowcs](../../c-runtime-library/reference/mbsrtowcs.md)   
 [mbsrtowcs_s](../../c-runtime-library/reference/mbsrtowcs-s.md)