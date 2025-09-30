---
title: "Compiler Error C2992"
description: "Learn more about: Compiler Error C2992"
ms.date: 11/04/2016
f1_keywords: ["C2992"]
helpviewer_keywords: ["C2992"]
---
# Compiler Error C2992

> 'class' : invalid or missing type parameter list

## Remarks

The class is preceded by a **`template`** or **generic** keyword with missing or invalid parameters.

## Examples

The following example generates C2992:

```cpp
// C2992.cpp
// compile with: /c
template <class T>
struct Outer {
   template <class U>
   struct Inner;
};

template <class T>   // C2992
struct Outer<T>::Inner {};

template <class T>
template <class U>   // OK
struct Outer<T>::Inner {};
```

C2992 can also occur when using generics:

```cpp
// C2992b.cpp
// compile with: /c /clr
generic <class T>
ref struct Outer {
   generic <class U>
   ref struct Inner;
};

generic <class T>   // C2992
ref struct Outer<T>::Inner {};

generic <class T>
generic <class U>   // OK
ref struct Outer<T>::Inner {};
```
