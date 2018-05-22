---
title: "Compiler Error C2355 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2355"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2355"
ms.assetid: 0a947881-d61f-4f98-8409-32140f39500b
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2355
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2355](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/compiler-error-c2355).  
  
  
this' : can only be referenced inside non-static member functions or non-static data member initializers  
  
 The `this` pointer is valid only within non-static member functions or in non-static data member initializers. This error can result when the class scope of a member function definition outside of the class declaration is not properly qualified. The error can also occur when the `this` pointer is used in a function that is not declared in the class.  
  
 To fix this issue, make sure the member function definition matches a member function declaration in the class, and that it is not declared static. For data member initializers, make sure the data member is not declared static.  
  
 The following sample generates C2355 and shows how to fix it:  
  
```  
// C2355.cpp  
// compile with: /c  
class MyClass {};  
MyClass *p = this;   // C2355  
  
// OK  
class MyClass2 {  
public:  
   void Test() {  
      MyClass2 *p = this;  
   }  
};  
```

