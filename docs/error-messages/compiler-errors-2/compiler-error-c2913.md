---
title: "Compiler Error C2913"
description: "Learn more about: Compiler Error C2913"
ms.date: 11/04/2016
f1_keywords: ["C2913"]
helpviewer_keywords: ["C2913"]
---
# Compiler Error C2913

> explicit specialization; 'declaration' is not a specialization of a class template

## Remarks

You cannot specialize a non-template class.

## Example

The following example generates C2913:

```cpp
// C2913.cpp
// compile with: /c
class X{};
template <class T> class Y{};

template<> class X<int> {};   // C2913
template<> class Y<int> {};
```
