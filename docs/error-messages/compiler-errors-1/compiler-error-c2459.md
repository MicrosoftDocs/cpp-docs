---
description: "Learn more about: Compiler Error C2459"
title: "Compiler Error C2459"
ms.date: "11/04/2016"
f1_keywords: ["C2459"]
helpviewer_keywords: ["C2459"]
ms.assetid: 81e29f4c-5b60-40fb-9557-1cdc630d77e8
---
# Compiler Error C2459

'identifier' : is being defined; cannot add as an anonymous member

A class, structure, or union is redefined in its own scope by a member of an anonymous union.

The following sample generates C2459:

```cpp
// C2459.cpp
// compile with: /c
class C {
   union { int C; };   // C2459
   union { int D; };
};
```
