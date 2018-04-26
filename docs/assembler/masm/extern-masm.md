---
title: "EXTERN (MASM) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-masm"]
ms.topic: "reference"
f1_keywords: ["extern"]
dev_langs: ["C++"]
helpviewer_keywords: ["EXTERN directive"]
ms.assetid: 667d703d-3aaf-4139-a586-29bc5dab1aff
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# EXTERN (MASM)
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