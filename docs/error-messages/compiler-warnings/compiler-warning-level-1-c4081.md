---
title: "Compiler Warning (level 1) C4081 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4081"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4081"]
ms.assetid: 6f656373-a080-4989-bbc9-e2f894b03293
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 1) C4081
expected 'token1'; found 'token2'  
  
 The compiler expected a different token in this context.  
  
## Example  
  
```  
// C4081.cpp  
// compile with: /W1 /LD  
#pragma optimize) "l", on )   // C4081  
```