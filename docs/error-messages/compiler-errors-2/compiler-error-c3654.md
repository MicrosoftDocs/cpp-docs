---
title: "Compiler Error C3654 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3654"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3654"]
ms.assetid: 57d96e3f-6bbb-4eaa-934b-26c23b4ceb2e
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3654
'text' : syntax error in explicit override  
  
 An unexpected string was in an explicit override. For more information, see [Explicit Overrides](../../windows/explicit-overrides-cpp-component-extensions.md).  
  
 The following sample generates C3654:  
  
```  
// C3654.cpp  
// compile with: /clr /c  
public ref struct B {  
   virtual void f() = 0;  
   virtual void g() = 0;  
   virtual void h() = 0;  
};  
  
public ref struct Q : B {  
   virtual void f() = B::f, 3 {}   // C3654  
   // try the following line instead  
   // virtual void g() = B::g, B::h {}  
};  
```