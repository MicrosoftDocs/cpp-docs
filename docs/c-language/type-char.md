---
title: "Type char | Microsoft Docs"
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
  - "type char"
  - "unsigned char keyword [C]"
  - "char keyword [C]"
ms.assetid: a5da0866-e780-4793-be87-15a8426e7ea0
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
# Type char
The `char` type is used to store the integer value of a member of the representable character set. That integer value is the ASCII code corresponding to the specified character.  
  
 **Microsoft Specific**  
  
 Character values of type `unsigned char` have a range from 0 to 0xFF hexadecimal. A **signed char** has range 0x80 to 0x7F. These ranges translate to 0 to 255 decimal, and –128 to +127 decimal, respectively. The /J compiler option changes the default from **signed** to `unsigned`.  
  
 **END Microsoft Specific**  
  
## See Also  
 [Storage of Basic Types](../c-language/storage-of-basic-types.md)