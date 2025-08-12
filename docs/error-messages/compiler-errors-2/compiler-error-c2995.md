---
title: "Compiler Error C2995"
description: "Learn more about: Compiler Error C2995"
ms.date: 11/04/2016
f1_keywords: ["C2995"]
helpviewer_keywords: ["C2995"]
---
# Compiler Error C2995

> 'function' : function template has already been defined

## Remarks

Make sure that there is only one definition for each member function of a templated class.

## Example

The following example generates C2995:

```cpp
// C2995.cpp
// compile with: /c
template <class T>
void Test(T x){}

template <class T> void Test(T x){}   // C2995
template <class T> void Test2(T x){}   // OK
```
