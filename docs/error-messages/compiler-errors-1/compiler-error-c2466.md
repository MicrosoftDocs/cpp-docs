---
description: "Learn more about: Compiler Error C2466"
title: "Compiler Error C2466"
ms.date: "11/04/2016"
f1_keywords: ["C2466"]
helpviewer_keywords: ["C2466"]
ms.assetid: 75b251d1-7d0b-4a86-afca-26adedf74486
---
# Compiler Error C2466

cannot allocate an array of constant size 0

An array is allocated or declared with size zero. The constant expression for the array size must be an integer greater than zero. An array declaration with a zero subscript is legal only for a class, structure, or union member and only with Microsoft extensions ([/Ze](../../build/reference/za-ze-disable-language-extensions.md)).

The following sample generates C2466:

```cpp
// C2466.cpp
// compile with: /c
int i[0];   // C2466
int j[1];   // OK
char *p;
```
