---
title: "Compiler Error C2277"
description: "Learn more about: Compiler Error C2277"
ms.date: 11/04/2016
f1_keywords: ["C2277"]
helpviewer_keywords: ["C2277"]
---
# Compiler Error C2277

> 'identifier' : cannot take address of this member function

## Remarks

You cannot take the address of a member function.

## Example

The following example generates C2277:

```cpp
// C2277.cpp
class A {
public:
   A();
};
(*pctor)() = &A::A;   // C2277
```
