---
title: "UNION"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "union"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "UNION directive"
ms.assetid: 52504abf-7dc1-47c5-944c-b886803a0c6a
caps.latest.revision: 6
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
# UNION
Declares a union of one or more data types. The *fielddeclarations* must be valid data definitions. Omit the [ENDS](../intrinsics/ends--masm-.md) *name* label on nested **UNION** definitions.  
  
## Syntax  
  
```  
  
      name   
      UNION [[alignment]] [[, NONUNIQUE]]  
   fielddeclarations  
[[name]] ENDS  
```  
  
## See Also  
 [Directives Reference](../intrinsics/directives-reference.md)