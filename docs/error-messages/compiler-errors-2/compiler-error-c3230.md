---
title: "Compiler Error C3230"
description: "Learn more about: Compiler Error C3230"
ms.date: 11/04/2016
f1_keywords: ["C3230"]
helpviewer_keywords: ["C3230"]
---
# Compiler Error C3230

> 'function' : template type argument for 'template' cannot contain a generic type parameter: 'param'

## Remarks

Templates are instantiated at compile time, but generics are instantiated at run time. Therefore, it is not possible to generate generic code that can call the template because the template cannot be instantiated at run time when the generic type is finally known.

## Example

The following example generates C3230:

```cpp
// C3230.cpp
// compile with: /clr /LD
template <class S>
void f(S t);

generic <class U>
ref class C {
   void f1(U x) {
      f(x);   // C3230
   }
};
```
