---
description: "Learn more about: Compiler Error C2427"
title: "Compiler Error C2427"
ms.date: "11/04/2016"
f1_keywords: ["C2427"]
helpviewer_keywords: ["C2427"]
ms.assetid: a7d421af-6180-40b4-b7a6-9f3bc7dfaaf9
---
# Compiler Error C2427

'class' : cannot define class in this scope

An attempt was made to define a nested class, but the nested class is a member of a base class, not the most containing class.

The following sample generates C2427:

```cpp
// C2427.cpp
// compile with: /c
template <class T>
struct S {
   struct Inner;
};

struct Y : S<int> {};

struct Y::Inner {};   // C2427

// OK
template<typename T>
struct S<T>::Inner {};
```
