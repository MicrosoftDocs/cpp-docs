---
title: "Compiler Error C2575"
description: "Learn more about: Compiler Error C2575"
ms.date: 11/04/2016
f1_keywords: ["C2575"]
helpviewer_keywords: ["C2575"]
---
# Compiler Error C2575

> 'identifier' : only member functions and bases can be virtual

## Remarks

A global function or class is declared **`virtual`**. This is not allowed.

## Example

The following example generates C2575:

```cpp
// C2575.cpp
// compile with: /c
virtual void func() {}   // C2575

void func2() {}
struct A {
   virtual void func2(){}
};
```
