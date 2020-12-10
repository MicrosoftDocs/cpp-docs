---
description: "Learn more about: Compiler Error C3201"
title: "Compiler Error C3201"
ms.date: "11/04/2016"
f1_keywords: ["C3201"]
helpviewer_keywords: ["C3201"]
ms.assetid: ec19cd64-1789-40a3-b2db-dff2852b9d98
---
# Compiler Error C3201

the template parameter list for class template 'template' does not match the template parameter list for template parameter 'template'

You passed a class template in the argument to a class template that does not take a template parameter, or you passed a mismatched number of template arguments for the default template argument.

```cpp
// C3201.cpp
template<typename T1, typename T2>
class X1
{
};

template<template<typename T> class U = X1>   // C3201
class X2
{
};

template<template<typename T, typename V> class U = X1>   // OK
class X3
{
};
```
