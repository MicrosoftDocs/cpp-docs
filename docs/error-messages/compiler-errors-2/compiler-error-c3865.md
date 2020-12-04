---
description: "Learn more about: Compiler Error C3865"
title: "Compiler Error C3865"
ms.date: "11/04/2016"
f1_keywords: ["C3865"]
helpviewer_keywords: ["C3865"]
ms.assetid: 9bc62bb0-4fb8-4856-a5cf-c7cb4029a596
---
# Compiler Error C3865

'calling_convention' : can only be used on native member functions

A calling convention was used on a function that was either a global function or on a managed member function. The calling convention can only be used on a native (not managed) member function.

For more information, see [Calling Conventions](../../cpp/calling-conventions.md).

The following sample generates C3865:

```cpp
// C3865.cpp
// compile with: /clr
// processor: x86
void __thiscall Func(){}   // C3865

// OK
struct MyType {
   void __thiscall Func(){}
};
```
