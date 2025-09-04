---
title: "Compiler Error C2448"
description: "Learn more about: Compiler Error C2448"
ms.date: 11/04/2016
f1_keywords: ["C2448"]
helpviewer_keywords: ["C2448"]
---
# Compiler Error C2448

> 'identifier' : function-style initializer appears to be a function definition

## Remarks

The function definition is incorrect.

This error can be caused by an old-style C-language formal list.

## Example

The following example generates C2448:

```cpp
// C2448.cpp
void func(c)
   int c;
{}   // C2448
```
