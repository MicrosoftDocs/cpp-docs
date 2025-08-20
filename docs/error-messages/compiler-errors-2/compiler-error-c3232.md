---
title: "Compiler Error C3232"
description: "Learn more about: Compiler Error C3232"
ms.date: 11/04/2016
f1_keywords: ["C3232"]
helpviewer_keywords: ["C3232"]
---
# Compiler Error C3232

> 'param' : a generic type parameter cannot be used in a qualified name

## Remarks

A generic type parameter was used incorrectly.

## Example

The following example generates C3232:

```cpp
// C3232.cpp
// compile with: /clr
generic <class T>
ref class C {
   typename T::TYPE t;   // C3232
};
```
