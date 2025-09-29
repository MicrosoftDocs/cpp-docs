---
title: "Compiler Error C2803"
description: "Learn more about: Compiler Error C2803"
ms.date: 11/04/2016
f1_keywords: ["C2803"]
helpviewer_keywords: ["C2803"]
---
# Compiler Error C2803

> 'operator operator' must have at least one formal parameter of class type

## Remarks

The overloaded operator lacks a parameter of class type.

You need to pass at least one parameter by reference (not using pointers, but references) or by value to be able to write "a < b" (a and b being of type class A).

If both parameters are pointers it will be a pure comparison of pointer addresses and will not use the user-defined conversion.

## Example

The following example generates C2803:

```cpp
// C2803.cpp
// compile with: /c
class A{};
bool operator< (const A *left, const A *right);   // C2803
// try the following line instead
// bool operator< (const A& left, const A& right);
```
