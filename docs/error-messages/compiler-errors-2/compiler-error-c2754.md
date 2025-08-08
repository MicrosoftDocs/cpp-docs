---
title: "Compiler Error C2754"
description: "Learn more about: Compiler Error C2754"
ms.date: 11/04/2016
f1_keywords: ["C2754"]
helpviewer_keywords: ["C2754"]
---
# Compiler Error C2754

> 'specialization' : a partial specialization cannot have a dependent non-type template parameter

## Remarks

An attempt was made to partially specialize a template class that has a dependent non-type template parameter. This is not allowed.

## Example

The following example generates C2754:

```cpp
// C2754.cpp
// compile with: /c

template<class T, T t>
struct A {};

template<class T, int N>
struct B {};

template<class T> struct A<T,5> {};   // C2754
template<> struct A<int,5> {};   // OK
template<class T> struct B<T,5> {};   // OK
```
