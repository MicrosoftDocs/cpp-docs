---
title: "Compiler Error C3662"
description: "Learn more about: Compiler Error C3662"
ms.date: 11/04/2016
f1_keywords: ["C3662"]
helpviewer_keywords: ["C3662"]
---
# Compiler Error C3662

> 'member' : override specifier 'specifier' only allowed on member functions of managed or WinRT classes

## Remarks

An override specifier was used on a member of native type, which is not allowed.

For more information, see [Explicit Overrides](../../extensions/explicit-overrides-cpp-component-extensions.md).

## Example

The following example generates C3662.

```cpp
// C3662.cpp
// compile with: /clr /c
struct S {
   virtual void f();
};

struct S1 : S {
   virtual void f() new;   // C3662
};

ref struct T {
   virtual void f();
};

ref struct T1 : T {
   virtual void f() new;   // OK
};
```
