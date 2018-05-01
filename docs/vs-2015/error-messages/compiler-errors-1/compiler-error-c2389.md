---
title: "Compiler Error C2389 | Microsoft Docs"
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
  - "C2389"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2389"
ms.assetid: 6122dc81-4ee3-49a5-a67d-d867808c9bac
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2389
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2389](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/compiler-error-c2389).  
  
  
operator' : illegal operand 'nullptr'  
  
 `nullptr` cannot be an operand.  
  
 The following sample generates C2389:  
  
```  
// C2389.cpp  
// compile with: /clr  
int main() {  
   throw nullptr;   // C2389  
}  
```

