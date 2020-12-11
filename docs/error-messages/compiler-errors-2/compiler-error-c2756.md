---
description: "Learn more about: Compiler Error C2756"
title: "Compiler Error C2756"
ms.date: "11/04/2016"
f1_keywords: ["C2756"]
helpviewer_keywords: ["C2756"]
ms.assetid: 42eb988d-4043-4dee-8fd4-596949f69a55
---
# Compiler Error C2756

'template type' : default template arguments not allowed on a partial specialization

The template for a partial specialization may not contain a default argument.

The following sample generates C2756 and shows how to fix it:

```cpp
// C2756.cpp
template <class T>
struct S {};

template <class T=int>
// try the following line instead
// template <class T>
struct S<T*> {};   // C2756
```
