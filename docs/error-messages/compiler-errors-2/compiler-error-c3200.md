---
description: "Learn more about: Compiler Error C3200"
title: "Compiler Error C3200"
ms.date: "11/04/2016"
f1_keywords: ["C3200"]
helpviewer_keywords: ["C3200"]
ms.assetid: 44bb5e77-f0ec-421c-a732-b9ee7c0a3529
---
# Compiler Error C3200

'template' : invalid template argument for template parameter 'parameter', expected a class template

You passed an invalid argument to a class template. The class template expects template as a parameter. In the following example, calling `Y<int, int> aY` will generate C3200. The first parameter needs to be a template, such as `Y<X, int> aY`.

```cpp
// C3200.cpp
template<typename T>
class X
{
};

template<template<typename U> class T1, typename T2>
class Y
{
};

int main()
{
   Y<int, int> y;   // C3200
}
```
