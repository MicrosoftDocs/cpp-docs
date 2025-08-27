---
title: "Compiler Warning (level 4) C4212"
description: "Learn more about: Compiler Warning (level 4) C4212"
ms.date: 11/04/2016
f1_keywords: ["C4212"]
helpviewer_keywords: ["C4212"]
---
# Compiler Warning (level 4) C4212

> nonstandard extension used : function declaration used ellipsis

## Remarks

The function prototype has a variable number of arguments. The function definition does not.

## Example

The following example generates C4212:

```c
// C4212.c
// compile with: /W4 /Ze /c
void f(int , ...);
void f(int i, int j) {}
```
