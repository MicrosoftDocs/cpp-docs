---
title: "Compiler Error C3858"
description: "Learn more about: Compiler Error C3858"
ms.date: 11/04/2016
f1_keywords: ["C3858"]
helpviewer_keywords: ["C3858"]
---
# Compiler Error C3858

> 'type': cannot be redeclared in current scope

## Remarks

The type cannot be declared twice in the same scope.

## Example

The following example generates C3858:

```cpp
// C3858.cpp
// compile with: /LD
template <class T>
struct Outer
{
   struct Inner;
};

template <class T>
struct Outer<T>::Inner;   // C3858
// try the following line instead
// struct Outer<T>::Inner{};
```
