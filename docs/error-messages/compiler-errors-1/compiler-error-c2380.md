---
description: "Learn more about: Compiler Error C2380"
title: "Compiler Error C2380"
ms.date: "11/04/2016"
f1_keywords: ["C2380"]
helpviewer_keywords: ["C2380"]
ms.assetid: 717b1e6e-ddfe-4bac-a5f3-7f9a4dcb1572
---
# Compiler Error C2380

type(s) preceding 'identifier' (constructor with return type, or illegal redefinition of current class-name?)

A constructor returns a value or redefines the class name.

The following sample generates C2326:

```cpp
// C2380.cpp
// compile with: /c
class C {
public:
   int C();   // C2380, specifies an int return
   int C;   // C2380, redefinition of i
   C();   // OK
};
```
