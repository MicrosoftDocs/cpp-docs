---
description: "Learn more about: Compiler Error C2245"
title: "Compiler Error C2245"
ms.date: "11/04/2016"
f1_keywords: ["C2245"]
helpviewer_keywords: ["C2245"]
ms.assetid: 08aaeadf-10ec-485a-b2a6-6e775289082b
---
# Compiler Error C2245

non-existent member function 'function' specified as friend (member function signature does not match any overload)

A function specified as a friend was not found by the compiler.

The following sample generates C2245:

```cpp
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
