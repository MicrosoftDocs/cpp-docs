---
title: "isascii, __isascii, iswascii"
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
  - "iswascii"
  - "__isascii"
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
  - "api-ms-win-crt-string-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "iswascii"
  - "istascii"
  - "__isascii"
  - "_istascii"
  - "isascii"
  - "ctype/isascii"
  - "ctype/__isascii"
  - "corecrt_wctype/iswascii"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "__isascii function"
  - "_isascii function"
  - "isascii function"
  - "_istascii function"
  - "istascii function"
  - "iswascii function"
ms.assetid: ba4325ad-7cb3-4fb9-b096-58906d67971a
caps.latest.revision: 22
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
# isascii, __isascii, iswascii
Determines whether a particular character is an ASCII character.  
  
## Syntax  
  
```  
int __isascii(   
   int c   
);  
int iswascii(   
   wint_t c   
);  
#define isascii __isascii  
```  
  
#### Parameters  
 `c`  
 Integer to test.  
  
## Return Value  
 Each of these routines returns nonzero if `c` is a particular representation of an ASCII character. `__isascii` returns a nonzero value if `c` is an ASCII character (in the range 0x00 – 0x7F). `iswascii` returns a nonzero value if `c` is a wide-character representation of an ASCII character. Each of these routines returns 0 if `c` does not satisfy the test condition.  
  
## Remarks  
 Both `__isascii` and `iswascii` are implemented as macros unless the preprocessor macro _CTYPE_DISABLE_MACROS is defined.  
  
 For backward compatibility, `isascii` is implemented as a macro only if [__STDC\_\_](../c/predefined-macros.md) is not defined or is defined as 0; otherwise it is undefined.  
  
### Generic-Text Routine Mappings  
  
|Tchar.h routine|_UNICODE and _MBCS not defined|_MBCS defined|_UNICODE defined|  
|---------------------|--------------------------------------|--------------------|-----------------------|  
|`_istascii`|`__isascii`|`__isascii`|`iswascii`|  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`isascii`, `__isascii`|C: \<ctype.h><br /><br /> C++: \<cctype> or \<ctype.h>|  
|`iswascii`|C: \<wctype.h>, \<ctype.h>, or \<wchar.h><br /><br /> C++: \<cwctype>, \<cctype>, \<wctype.h>, \<ctype.h>, or \<wchar.h>|  
  
 The `isascii`, `__isascii` and `iswascii` functions are Microsoft specific. For additional compatibility information, see [Compatibility](../crt/compatibility.md) in the Introduction.  
  
## See Also  
 [Character Classification](../crt/character-classification.md)   
 [Locale](../crt/locale.md)   
 [is, isw Routines](../crt/is--isw-routines.md)