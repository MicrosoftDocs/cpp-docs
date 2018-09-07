---
title: "Compiler Error C2251 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2251"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2251"]
ms.assetid: fefe050c-f8d3-4316-b237-8007dbcdd3bf
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2251
namespace 'namespace' does not have a member 'member' - Did you mean 'member'?  
  
 The compiler was not able to find an identifier in the specified namespace.  
  
 The following sample generates C2251:  
  
```  
// C2251.cpp  
// compile with: /c  
namespace A {  
   namespace B {  
      void f1();  
   }  
  
   using namespace B;  
}  
  
void A::f1() {}   // C2251  
void A::B::f1() {}   // OK  
```