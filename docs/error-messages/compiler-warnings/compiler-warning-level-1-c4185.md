---
title: "Compiler Warning (level 1) C4185 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4185"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4185"]
ms.assetid: 37e7063a-35b1-4e05-ae31-e811dced02b9
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 1) C4185
ignoring unknown #import attribute 'attribute'  
  
 The attribute is not a valid attribute of `#import`. It is ignored.  
  
## Example  
  
```  
// C4185.cpp  
// compile with: /W1 /c  
#import "stdole2.tlb" no_such_attribute   // C4185  
```