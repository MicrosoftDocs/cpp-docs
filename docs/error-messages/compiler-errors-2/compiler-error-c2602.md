---
description: "Learn more about: Compiler Error C2602"
title: "Compiler Error C2602"
ms.date: "11/04/2016"
f1_keywords: ["C2602"]
helpviewer_keywords: ["C2602"]
ms.assetid: 6c07a40e-537e-4954-b5c5-1e0e58fe1952
---
# Compiler Error C2602

'class::Identifier' is not a member of a base class of 'class'

`Identifier` cannot be accessed because it is not a member inherited from any base class.

The following sample generates C2602:

```cpp
// C2602.cpp
// compile with: /c
struct X {
   int x;
};
struct A {
   int a;
};
struct B : public A {
   X::x;   // C2602 B is not derived from X
   A::a;   // OK
};
```
