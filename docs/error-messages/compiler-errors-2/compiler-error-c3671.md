---
title: "Compiler Error C3671"
description: "Learn more about: Compiler Error C3671"
ms.date: 11/04/2016
f1_keywords: ["C3671"]
helpviewer_keywords: ["C3671"]
---
# Compiler Error C3671

> 'function_1' : function does not override 'function_2'

## Remarks

When using explicit override syntax, the compiler generates an error if a function is not overridden.  See [Explicit Overrides](../../extensions/explicit-overrides-cpp-component-extensions.md) for more information.

## Example

The following example generates C3671.

```cpp
// C3671.cpp
// compile with: /clr /c
ref struct S {
   virtual void f();
};

ref struct S1 : S {
   virtual void f(int) new sealed = S::f;   // C3671
   virtual void f() new sealed = S::f;
};
```
