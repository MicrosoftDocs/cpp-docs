---
title: "Compiler Error C2374"
description: "Learn more about: Compiler Error C2374"
ms.date: 11/04/2016
f1_keywords: ["C2374"]
helpviewer_keywords: ["C2374"]
---
# Compiler Error C2374

> 'identifier' : redefinition; multiple initialization

## Remarks

The identifier is initialized more than once.

## Example

The following example generates C2374:

```cpp
// C2374.cpp
// compile with: /c
int i = 0;
int i = 1;   // C2374
int j = 1;   // OK
```
