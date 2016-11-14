---
title: "Improper Access to a Union | Microsoft Docs"
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
ms.assetid: b273d984-62a8-4003-9a87-bf0149d3f2dd
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
# Improper Access to a Union
**ANSI 3.3.2.3** A member of a union object is accessed using a member of a different type  
  
 If a union of two types is declared and one value is stored, but the union is accessed with the other type, the results are unreliable.  
  
 For example, a union of **float** and `int` is declared. A **float** value is stored, but the program later accesses the value as an `int`. In such a situation, the value would depend on the internal storage of **float** values. The integer value would not be reliable.  
  
## See Also  
 [Structures, Unions, Enumerations, and Bit Fields](../c-language/structures-unions-enumerations-and-bit-fields.md)