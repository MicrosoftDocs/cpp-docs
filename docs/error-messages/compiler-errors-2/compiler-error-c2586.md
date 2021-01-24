---
description: "Learn more about: Compiler Error C2586"
title: "Compiler Error C2586"
ms.date: "11/04/2016"
f1_keywords: ["C2586"]
helpviewer_keywords: ["C2586"]
ms.assetid: dae703c7-5c38-4db6-8411-4d1b22713eb5
---
# Compiler Error C2586

incorrect user-defined conversion syntax : illegal indirections

Indirection of a conversion operator is not allowed.

The following sample generates C2586:

```cpp
// c2586.cpp
// compile with: /c
struct C {
   * operator int();   // C2586
   operator char();   // OK
};
```
