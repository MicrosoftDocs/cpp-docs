---
title: "Compiler Error C3212"
description: "Learn more about: Compiler Error C3212"
ms.date: 11/04/2016
f1_keywords: ["C3212"]
helpviewer_keywords: ["C3212"]
---
# Compiler Error C3212

> 'specialization' : an explicit specialization of a template member must be a member of an explicit specialization

## Remarks

An explicit specialization was ill formed.

## Example

The following example generates C3212:

```cpp
// C3212.cpp
// compile with: /LD
template <class T>
struct S {
   template <class T1>
   struct S1;
};

template <class T>   // C3212
template <>
struct S<T>::S1<int> {};

/*
// try the following instead
template <>
template <>
struct S<int>::S1<int> {};
*/

/*
// or, the following
template <>
struct S<int> {
   template <class T1>
   struct S1;
};

template <>
struct S<int>::S1<int> {
};
*/
```
