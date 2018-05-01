---
title: "Compiler Warning (level 3) C4102 | Microsoft Docs"
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
  - "C4102"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4102"
ms.assetid: 349f308a-daf3-48c6-bd53-6c38b73f8880
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 3) C4102
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 3) C4102](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4102).  
  
  
label' : unreferenced label  
  
 The label is defined but never referenced. The compiler ignores the label.  
  
 The following sample generates C4102:  
  
```  
// C4102.cpp  
// compile with: /W3  
int main() {  
   int a;  
  
   test:   // C4102, remove the unreferenced label to resolve  
  
   a = 1;  
}  
```

