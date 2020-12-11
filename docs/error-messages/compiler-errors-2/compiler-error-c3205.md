---
description: "Learn more about: Compiler Error C3205"
title: "Compiler Error C3205"
ms.date: "11/04/2016"
f1_keywords: ["C3205"]
helpviewer_keywords: ["C3205"]
ms.assetid: 802d306e-5ff3-4491-8a22-c5f1c072d005
---
# Compiler Error C3205

argument list for template parameter 'parameter' is missing

A [template](../../cpp/templates-cpp.md) parameter is missing.

## Example

The following sample generates C3205:

```cpp
// C3205.cpp
template<template<class> class T> struct A {
   typedef T unparameterized_type;   // C3205
   // try the following line instead
   // typedef T<int> unparameterized_type;
};

template <class T>
struct B {
   typedef int value_type;
};

int main() {
   A<B> x;
}
```
