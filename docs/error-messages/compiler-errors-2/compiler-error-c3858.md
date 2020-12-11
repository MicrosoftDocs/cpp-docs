---
description: "Learn more about: Compiler Error C3858"
title: "Compiler Error C3858"
ms.date: "11/04/2016"
f1_keywords: ["C3858"]
helpviewer_keywords: ["C3858"]
ms.assetid: 46e178d5-a55f-4ac6-a9dc-561fbcba5c1f
---
# Compiler Error C3858

'type': cannot be redeclared in current scope

The type cannot be declared twice in the same scope.

The following sample generates C3858:

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
