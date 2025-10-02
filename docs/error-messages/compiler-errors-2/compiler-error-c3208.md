---
title: "Compiler Error C3208"
description: "Learn more about: Compiler Error C3208"
ms.date: 11/04/2016
f1_keywords: ["C3208"]
helpviewer_keywords: ["C3208"]
---
# Compiler Error C3208

> 'function' : template parameter list for class template 'class' does not match template parameter list for template template parameter 'parameter'

## Remarks

A template template parameter does not have the same number of template parameters as the provided class template.

## Example

The following example generates C3208:

```cpp
// C3208.cpp
template <template <class T> class TT >
int f();

template <class T1, class T2>
struct S;

template <class T1>
struct R;

int i = f<S>();   // C3208
// try the following line instead
// int i = f<R>();
```
