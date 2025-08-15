---
title: "Compiler Error C3211"
description: "Learn more about: Compiler Error C3211"
ms.date: 11/04/2016
f1_keywords: ["C3211"]
helpviewer_keywords: ["C3211"]
---
# Compiler Error C3211

> 'explicit specialization' : explicit specialization is using partial specialization syntax, use template <> instead

## Remarks

An explicit specialization was ill formed.

## Example

The following example generates C3211:

```cpp
// C3211.cpp
// compile with: /LD
template<class T>
struct s;

template<class T>
// use the following line instead
// template<>
struct s<int>{};   // C3211
```
