---
title: "Storage of String Literals | Microsoft Docs"
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
  - "string literals, storage"
ms.assetid: ba5e4d2c-d456-44b3-a8ca-354af547ac50
caps.latest.revision: 9
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
# Storage of String Literals
The characters of a literal string are stored in order at contiguous memory locations. An escape sequence (such as **\\\\** or **\\"**) within a string literal counts as a single character. A null character (represented by the **\0** escape sequence) is automatically appended to, and marks the end of, each string literal. (This occurs during [translation phase](../preprocessor/phases-of-translation.md) 7.) Note that the compiler may not store two identical strings at two different addresses. [/GF](../build/reference/gf-eliminate-duplicate-strings.md) forces the compiler to place a single copy of identical strings into the executable file.  
  
## Remarks  
 **Microsoft Specific**  
  
 Strings have static storage duration. See [Storage Classes](../c-language/c-storage-classes.md) for information about storage duration.  
  
 **END Microsoft Specific**  
  
## See Also  
 [C String Literals](../c-language/c-string-literals.md)