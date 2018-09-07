---
title: "Compiler Error C2550 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2550"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2550"]
ms.assetid: 3293f53e-ee66-4035-920d-34e115c3a24c
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2550
'identifier' : constructor initializer lists are only allowed on constructor definitions  
  
 A base class initializer list is used on the definition of a function that is not a constructor.  
  
 The following sample generates C2550:  
  
```  
// C2550.cpp  
// compile with: /c  
class C {  
public:  
   C();  
};  
  
class D : public C {  
public:  
   D();  
   void func();  
};  
  
void D::func() : C() {}  // C2550  
D::D() : C() {}   // OK  
```