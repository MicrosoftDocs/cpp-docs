---
title: "Compiler Error C2276 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2276"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2276"]
ms.assetid: 62005ad9-6cb9-4b1f-965d-b875adaf695e
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2276

'operator' : illegal operation on bound member function expression

The compiler found a problem with the syntax to create a pointer-to-member.

The following sample generates C2276:

```
// C2276.cpp
class A {
public:
   int func(){return 0;}
} a;

int (*pf)() = &a.func;   // C2276
// try the following line instead
// int (A::*pf3)() = &A::func;

class B {
public:
   void mf() {
      &this -> mf;   // C2276
      // try the following line instead
      // &B::mf;
   }
};

int main() {
   A a;
   &a.func;   // C2276
   // try the following line instead
   // &A::func;
}
```