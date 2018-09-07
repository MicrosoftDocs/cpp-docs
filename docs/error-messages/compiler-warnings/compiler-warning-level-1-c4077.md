---
title: "Compiler Warning (level 1) C4077 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4077"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4077"]
ms.assetid: c2d28805-b33f-41ad-afba-33b3f788c649
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 1) C4077
unknown check_stack option  
  
 The old form of the **check_stack** pragma is used with an unknown argument. The argument must be `+`, `-`, `(on)`, `(off)`, or empty.  
  
 The compiler ignores the pragma and leaves the stack checking unchanged.  
  
## Example  
  
```  
// C4077.cpp  
// compile with: /W1 /LD  
#pragma check_stack yes // C4077  
#pragma check_stack +    // Correct old form  
#pragma check_stack (on) // Correct new form  
```