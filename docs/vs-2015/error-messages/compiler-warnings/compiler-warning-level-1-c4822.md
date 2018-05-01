---
title: "Compiler Warning (level 1) C4822 | Microsoft Docs"
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
  - "C4822"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4822"
ms.assetid: 0f231a30-2eb0-4722-aaa0-e2d19d3e7eea
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4822
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 1) C4822](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4822).  
  
  
member' : local class member function does not have a body  
  
 A local class member function was declared but not defined in class. To use a local class member function, you must define it in the class. You cannot declare it in class and define it out of class.  
  
 Any out-of-class definition for a local class member function will be an error.  
  
 The following sample generates C4822:  
  
```  
// C4822.cpp  
// compile with: /W1  
int main() {  
   struct C {  
      void func1(int);   // C4822  
      // try the following line instead  
      // void func1(int){}  
  };  
}  
```

