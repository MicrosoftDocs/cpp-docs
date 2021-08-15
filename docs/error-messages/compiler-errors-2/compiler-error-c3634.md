---
description: "Learn more about: Compiler Error C3634"
title: "Compiler Error C3634"
ms.date: "11/04/2016"
f1_keywords: ["C3634"]
helpviewer_keywords: ["C3634"]
ms.assetid: fd09f10c-f863-483b-9756-71c16b760b02
---
# Compiler Error C3634

'function' : cannot define an abstract method of a managed or WinRTclass

An abstract method can be declared in a managed or WinRT class, but it cannot be defined.

## Example

The following sample generates C3634:

```cpp
// C3634.cpp
// compile with: /clr
ref class C {
   virtual void f() = 0;
};

void C::f() {   // C3634 - don't define managed class' pure virtual method
}
```
