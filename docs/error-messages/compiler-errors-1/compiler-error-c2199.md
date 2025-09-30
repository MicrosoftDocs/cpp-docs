---
title: "Compiler Error C2199"
description: "Learn more about: Compiler Error C2199"
ms.date: 11/04/2016
f1_keywords: ["C2199"]
helpviewer_keywords: ["C2199"]
---
# Compiler Error C2199

> syntax error : found 'identifier (' at global scope (was a declaration intended?)

## Remarks

The specified context caused a syntax error. There may be incorrect declaration syntax.

## Example

The following example generates C2199:

```cpp
// C2199.cpp
// compile with: /c
int j = int(1) int(1);   // C2199
int j = 1;   // OK
```
