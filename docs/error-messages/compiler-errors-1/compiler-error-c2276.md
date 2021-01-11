---
description: "Learn more about: Compiler Error C2276"
title: "Compiler Error C2276"
ms.date: "11/04/2016"
f1_keywords: ["C2276"]
helpviewer_keywords: ["C2276"]
ms.assetid: 62005ad9-6cb9-4b1f-965d-b875adaf695e
---
# Compiler Error C2276

'operator' : illegal operation on bound member function expression

The compiler found a problem with the syntax to create a pointer-to-member.

The following sample generates C2276:

```cpp
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
