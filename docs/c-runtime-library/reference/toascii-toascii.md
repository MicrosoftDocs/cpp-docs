---
title: "toascii, __toascii | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "__toascii"
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
  - "__toascii"
  - "toascii"
  - "ctype/toascii"
  - "ctype/__toascii"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "toascii function"
  - "string conversion, to ASCII characters"
  - "__toascii function"
  - "ASCII characters, converting to"
ms.assetid: a07c0608-b0e2-4da2-a20c-7b64d6a9b77c
caps.latest.revision: 13
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
# toascii, __toascii
Converts characters to 7-bit ASCII by truncation.  
  
## Syntax  
  
```  
int __toascii(  
   int c   
);  
#define toascii __toascii  
```  
  
#### Parameters  
 `c`  
 Character to convert.  
  
## Return Value  
 `__toascii` converts the value of `c` to the 7-bit ASCII range and returns the result. There is no return value reserved to indicate an error.  
  
## Remarks  
 The `__toascii` routine converts the given character to an ASCII character by truncating it to the low-order 7 bits. No other transformation is applied.  
  
 The `__toascii` routine is defined as a macro unless the preprocessor macro _CTYPE_DISABLE_MACROS is defined. For backward compatibility, `toascii` is defined as a macro only when [__STDC\_\_](../../preprocessor/predefined-macros.md) is not defined or is defined as 0; otherwise it is undefined.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`toascii`, `__toascii`|C: \<ctype.h><br /><br /> C++: \<cctype> or \<ctype.h>|  
  
 The `toascii` macro is a POSIX extension, and `__toascii` is a Microsoft-specific implementation of the POSIX extension. For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.  
  
## See Also  
 [Data Conversion](../../c-runtime-library/data-conversion.md)   
 [is, isw Routines](../../c-runtime-library/is-isw-routines.md)   
 [to Functions](../../c-runtime-library/to-functions.md)