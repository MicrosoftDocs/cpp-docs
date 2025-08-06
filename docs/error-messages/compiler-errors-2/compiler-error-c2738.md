---
title: "Compiler Error C2738"
description: "Learn more about: Compiler Error C2738"
ms.date: 11/04/2016
f1_keywords: ["C2738"]
helpviewer_keywords: ["C2738"]
---
# Compiler Error C2738

> 'declaration' : is ambiguous or is not a member of 'type'

## Remarks

A function was declared incorrectly.

## Example

The following example generates C2738:

```cpp
// C2738.cpp
struct A {
   template <class T> operator T*();
   // template <class T> operator T();
};

template <>
A::operator int() {   // C2738

// try the following line instead
// A::operator int*() {

// or use the commented member declaration

   return 0;
}
```
