---
title: "EXTERN (MASM) | Microsoft Docs"
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
  - "extern"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "EXTERN directive"
ms.assetid: 667d703d-3aaf-4139-a586-29bc5dab1aff
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# EXTERN (MASM)
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [EXTERN (MASM)](https://docs.microsoft.com/cpp/assembler/masm/extern-masm).  
  
  
Defines one or more external variables, labels, or symbols called *name* whose type is `type`.  
  
## Syntax  
  
```  
  
   EXTERN [[langtype]] name [[(altid)]] :  
type [[, [[langtype]] name [[(altid)]] :type]]...  
```  
  
## Remarks  
 The `type` can be [ABS](../../assembler/masm/operator-abs.md), which imports *name* as a constant. Same as [EXTRN](../../assembler/masm/extrn.md).  
  
## See Also  
 [Directives Reference](../../assembler/masm/directives-reference.md)

