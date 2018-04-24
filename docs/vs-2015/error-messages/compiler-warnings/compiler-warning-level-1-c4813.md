---
title: "Compiler Warning (level 1) C4813 | Microsoft Docs"
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
  - "C4813"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4813"
ms.assetid: c30bf877-ab04-4fe4-897e-8162092426f0
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4813
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 1) C4813](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4813).  
  
  
function' : a friend function of a local class must have been previously declared  
  
 A friend function in an inner class was not declared in the outer class.  
  
 The following sample generates C4813:  
  
```  
// C4813.cpp  
// compile with: /W1 /LD  
void MyClass()  
{  
   // void func();  
   class InnerClass  
   {  
      friend void func();   // C4813 uncomment declaration above  
   };  
}  
```

