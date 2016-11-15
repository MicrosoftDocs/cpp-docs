---
title: "SBCS and MBCS Data Types | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "MBCS"
  - "SBCS"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "SBCS and MBCS data types"
  - "data types [C], MBCS and SBCS"
ms.assetid: 4c3ef9da-e397-48d4-800e-49dba36db171
caps.latest.revision: 10
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
# SBCS and MBCS Data Types
Any Microsoft `MBCS` run-time library routine that handles only one multibyte character or one byte of a multibyte character expects an `unsigned``int` argument (where 0x00 <= character value <= 0xFFFF and 0x00 <= byte value <= 0xFF ). An `MBCS` routine that handles multibyte bytes or characters in a string context expects a multibyte-character string to be represented as an `unsigned``char` pointer.  
  
> [!CAUTION]
>  Each byte of a multibyte character can be represented in an 8-bit `char`. However, an `SBCS` or `MBCS` single-byte character of type `char` with a value greater than 0x7F is negative. When such a character is converted directly to an `int` or a `long`, the result is sign-extended by the compiler and can therefore yield unexpected results.  
  
 Therefore it is best to represent a byte of a multibyte character as an 8-bit `unsigned char`. Or, to avoid a negative result, simply convert a single-byte character of type `char` to an `unsigned char` before converting it to an `int` or a `long`.  
  
 Because some `SBCS` string-handling functions take (signed) `char*` parameters, a type mismatch compiler warning will result when `_MBCS` is defined. There are three ways to avoid this warning, listed in order of efficiency:  
  
1.  Use the "type-safe" inline functions in TCHAR.H. This is the default behavior.  
  
2.  Use the "direct" macros in TCHAR.H by defining `_MB_MAP_DIRECT` on the command line. If you do this, you must manually match types. This is the fastest method but is not type-safe.  
  
3.  Use the "type-safe" statically linked library functions in TCHAR.H. To do so, define the constant `_NO_INLINING` on the command line. This is the slowest method, but the most type-safe.  
  
## See Also  
 [Internationalization](../c-runtime-library/internationalization.md)   
 [Run-Time Routines by Category](../c-runtime-library/run-time-routines-by-category.md)