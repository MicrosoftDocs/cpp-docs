---
title: "Compiler Error C3412"
ms.date: "11/04/2016"
f1_keywords: ["C3412"]
helpviewer_keywords: ["C3412"]
ms.assetid: aa4dd43b-54ce-4cda-85c1-1a77dd6e34fa
---
# Compiler Error C3412

'template' : cannot specialize template in current scope

A template cannot be specialized at class scope, only in global or namespace scope.

## Example

The following sample generates C3412.

```
// C3412.cpp
template <class T>
struct S {
   template <>
   struct S<int> {};   // C3412 in a class
};
```

## Example

The following sample shows a possible resolution.

```
// C3412b.cpp
// compile with: /c
template <class T>
struct S {};

template <>
struct S<int> {};
```