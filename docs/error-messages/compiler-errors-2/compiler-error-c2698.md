---
title: "Compiler Error C2698"
description: "Learn more about: Compiler Error C2698"
ms.date: 11/04/2016
f1_keywords: ["C2698"]
helpviewer_keywords: ["C2698"]
---
# Compiler Error C2698

> the using-declaration for 'declaration 1' cannot co-exist with the existing using-declaration for 'declaration 2'

## Remarks

Once you have a [using declaration](../../cpp/using-declaration.md) for a data member, any using declaration in the same scope that uses the same name is not permitted, as only functions can be overloaded.

## Example

The following example generates C2698:

```cpp
// C2698.cpp
struct A {
   int x;
};

struct B {
   int x;
};

struct C : A, B {
   using A::x;
   using B::x;   // C2698
}
```
