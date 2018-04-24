---
title: "Compiler Warning (level 1) C4077 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C4077"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4077"
ms.assetid: c2d28805-b33f-41ad-afba-33b3f788c649
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4077
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 1) C4077](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4077).  
  
  
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

