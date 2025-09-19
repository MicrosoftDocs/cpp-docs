---
title: "Compiler Error C2811"
description: "Learn more about: Compiler Error C2811"
ms.date: 11/04/2016
f1_keywords: ["C2811"]
helpviewer_keywords: ["C2811"]
---
# Compiler Error C2811

> 'type1' : cannot inherit from 'type2', a ref class can only inherit from a ref class or interface class

## Remarks

You attempted to use an unmanaged class as a base class for a managed class.

## Example

The following example generates C2811:

```cpp
// C2811.cpp
// compile with: /clr /c
struct S{};
ref struct T {};
ref class C : public S {};   // C2811
ref class D : public T {};   // OK
```
