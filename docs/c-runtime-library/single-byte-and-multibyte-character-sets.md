---
title: "Single-Byte and Multibyte Character Sets | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "c.character.multibyte"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "SBCS (single byte character set)"
  - "MBCS [C++], about MBCS"
  - "character sets [C++], multibyte"
  - "character sets [C++], single byte"
ms.assetid: 2cbc78ea-33c0-4cfb-b0df-7ce2458431ce
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
# Single-Byte and Multibyte Character Sets
The ASCII character set defines characters in the range 0x00 – 0x7F. There are a number of other character sets, primarily European, that define the characters within the range 0x00 – 0x7F identically to the ASCII character set and also define an extended character set from 0x80 – 0xFF. Thus an 8-bit, single-byte-character set (`SBCS`) is sufficient to represent the ASCII character set as well as the character sets for many European languages. However, some non-European character sets, such as Japanese Kanji, include many more characters than can be represented in a single-byte coding scheme, and therefore require multibyte-character set (`MBCS`) encoding.  
  
> [!NOTE]
>  Many `SBCS` routines in the Microsoft run-time library handle multibyte bytes, characters, and strings as appropriate. Many multibyte-character sets define the ASCII character set as a subset. In many multibyte character sets, each character in the range 0x00 – 0x7F is identical to the character that has the same value in the ASCII character set. For example, in both `ASCII` and `MBCS` character strings, the one-byte `NULL` character ('\0') has value 0x00 and indicates the terminating null character.  
  
 A multibyte character set may consist of both one-byte and two-byte characters. Thus a multibyte-character string may contain a mixture of single-byte and double-byte characters. A two-byte multibyte character has a lead byte and a trail byte. In a particular multibyte-character set, the lead bytes fall within a certain range, as do the trail bytes. When these ranges overlap, it may be necessary to evaluate the particular context to determine whether a given byte is functioning as a lead byte or a trail byte.  
  
## See Also  
 [Internationalization](../c-runtime-library/internationalization.md)   
 [Run-Time Routines by Category](../c-runtime-library/run-time-routines-by-category.md)