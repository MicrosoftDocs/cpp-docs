---
title: "Compiler Error C2496"
description: "Learn more about: Compiler Error C2496"
ms.date: 11/04/2016
f1_keywords: ["C2496"]
helpviewer_keywords: ["C2496"]
---
# Compiler Error C2496

> 'identifier' : 'selectany' can only be applied to data items with external linkage

## Remarks

The [selectany](../../cpp/selectany.md) attribute can be applied only to externally visible and global data items.

## Example

The following example generates C2496:

```cpp
// C2496.cpp
// compile with: /c
__declspec(selectany) int x1 = 1;
const __declspec(selectany) int x2 = 2;   // C2496
static __declspec(selectany) int x6 = 6;   // C2496

extern const __declspec(selectany) int x3 = 3;

__declspec(selectany) int x4;

// dynamic initialization of x5
int f();
__declspec(selectany) int x5 = f();

extern const int x7;
// OK - redeclaration of x7 that is extern
const __declspec(selectany) int x7 = 7;
```
