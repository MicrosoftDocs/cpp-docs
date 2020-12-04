---
description: "Learn more about: Compiler Error C2681"
title: "Compiler Error C2681"
ms.date: "11/04/2016"
f1_keywords: ["C2681"]
helpviewer_keywords: ["C2681"]
ms.assetid: eb42da6d-8d2c-43fd-986b-e73e2b004885
---
# Compiler Error C2681

'type' : invalid expression type for name

A casting operator tried to convert from an invalid type. For example, if you use the [dynamic_cast](../../cpp/dynamic-cast-operator.md) operator to convert an expression to a pointer type, the source expression must be a pointer.

The following sample generates C2681:

```cpp
// C2681.cpp
class A { virtual void f(); };

void g(int i) {
    A* pa;
    pa = dynamic_cast<A*>(i);  // C2681
}
```
