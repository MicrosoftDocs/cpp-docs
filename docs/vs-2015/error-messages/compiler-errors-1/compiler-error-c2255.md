---
title: "Compiler Error C2255 | Microsoft Docs"
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
  - "C2255"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2255"
ms.assetid: 67dc4cb0-de6b-4405-bd64-d47736367a93
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2255
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2255](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/compiler-error-c2255).  
  
  
element' : not allowed outside of a class definition  
  
 For example, a nonmember function is declared a `friend`.  
  
 The following sample generates C2255:  
  
```  
// C2255.cpp  
// compile with: /c  
class A {  
private:  
   void func1();  
   friend void func2();  
};  
  
friend void func1() {}   // C2255  
void func2(){}  
```

