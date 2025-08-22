---
title: "Compiler Error C3654"
description: "Learn more about: Compiler Error C3654"
ms.date: 11/04/2016
f1_keywords: ["C3654"]
helpviewer_keywords: ["C3654"]
---
# Compiler Error C3654

> 'text' : syntax error in explicit override

## Remarks

An unexpected string was in an explicit override. For more information, see [Explicit Overrides](../../extensions/explicit-overrides-cpp-component-extensions.md).

## Example

The following example generates C3654:

```cpp
// C3654.cpp
// compile with: /clr /c
public ref struct B {
   virtual void f() = 0;
   virtual void g() = 0;
   virtual void h() = 0;
};

public ref struct Q : B {
   virtual void f() = B::f, 3 {}   // C3654
   // try the following line instead
   // virtual void g() = B::g, B::h {}
};
```
