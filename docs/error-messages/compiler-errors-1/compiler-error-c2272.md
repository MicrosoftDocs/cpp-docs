---
description: "Learn more about: Compiler Error C2272"
title: "Compiler Error C2272"
ms.date: "11/04/2016"
f1_keywords: ["C2272"]
helpviewer_keywords: ["C2272"]
ms.assetid: 1517706a-9c27-452e-9b10-3424b3d232bc
---
# Compiler Error C2272

'function' : modifiers not allowed on static member functions

A **`static`** member function is declared with a memory-model specifier, such as [const](../../cpp/const-cpp.md) or [volatile](../../cpp/volatile-cpp.md), and such modifiers are not allowed on **`static`** member functions.

The following sample generates C2272:

```cpp
// C2272.cpp
// compile with: /c
class CMyClass {
public:
   static void func1() const volatile;   // C2272  func1 is static
   void func2() const volatile;   // OK
};
```
