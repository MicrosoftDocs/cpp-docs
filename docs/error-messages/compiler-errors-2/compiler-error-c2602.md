---
title: "Compiler Error C2602"
description: "Learn more about: Compiler Error C2602"
ms.date: 11/04/2016
f1_keywords: ["C2602"]
helpviewer_keywords: ["C2602"]
---
# Compiler Error C2602

> 'class::Identifier' is not a member of a base class of 'class'

## Remarks

`Identifier` cannot be accessed because it is not a member inherited from any base class.

## Example

The following example generates C2602:

```cpp
// C2602.cpp
// compile with: /c
struct X {
   int x;
};
struct A {
   int a;
};
struct B : public A {
   X::x;   // C2602 B is not derived from X
   A::a;   // OK
};
```
