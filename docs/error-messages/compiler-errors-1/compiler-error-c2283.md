---
title: "Compiler Error C2283"
description: "Learn more about: Compiler Error C2283"
ms.date: "11/04/2016"
f1_keywords: ["C2283"]
helpviewer_keywords: ["C2283"]
---
# Compiler Error C2283

> '*identifier*': pure specifier or abstract override specifier not allowed on unnamed struct

## Remarks

A member function of an unnamed class or structure is declared with a pure specifier, which is not permitted.

## Example

The following sample generates C2283:

```cpp
// C2283.cpp
// compile with: /c
struct {
   virtual void func() = 0;   // C2283
};
struct T {
   virtual void func() = 0;   // OK
};
```
