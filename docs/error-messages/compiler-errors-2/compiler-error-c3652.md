---
title: "Compiler Error C3652"
description: "Learn more about: Compiler Error C3652"
ms.date: 11/04/2016
f1_keywords: ["C3652"]
helpviewer_keywords: ["C3652"]
---
# Compiler Error C3652

> 'override' : a function that explicitly overrides must be virtual

## Remarks

A function that does an explicit override must be virtual. For more information, see [Explicit Overrides](../../extensions/explicit-overrides-cpp-component-extensions.md).

## Example

The following example generates C3652:

```cpp
// C3652.cpp
// compile with: /clr /c
public interface class I {
   void f();
};

public ref struct R : I {
   void f() = I::f {}   // C3652
   // try the following line instead
   // virtual void f() = I::f {}
};
```
