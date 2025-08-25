---
description: "Learn more about: Compiler Warning (level 1 and level 4) C4052"
title: "Compiler Warning (level 1 and level 4) C4052"
ms.date: "11/04/2016"
f1_keywords: ["C4052"]
helpviewer_keywords: ["C4052"]
---
# Compiler Warning (level 1 and level 4) C4052

> function declarations different; one contains variable arguments

## Remarks

One declaration of the function doesn't contain variable arguments. The empty declaration is ignored.

## Example

The following example generates C4052:

```c
// C4052.c
// compile with: /W4 /c
int f();
int f(int i, ...);   // C4052
```
