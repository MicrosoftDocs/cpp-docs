---
description: "Learn more about: Compiler Error C2276"
title: "Compiler Error C2276"
ms.date: 03/25/2021
f1_keywords: ["C2276"]
helpviewer_keywords: ["C2276"]
---
# Compiler Error C2276

> '*operator*' : illegal operation on bound member function expression

The compiler found a problem with the syntax used to create a pointer-to-member.

## Remarks

Error `C2276` is often caused when you attempt to create a pointer-to-member by using an instance variable to qualify the member, instead of a class type. You may also see this error if you're trying to call a member function by using the wrong syntax.

## Example

This sample shows several ways C2276 may occur, and how to fix them:

```cpp
// C2276.cpp
class A {
public:
   int func(){return 0;}
} a;

int (*pf)() = &a.func;   // C2276
// pf isn't qualified by the class type, and it 
// tries to take a member address from an instance of A.
// Try the following line instead:
// int (A::*pf)() = &A::func;

class B : public A {
public:
   void mf() {
      auto x = &this -> func;   // C2276
      // try the following line instead
      // auto x = &B::func;
   }
};

int main() {
   A a3;
   auto pmf1 = &a3.func;   // C2276
   // try the following line instead
   // auto pmf1 = &A::func;
}
```
