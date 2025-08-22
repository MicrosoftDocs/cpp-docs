---
title: "Compiler Error C2233"
description: "Learn more about: Compiler Error C2233"
ms.date: 11/04/2016
f1_keywords: ["C2233"]
helpviewer_keywords: ["C2233"]
---
# Compiler Error C2233

> 'identifier' : arrays of objects containing zero-size arrays are illegal

## Remarks

Each object in an array must contain at least one element.

## Example

The following example generates C2233:

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
