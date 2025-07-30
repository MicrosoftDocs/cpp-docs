---
title: "Compiler Error C2503"
description: "Learn more about: Compiler Error C2503"
ms.date: 11/04/2016
f1_keywords: ["C2503"]
helpviewer_keywords: ["C2503"]
---
# Compiler Error C2503

> 'class' : base classes cannot contain zero-sized arrays

## Remarks

A base class or structure contains a zero-sized array. An array in a class must have at least one element.

## Example

The following example generates C2503:

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
