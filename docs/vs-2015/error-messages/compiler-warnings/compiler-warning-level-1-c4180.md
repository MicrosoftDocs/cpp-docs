---
title: "Compiler Warning (level 1) C4180 | Microsoft Docs"
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
  - "C4180"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4180"
ms.assetid: 40c91bd4-37f1-4d59-a4f3-d5ddab68239b
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4180
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 1) C4180](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4180).  
  
  
qualifier applied to function type has no meaning; ignored  
  
 A qualifier, such as **const**, is applied to a function type defined by `typedef`.  
  
## Example  
  
```  
// C4180.cpp  
// compile with: /W1 /c  
typedef int FuncType(void);  
  
// the const qualifier cannot be applied to the  
// function type FuncType  
const FuncType f;   // C4180  
```

