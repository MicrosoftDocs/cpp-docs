---
description: "Learn more about: Compiler Error C2550"
title: "Compiler Error C2550"
ms.date: "11/04/2016"
f1_keywords: ["C2550"]
helpviewer_keywords: ["C2550"]
ms.assetid: 3293f53e-ee66-4035-920d-34e115c3a24c
---
# Compiler Error C2550

'identifier' : constructor initializer lists are only allowed on constructor definitions

A base class initializer list is used on the definition of a function that is not a constructor.

The following sample generates C2550:

```cpp
// C2550.cpp
// compile with: /c
class C {
public:
   C();
};

class D : public C {
public:
   D();
   void func();
};

void D::func() : C() {}  // C2550
D::D() : C() {}   // OK
```
