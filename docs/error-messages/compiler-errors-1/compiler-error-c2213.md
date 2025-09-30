---
title: "Compiler Error C2213"
description: "Learn more about: Compiler Error C2213"
ms.date: 11/04/2016
f1_keywords: ["C2213"]
helpviewer_keywords: ["C2213"]
---
# Compiler Error C2213

> 'modifier' : illegal argument to __based

## Remarks

The argument modifying **`__based`** is invalid.

## Example

The following example generates C2213:

```cpp
// C2213.cpp
// compile with: /c
int i;
int *j;
char __based(i) *p;   // C2213
char __based(j) *p2;   // OK
```
