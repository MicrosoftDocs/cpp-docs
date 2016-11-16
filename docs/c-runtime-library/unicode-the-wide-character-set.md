---
title: "Unicode: The Wide-Character Set | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "c.international"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "Unicode [C++], wide character set"
  - "wide characters [C++], Unicode"
ms.assetid: b6a05a21-59a5-4d30-8c85-2dbe185f7a74
caps.latest.revision: 8
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
# Unicode: The Wide-Character Set
A wide character is a 2-byte multilingual character code. Any character in use in modern computing worldwide, including technical symbols and special publishing characters, can be represented according to the Unicode specification as a wide character. Developed and maintained by a large consortium that includes Microsoft, the Unicode standard is now widely accepted.  
  
 A wide character is of type `wchar_t`. A wide-character string is represented as a `wchar_t[]` array and is pointed to by a `wchar_t*` pointer. You can represent any ASCII character as a wide character by prefixing the letter `L` to the character. For example, L'\0' is the terminating wide (16-bit) `NULL` character. Similarly, you can represent any ASCII string literal as a wide-character string literal simply by prefixing the letter L to the ASCII literal (L"Hello").  
  
 Generally, wide characters take up more space in memory than multibyte characters but are faster to process. In addition, only one locale can be represented at a time in multibyte encoding, whereas all character sets in the world are represented simultaneously by the Unicode representation.  
  
## See Also  
 [Internationalization](../c-runtime-library/internationalization.md)   
 [Run-Time Routines by Category](../c-runtime-library/run-time-routines-by-category.md)