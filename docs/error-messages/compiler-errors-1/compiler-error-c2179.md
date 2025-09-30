---
title: "Compiler Error C2179"
description: "Learn more about: Compiler Error C2179"
ms.date: 11/04/2016
f1_keywords: ["C2179"]
helpviewer_keywords: ["C2179"]
---
# Compiler Error C2179

> 'type' : an attribute argument cannot use type parameters

## Remarks

A generic type parameter is resolved at runtime. However, an attribute parameter must be resolved at compile time. Therefore, you cannot use a generic type parameter as an argument to an attribute.

## Example

The following example generates C2179.

```cpp
// C2179.cpp
// compile with: /clr
using namespace System;

public ref struct Attr : Attribute {
   Attr(Type ^ a) {
      x = a;
   }

   Type ^ x;
};

ref struct G {};

generic<typename T>
public ref class Z {
public:
   Type ^ d;
   [Attr(T::typeid)]   // C2179
   // try the following line instead
   // [Attr(G::typeid)]
   T t;
};
```
