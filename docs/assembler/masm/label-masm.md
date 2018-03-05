---
title: "LABEL (MASM) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: ["Label"]
dev_langs: ["C++"]
helpviewer_keywords: ["LABEL directive"]
ms.assetid: 39ec44e8-91e6-4f3c-8cf0-b66479974e42
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# LABEL (MASM)
Creates a new label by assigning the current location-counter value and the given `type` to *name*.  
  
## Syntax  
  
```  
  
      name LABEL type  
name LABEL [[NEAR | FAR | PROC]] PTR [[type]]   
```  
  
## See Also  
 [Directives Reference](../../assembler/masm/directives-reference.md)