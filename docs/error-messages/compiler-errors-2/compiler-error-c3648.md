---
title: "Compiler Error C3648"
description: "Learn more about: Compiler Error C3648"
ms.date: 11/04/2016
f1_keywords: ["C3648"]
helpviewer_keywords: ["C3648"]
---
# Compiler Error C3648

> this explicit override syntax requires /clr:oldSyntax

## Remarks

When compiling for the latest managed syntax, the compiler found explicit override syntax for previous versions that is no longer supported.

For more information, see [Explicit Overrides](../../extensions/explicit-overrides-cpp-component-extensions.md).

## Example

The following example generates C3648:

```cpp
// C3648.cpp
// compile with: /clr
public interface struct I {
   void f();
};

public ref struct R : I {
   virtual void I::f() {}   // C3648
   // try the following line instead
   // virtual void f() = I::f{}
};
```
