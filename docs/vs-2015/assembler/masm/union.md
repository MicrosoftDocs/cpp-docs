---
title: "UNION | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
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
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# UNION
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [UNION](https://docs.microsoft.com/cpp/assembler/masm/union).  
  
  
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

