---
title: "Compiler Error C3210"
description: "Learn more about: Compiler Error C3210"
ms.date: 11/04/2016
f1_keywords: ["C3210"]
helpviewer_keywords: ["C3210"]
---
# Compiler Error C3210

> 'type' : access declaration can only be applied to a base class member

## Remarks

A [using declaration](../../cpp/using-declaration.md) was specified incorrectly.

## Example

The following example generates C3210.

```cpp
// C3210.cpp
// compile with: /c
struct A {
protected:
   int i;
};

struct B {
   using A::i;   // C3210
};

struct C : public A {
   using A::i;   // OK
};
```
