---
title: "ML Nonfatal Error A2031 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-masm"]
ms.topic: "error-reference"
f1_keywords: ["A2031"]
dev_langs: ["C++"]
helpviewer_keywords: ["A2031"]
ms.assetid: d5b11f58-4a00-42be-9062-8fa8728e6306
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# ML Nonfatal Error A2031
**must be index or base register**  
  
 An attempt was made to use a register that was not a base or index register in a memory expression.  
  
 For example, the following expressions cause this error:  
  
```  
[ax]  
[bl]  
```  
  
## See Also  
 [ML Error Messages](../../assembler/masm/ml-error-messages.md)