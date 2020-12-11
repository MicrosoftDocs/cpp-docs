---
description: "Learn more about: Compiler Error C2534"
title: "Compiler Error C2534"
ms.date: "11/04/2016"
f1_keywords: ["C2534"]
helpviewer_keywords: ["C2534"]
ms.assetid: 481f9f54-5b51-4aa0-8eea-218f10807705
---
# Compiler Error C2534

'identifier' : constructor cannot return a value

A constructor cannot return a value or have a return type (not even a **`void`** return type).

This error may be fixed by removing the **`return`** statement from the constructor definition.

The following sample generates C2534:

```cpp
// C2534.cpp
class A {
public:
   int i;
   A() { return i; }   // C2534
};
```
