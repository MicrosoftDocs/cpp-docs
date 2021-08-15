---
description: "Learn more about: Compiler Error C2450"
title: "Compiler Error C2450"
ms.date: "11/04/2016"
f1_keywords: ["C2450"]
helpviewer_keywords: ["C2450"]
ms.assetid: 929f1c06-8774-468b-be2a-f428757875a2
---
# Compiler Error C2450

switch expression of type 'type' is illegal

The **`switch`** expression evaluates to an invalid type. It must evaluate to an integer type or a class type with unambiguous conversion to an integer type. If it evaluates to a user-defined type, you must supply a conversion operator.

The following sample generates C2450:

```cpp
// C2450.cpp
class X {
public:
   int i;
} x;

class Y {
public:
   int i;
   operator int() { return i; }   // conversion operator
} y;

int main() {
   int j = 1;
   switch ( x ) {   // C2450, x is not type int
   // try the following line instead
   // switch ( y ) {
      default:  ;
   }
}
```
