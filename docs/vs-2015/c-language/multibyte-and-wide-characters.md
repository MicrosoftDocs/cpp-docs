---
title: "Multibyte and Wide Characters | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "globalization [C++], character sets"
  - "character data types [C]"
  - "Unicode [C++], wide character set"
  - "types [C], character"
  - "characters [C++], wide"
  - "international applications [C++], character display"
  - "multibyte characters [C++]"
  - "wide characters [C++]"
  - "characters [C++], codes"
  - "character codes [C++], wide"
  - "character codes [C++], multibyte"
ms.assetid: 1943c469-200d-4724-b18f-781d70520f9e
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Multibyte and Wide Characters
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Multibyte and Wide Characters](https://docs.microsoft.com/cpp/c-language/multibyte-and-wide-characters).  
  
A multibyte character is a character composed of sequences of one or more bytes. Each byte sequence represents a single character in the extended character set. Multibyte characters are used in character sets such as Kanji.  
  
 Wide characters are multilingual character codes that are always 16 bits wide. The type for character constants is `char`; for wide characters, the type is `wchar_t`. Since wide characters are always a fixed size, using wide characters simplifies programming with international character sets.  
  
 The wide-character-string literal `L"hello"` becomes an array of six integers of type `wchar_t`.  
  
```  
{L'h', L'e', L'l', L'l', L'o', 0}  
```  
  
 The Unicode specification is the specification for wide characters. The run-time library routines for translating between multibyte and wide characters include `mbstowcs`, `mbtowc`, `wcstombs`, and `wctomb`.  
  
## See Also  
 [C Identifiers](../c-language/c-identifiers.md)





