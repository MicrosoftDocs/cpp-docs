---
title: "Compiler Error C3668"
description: "Learn more about: Compiler Error C3668"
ms.date: 11/04/2016
f1_keywords: ["C3668"]
helpviewer_keywords: ["C3668"]
---
# Compiler Error C3668

> 'method' : method with override specifier 'override' did not override any base class methods

## Remarks

A function attempted to override a non-existent function.

For more information, see [Explicit Overrides](../../extensions/explicit-overrides-cpp-component-extensions.md).

## Example

The following example generates C3668.

```cpp
// C3668.cpp
// compile with: /c
__interface I {
   void f(int);   // virtual by default
};

class J {
public:
   void g(int);
   virtual void h(int);
};

struct R : I,J {
   virtual void f() override {}   // C3668
   virtual void f(int) override {}   // OK

   virtual void g(int) override {}   // C3668
   virtual void h(int) override {}   // OK
};
```
