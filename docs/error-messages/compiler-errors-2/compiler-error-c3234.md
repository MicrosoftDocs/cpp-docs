---
description: "Learn more about: Compiler Error C3234"
title: "Compiler Error C3234"
ms.date: "11/04/2016"
f1_keywords: ["C3234"]
helpviewer_keywords: ["C3234"]
ms.assetid: ebefc15a-e40d-424b-a3dd-d7e185d0ed7b
---
# Compiler Error C3234

a generic class may not derive from a generic type parameter

A generic class cannot inherit from a generic type parameter.

## Example

The following sample generates C3234.

```cpp
// C3234.cpp
// compile with: /clr /c
generic <class T>
public ref class C : T {};   // C3234
// try the following line instead
// public ref class C {};
```
