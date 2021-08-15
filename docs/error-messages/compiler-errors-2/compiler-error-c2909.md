---
description: "Learn more about: Compiler Error C2909"
title: "Compiler Error C2909"
ms.date: "11/04/2016"
f1_keywords: ["C2909"]
helpviewer_keywords: ["C2909"]
ms.assetid: 1c9df8ae-925d-4002-a5f8-a71413c45f9e
---
# Compiler Error C2909

'identifier': explicit instantiation of function template requires return type

An explicit instantiation of a function template requires explicit specification of its return type. Implicit return type specification does not work.

The following sample generates C2909:

```cpp
// C2909.cpp
// compile with: /c
template<class T> int f(T);
template f<int>(int);         // C2909
template int f<int>(int);   // OK
```
