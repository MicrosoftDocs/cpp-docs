---
title: "Compiler Error C2600 | Microsoft Docs"
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
  - "C2600"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2600"
ms.assetid: cce11943-ea01-4bee-a7b0-b67d24ec6493
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2600
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2600](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2600).  
  
  
function' : cannot define a compiler-generated special member function (must be declared in the class first)  
  
 Before member functions such as constructors or destructors can be defined for a class, they must be declared in the class. The compiler can generate default constructors and destructors (called special member functions) if none are declared in the class. However, if you define one of these functions without a matching declaration in the class, the compiler detects a conflict.  
  
 To fix this error, in the class declaration, declare each member function that you define outside the class declaration.  
  
 The following sample generates C2600:  
  
```  
// C2600.cpp  
// compile with: /c  
class C {};  
C::~C() {}   // C2600  
  
class D {  
   D::~D();  
};  
  
D::~D() {}  
```

