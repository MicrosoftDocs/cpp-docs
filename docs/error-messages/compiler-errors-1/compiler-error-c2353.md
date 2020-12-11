---
description: "Learn more about: Compiler Error C2353"
title: "Compiler Error C2353"
ms.date: "11/04/2016"
f1_keywords: ["C2353"]
helpviewer_keywords: ["C2353"]
ms.assetid: d57f8f77-d9b1-4bba-a940-87ec269ad183
---
# Compiler Error C2353

exception specification is not allowed

Exception specifications are not allowed on member functions of managed classes.

The following sample generates C2353:

```cpp
// C2353.cpp
// compile with: /clr /c
ref class X {
   void f() throw(int);   // C2353
   void f();   // OK
};
```
