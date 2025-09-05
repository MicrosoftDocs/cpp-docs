---
title: "Compiler Error C2372"
description: "Learn more about: Compiler Error C2372"
ms.date: 03/23/2020
f1_keywords: ["C2372"]
helpviewer_keywords: ["C2372"]
---
# Compiler Error C2372

> '*identifier*' : redefinition; different types of indirection

## Remarks

The identifier is already defined with a different derived type.

## Example

The following example generates C2372:

```cpp
// C2372.cpp
// compile with: /c
extern int *fp;
extern int fp[];   // C2372
extern int fp2[];   // OK
```
