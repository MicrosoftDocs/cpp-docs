---
title: "Compiler Error C2245 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2245"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2245"]
ms.assetid: 08aaeadf-10ec-485a-b2a6-6e775289082b
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2245
non-existent member function 'function' specified as friend (member function signature does not match any overload)  
  
 A function specified as a friend was not found by the compiler.  
  
 The following sample generates C2245:  
  
```  
// C2245.cpp  
// compile with: /c  
class B {  
   void f(int i);  
};  
  
class A {  
   int m_i;  
   friend void B::f(char);   // C2245  
   // try the following line instead  
   // friend void B::f(int);  
};  
  
void B::f(int i) {  
   A a;  
   a.m_i = 0;  
}  
```