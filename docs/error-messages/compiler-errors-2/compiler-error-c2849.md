---
description: "Learn more about: Compiler Error C2849"
title: "Compiler Error C2849"
ms.date: "11/04/2016"
f1_keywords: ["C2849"]
helpviewer_keywords: ["C2849"]
ms.assetid: e28f6b3e-e0e7-4f92-b006-ebaa81d368e6
---
# Compiler Error C2849

'destructor' : an interface cannot have a destructor

A Visual C++ [interface](../../cpp/interface.md) cannot have a destructor.

The following sample generates C2849:

```cpp
// C2849.cpp
// compile with: /c
__interface C {
   ~C();   // C2849 destructor not allowed in an interface
};
```
