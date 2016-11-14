---
title: "UNION | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "union"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "UNION directive"
ms.assetid: 52504abf-7dc1-47c5-944c-b886803a0c6a
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
# UNION
Declares a union of one or more data types. The *fielddeclarations* must be valid data definitions. Omit the [ENDS](../../assembler/masm/ends-masm.md) *name* label on nested **UNION** definitions.  
  
## Syntax  
  
```  
  
      name   
      UNION [[alignment]] [[, NONUNIQUE]]  
   fielddeclarations  
[[name]] ENDS  
```  
  
## See Also  
 [Directives Reference](../../assembler/masm/directives-reference.md)