---
title: "Compiler Error C2507"
description: "Learn more about: Compiler Error C2507"
ms.date: 11/04/2016
f1_keywords: ["C2507"]
helpviewer_keywords: ["C2507"]
---
# Compiler Error C2507

> 'identifier' : too many virtual modifiers on the base class

## Remarks

A class or structure is declared as **`virtual`** more than once. Only one **`virtual`** modifier can appear for each class in a list of base classes.

## Example

The following example generates C2507:

```cpp
// C2507.cpp
// compile with: /c
class A {};
class B : virtual virtual public A {};   // C2507
class C : virtual public A {};   // OK
```
