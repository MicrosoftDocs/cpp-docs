---
title: "Compiler Error C2875 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2875"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2875"]
ms.assetid: d589fc0c-08b2-4a79-bc0e-dca5eb80bdd5
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2875
using-declaration causes a multiple declaration of 'class::identifier'  
  
 The declaration causes the same item to be defined twice.  
  
 The following sample generates C2875:  
  
```  
// C2875.cpp  
struct A {  
   void f(int*);  
};  
  
struct B {  
   void f(double*);  
};  
  
struct AB : A, B {  
   using A::f;  
   using A::f;   // C2875  
   using B::f;  
};  
```