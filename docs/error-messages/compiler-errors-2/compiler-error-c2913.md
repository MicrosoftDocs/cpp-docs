---
description: "Learn more about: Compiler Error C2913"
title: "Compiler Error C2913"
ms.date: "11/04/2016"
f1_keywords: ["C2913"]
helpviewer_keywords: ["C2913"]
ms.assetid: c6cf6090-02e8-49a5-913f-5bc6f864b769
---
# Compiler Error C2913

explicit specialization; 'declaration' is not a specialization of a class template

You cannot specialize a non-template class.

The following sample generates C2913:

```cpp
// C2913.cpp
// compile with: /c
class X{};
template <class T> class Y{};

template<> class X<int> {};   // C2913
template<> class Y<int> {};
```
