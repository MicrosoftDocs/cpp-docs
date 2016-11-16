---
title: "Demotion of Integers | Microsoft Docs"
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
  - "demoting integers"
ms.assetid: 51fb3654-60b0-4de7-80eb-bd910086c18a
caps.latest.revision: 6
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
# Demotion of Integers
**ANSI 3.2.1.2** The result of converting an integer to a shorter signed integer, or the result of converting an unsigned integer to a signed integer of equal length, if the value cannot be represented  
  
 When a **long** integer is cast to **a short**, or a **short** is cast to a `char`, the least-significant bytes are retained.  
  
 For example, this line  
  
```  
short x = (short)0x12345678L;  
```  
  
 assigns the value 0x5678 to `x`, and this line  
  
```  
char y = (char)0x1234;  
```  
  
 assigns the value 0x34 to `y`.  
  
 When signed variables are converted to unsigned and vice versa, the bit patterns remain the same. For example, casting –2 (0xFE) to an unsigned value yields 254 (also 0xFE).  
  
## See Also  
 [Integers](../c-language/integers.md)