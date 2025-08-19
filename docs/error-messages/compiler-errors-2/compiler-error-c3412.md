---
title: "Compiler Error C3412"
description: "Learn more about: Compiler Error C3412"
ms.date: 11/04/2016
f1_keywords: ["C3412"]
helpviewer_keywords: ["C3412"]
---
# Compiler Error C3412

> 'template' : cannot specialize template in current scope

## Remarks

A template cannot be specialized at class scope, only in global or namespace scope.

## Example

The following example generates C3412.

```cpp
// C3412.cpp
template <class T>
struct S {
   template <>
   struct S<int> {};   // C3412 in a class
};
```

The following example shows a possible resolution.

```cpp
// C3412b.cpp
// compile with: /c
template <class T>
struct S {};

template <>
struct S<int> {};
```
