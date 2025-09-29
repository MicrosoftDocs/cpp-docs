---
title: "Compiler Error C3234"
description: "Learn more about: Compiler Error C3234"
ms.date: 11/04/2016
f1_keywords: ["C3234"]
helpviewer_keywords: ["C3234"]
---
# Compiler Error C3234

> a generic class may not derive from a generic type parameter

## Remarks

A generic class cannot inherit from a generic type parameter.

## Example

The following example generates C3234.

```cpp
// C3234.cpp
// compile with: /clr /c
generic <class T>
public ref class C : T {};   // C3234
// try the following line instead
// public ref class C {};
```
