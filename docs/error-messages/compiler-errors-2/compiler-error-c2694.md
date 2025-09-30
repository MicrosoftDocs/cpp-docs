---
title: "Compiler Error C2694"
description: "Learn more about: Compiler Error C2694"
ms.date: 11/04/2016
f1_keywords: ["C2694"]
helpviewer_keywords: ["C2694"]
---
# Compiler Error C2694

> 'override': overriding virtual function has less restrictive exception specification than base class virtual member function 'base'

## Remarks

A virtual function was overridden, but under [/Za](../../build/reference/za-ze-disable-language-extensions.md), the overriding function had a less restrictive [exception specification](../../cpp/exception-specifications-throw-cpp.md).

## Example

The following example generates C2694:

```cpp
// C2694.cpp
// compile with: /Za /c
class MyBase {
public:
   virtual void f(void) throw(int) {
   }
};

class Derived : public MyBase {
public:
   void f(void) throw(...) {}   // C2694
   void f2(void) throw(int) {}   // OK
};
```
