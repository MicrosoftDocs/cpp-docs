---
title: "Compiler Warning (level 1) C4602 | Microsoft Docs"
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
  - "C4602"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4602"
ms.assetid: c1f0300f-e2a2-4c9e-a7c3-4c7318d10509
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4602
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 1) C4602](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4602).  
  
  
pragma pop_macro : 'macro name' no previous #pragma push_macro for this identifier  
  
 If you use [pop_macro](../../preprocessor/pop-macro.md) for a particular macro, you must first have passed that macro name to [push_macro](../../preprocessor/push-macro.md). For example, the following sample generates C4602:  
  
```  
// C4602.cpp  
// compile with: /W1  
int main()  
{  
   #pragma pop_macro("x")   // C4602 x is not on the stack  
}  
```

