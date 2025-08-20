---
title: "Compiler Error C3609"
description: "Learn more about: Compiler Error C3609"
ms.date: 11/04/2016
f1_keywords: ["C3609"]
helpviewer_keywords: ["C3609"]
---
# Compiler Error C3609

> 'member': a sealed or final function must be virtual

## Remarks

The [sealed](../../extensions/sealed-cpp-component-extensions.md) and [final](../../cpp/final-specifier.md) keywords are only allowed on a class, struct, or member function marked **`virtual`**.

## Example

The following example generates C3609:

```cpp
// C3609.cpp
// compile with: /clr /c
ref class C {
   int f() sealed;   // C3609
   virtual int f2() sealed;   // OK
};
```
