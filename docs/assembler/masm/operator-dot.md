---
title: "operator dot | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "operator ."
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "dot operator (.)"
  - "operator ."
  - ". operator"
ms.assetid: 468ea0c8-5b08-47be-991b-38abacb77611
caps.latest.revision: 6
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
# operator .
The first operator returns *expression* plus the offset of *field* within its structure or union. The second operator returns value at the location pointed to by *register* plus the offset of *field* within its structure or union.  
  
## Syntax  
  
```  
  
      expression  
      . field [[. field]]...  
[register]. field [[. field]]...  
```  
  
## See Also  
 [Operators Reference](../../assembler/masm/operators-reference.md)