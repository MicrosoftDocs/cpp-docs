---
title: "Wide Characters | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
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
  - "wide characters"
ms.assetid: 165c4a12-8ab9-45fb-9964-c55e9956194c
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
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
# Wide Characters
**ANSI 3.1.3.4** The value of an integer character constant that contains more than one character or a wide character constant that contains more than one multibyte character  
  
 The regular character constant, 'ab' has the integer value (int)0x6162. When there is more than one byte, previously read bytes are shifted left by the value of **CHAR_BIT** and the next byte is compared using the bitwise-OR operator with the low **CHAR_BIT** bits. The number of bytes in the multibyte character constant cannot exceed sizeof(int), which is 4 for 32-bit target code.  
  
 The multibyte character constant is read as above and this is converted to a wide-character constant using the `mbtowc` run-time function. If the result is not a valid wide-character constant, an error is issued. In any event, the number of bytes examined by the `mbtowc` function is limited to the value of `MB_CUR_MAX`.  
  
## See Also  
 [Characters](../c-language/characters.md)