---
title: "Compiler Warning (level 1) C4081 | Microsoft Docs"
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
  - "C4081"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4081"
ms.assetid: 6f656373-a080-4989-bbc9-e2f894b03293
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4081
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 1) C4081](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4081).  
  
  
expected 'token1'; found 'token2'  
  
 The compiler expected a different token in this context.  
  
## Example  
  
```  
// C4081.cpp  
// compile with: /W1 /LD  
#pragma optimize) "l", on )   // C4081  
```

