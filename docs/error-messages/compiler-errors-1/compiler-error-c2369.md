---
title: "Compiler Error C2369"
description: "Learn more about: Compiler Error C2369"
ms.date: 11/04/2016
f1_keywords: ["C2369"]
helpviewer_keywords: ["C2369"]
---
# Compiler Error C2369

> 'array' : redefinition; different subscripts

## Remarks

The array is already declared with a different subscript.

## Example

The following example generates C2369:

```cpp
// C2369.cpp
// compile with: /c
int a[10];
int a[20];   // C2369
int b[20];   // OK
```
