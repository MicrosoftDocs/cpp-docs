---
title: "Compiler Error C2802"
description: "Learn more about: Compiler Error C2802"
ms.date: 11/04/2016
f1_keywords: ["C2802"]
helpviewer_keywords: ["C2802"]
---
# Compiler Error C2802

> static member 'operator operator' has no formal parameters

## Remarks

An operator declared by a **`static`** member function must have at least one parameter.

## Example

The following example generates C2802:

```cpp
// C2802.cpp
// compile with: /clr /c
ref class A {
   static operator+ ();   // C2802
   static operator+ (A^, A^);   // OK
};
```
