---
description: "Learn more about: Compiler Error C2503"
title: "Compiler Error C2503"
ms.date: "11/04/2016"
f1_keywords: ["C2503"]
helpviewer_keywords: ["C2503"]
ms.assetid: da86cc89-fd04-400b-aa8d-a5ffaf7e3918
---
# Compiler Error C2503

'class' : base classes cannot contain zero-sized arrays

A base class or structure contains a zero-sized array. An array in a class must have at least one element.

The following sample generates C2503:

```cpp
// C2503.cpp
// compile with: /c
class A {
   public:
   int array [];
};

class B : A {};    // C2503

class C {
public:
   int array [10];
};

class D : C {};
```
