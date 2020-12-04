---
description: "Learn more about: Compiler Error C3060"
title: "Compiler Error C3060"
ms.date: "11/04/2016"
f1_keywords: ["C3060"]
helpviewer_keywords: ["C3060"]
ms.assetid: 6282bb92-0546-4b59-9435-d3840bf93bdb
---
# Compiler Error C3060

'member' : a friend function may not be defined inside a class using a qualified name (it may only be declared)

A friend function was defined using a qualified name, which is not allowed.

The following sample generates C3060:

```cpp
// C3060.cpp
class A {
public:
   void func();
};

class C {
public:
   friend void A::func() { }   // C3060
   // Try the following line and the out of class definition:
   // friend void A::func();
};

// void A::func(){}
```
