---
title: "Compiler Error C2860"
description: "Learn more about: Compiler Error C2860"
ms.date: 03/16/2024
f1_keywords: ["C2860"]
helpviewer_keywords: ["C2860"]
---
# Compiler Error C2860

> 'void' cannot be used as a function parameter except for '(void)'

## Remarks

A function parameter cannot be of type **`void`**.

## Example

The following example generates C2860:

```cpp
// C2860.cpp
// compile with: /c
void func1(void x);   // C2860
void func2(void, int y);   // C2860
void func3(void);   // OK
```
