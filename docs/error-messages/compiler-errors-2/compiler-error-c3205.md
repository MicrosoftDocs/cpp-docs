---
title: "Compiler Error C3205"
description: "Learn more about: Compiler Error C3205"
ms.date: 11/04/2016
f1_keywords: ["C3205"]
helpviewer_keywords: ["C3205"]
---
# Compiler Error C3205

> argument list for template parameter 'parameter' is missing

## Remarks

A [template](../../cpp/templates-cpp.md) parameter is missing.

## Example

The following example generates C3205:

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
