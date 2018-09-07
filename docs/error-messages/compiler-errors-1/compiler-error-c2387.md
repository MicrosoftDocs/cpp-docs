---
title: "Compiler Error C2387 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2387"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2387"]
ms.assetid: 6847b8e1-ffac-458d-ab88-0c92f72f2527
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2387
'type' : ambiguous base class  
  
 The compiler could not unambiguously resolve a function call because the function exists in more than one base class.  
  
 To resolve this error, either remove one of the base classes from the inheritance, or explicitly qualify the function call.  
  
 The following sample generates C2387:  
  
```  
// C2387.cpp  
namespace N1 {  
   struct B {  
      virtual void f() {  
      }  
   };  
}  
  
namespace N2 {  
   struct B {  
      virtual void f() {  
      }  
   };  
}  
  
struct D : N1::B, N2::B {  
   virtual void f() {  
      B::f();   // C2387  
      // try the following line instead  
      // N1::B::f();  
   }  
};  
  
int main() {  
   D aD;  
   aD.f();  
}  
```