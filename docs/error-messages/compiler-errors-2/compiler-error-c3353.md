---
description: "Learn more about: Compiler Error C3353"
title: "Compiler Error C3353"
ms.date: "11/04/2016"
f1_keywords: ["C3353"]
helpviewer_keywords: ["C3353"]
ms.assetid: 5699c04b-d504-46ce-bf71-c200318fed71
---
# Compiler Error C3353

'delegate' : a delegate can only be created from a global function or a member function of a managed or WinRT type

Delegates, declared with the [delegate](../../extensions/delegate-cpp-component-extensions.md) keyword, can only be declared at global scope.

The following sample generates C3353:

```cpp
// C3353.cpp
// compile with: /clr
delegate int f;   // C3353
```
