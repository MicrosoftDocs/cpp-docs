---
description: "Learn more about: Compiler Error C2233"
title: "Compiler Error C2233"
ms.date: "11/04/2016"
f1_keywords: ["C2233"]
helpviewer_keywords: ["C2233"]
ms.assetid: 236bdf0b-9607-4f26-a249-d8def0b1333c
---
# Compiler Error C2233

'identifier' : arrays of objects containing zero-size arrays are illegal

Each object in an array must contain at least one element.

The following sample generates C2233:

```cpp
// C2233.cpp
// compile with: /c
class A {
   char somearray[1];
};

class B {
   char zeroarray[];
};

A array[100];   // OK
B array2[100];   // C2233
```
