---
title: "Compiler Error C2556"
description: "Learn more about: Compiler Error C2556"
ms.date: 06/29/2025
f1_keywords: ["C2556"]
helpviewer_keywords: ["C2556"]
---
# Compiler Error C2556

> '*function1*': overloaded function differs only by return type from '*function2*'

## Remarks

The overloaded functions have different return types but the same parameter list. Each overloaded function must have a distinct formal parameter list.

## Example

The following example generates C2556:

```cpp
// C2556.cpp
// compile with: /c
int func();
double func();     // C2556
int func(int i);   // OK parameter lists differ
```
