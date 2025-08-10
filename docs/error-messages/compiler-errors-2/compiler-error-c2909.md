---
title: "Compiler Error C2909"
description: "Learn more about: Compiler Error C2909"
ms.date: 11/04/2016
f1_keywords: ["C2909"]
helpviewer_keywords: ["C2909"]
---
# Compiler Error C2909

> 'identifier': explicit instantiation of function template requires return type

## Remarks

An explicit instantiation of a function template requires explicit specification of its return type. Implicit return type specification does not work.

## Example

The following example generates C2909:

```cpp
// C2909.cpp
// compile with: /c
template<class T> int f(T);
template f<int>(int);         // C2909
template int f<int>(int);   // OK
```
