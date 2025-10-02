---
title: "Compiler Error C3217"
description: "Learn more about: Compiler Error C3217"
ms.date: 11/04/2016
f1_keywords: ["C3217"]
helpviewer_keywords: ["C3217"]
---
# Compiler Error C3217

> 'param' : generic parameter cannot be constrained in this declaration

## Remarks

A constraint was ill formed; the constraint generic parameter must agree with the generic class template parameter.

## Example

The following example generates C3217:

```cpp
// C3217.cpp
// compile with: /clr
interface struct A {};

generic <class T>
ref class C {
   generic <class T1>
   where T : A   // C3217
   void f();
};
```

The following example demonstrates a possible resolution:

```cpp
// C3217b.cpp
// compile with: /clr /c
interface struct A {};

generic <class T>
ref class C {
   generic <class T1>
   where T1 : A
   void f();
};
```
