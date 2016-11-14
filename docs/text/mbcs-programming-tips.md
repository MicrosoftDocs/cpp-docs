---
title: "MBCS Programming Tips | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "_mbcs"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "programming [C++], MBCS"
  - "character sets [C++], multibyte"
  - "MBCS [C++], programming"
  - "multibyte characters [C++]"
ms.assetid: d8ad36b8-917f-474e-8adb-69462adecd17
caps.latest.revision: 8
author: "ghogen"
ms.author: "ghogen"
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
# MBCS Programming Tips
In new development, you should use Unicode character encoding for all strings that end users might possibly see. MBCS is a legacy technology that has been superceded by Unicode. This section supplies tips for developers who must maintain existing programs that use MBCS and where it is not practical to convert to Unicode. The advice applies to MFC applications and applications written without MFC. Topics include:  
  
-   [General MBCS Programming Advice](../text/general-mbcs-programming-advice.md)  
  
-   [Incrementing and Decrementing Pointers](../text/incrementing-and-decrementing-pointers.md)  
  
-   [Byte Indices](../text/byte-indices.md)  
  
-   [Last Character in a String](../text/last-character-in-a-string.md)  
  
-   [Character Assignment](../text/character-assignment.md)  
  
-   [Character Comparison](../text/character-comparison.md)  
  
-   [Buffer Overflow](../text/buffer-overflow.md)  
  
## See Also  
 [Support for Multibyte Character Sets (MBCSs)](../text/support-for-multibyte-character-sets-mbcss.md)