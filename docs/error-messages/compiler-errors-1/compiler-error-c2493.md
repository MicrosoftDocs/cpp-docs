---
title: "Compiler Error C2493"
description: "Learn more about: Compiler Error C2493"
ms.date: 11/04/2016
f1_keywords: ["C2493"]
helpviewer_keywords: ["C2493"]
---
# Compiler Error C2493

> illegal form of __based

## Remarks

A **`__based`** expression must be based on a pointer.

## Example

The following example generates C2493:

```cpp
// C2493.cpp
// compile with: /c
char mybase;
int __based(mybase) ptr;   // C2493

// OK
char * mybase;
int __based(mybase) * ptr;
```
