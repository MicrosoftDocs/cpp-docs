---
title: "Compiler Error C3202"
description: "Learn more about: Compiler Error C3202"
ms.date: 11/04/2016
f1_keywords: ["C3202"]
helpviewer_keywords: ["C3202"]
---
# Compiler Error C3202

> 'arg name' : invalid default argument for template parameter 'parameter', expected a class template

## Remarks

You passed an invalid default argument for a template parameter.

## Example

The following example generates C3202:

```cpp
// C3202.cpp
template<typename T>
class X
{
};

class Z
{
};

template<template<typename U> class T1 = Z, typename T2> // C3202
class Y
{
};
```
