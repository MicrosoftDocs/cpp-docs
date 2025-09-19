---
title: "Compiler Error C3655"
description: "Learn more about: Compiler Error C3655"
ms.date: 11/04/2016
f1_keywords: ["C3655"]
helpviewer_keywords: ["C3655"]
---
# Compiler Error C3655

> 'function' : function already explicitly overridden

## Remarks

A function can only be explicitly overridden once. For more information, see [Explicit Overrides](../../extensions/explicit-overrides-cpp-component-extensions.md).

## Example

The following example generates C3655:

```cpp
// C3655.cpp
// compile with: /clr /c
public ref struct B {
   virtual void f();
   virtual void g();
};

public ref struct D : B {
   virtual void f() new sealed = B::f;
   virtual void g() new sealed = B::f;   // C3655
   // try the following line instead
   // virtual void g() new sealed = B::g;
};
```
