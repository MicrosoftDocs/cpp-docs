---
description: "Learn more about: Compiler Warning (level 4) C4254"
title: "Compiler Warning (level 4) C4254"
ms.date: "11/04/2016"
f1_keywords: ["c4254"]
helpviewer_keywords: ["C4254"]
ms.assetid: c7dcef24-d535-4c98-bb41-fc3d2b88fd11
---
# Compiler Warning (level 4) C4254

'operator' : conversion from 'type1' to 'type2', possible loss of data

A larger bit field was assigned to a smaller bit field. There could be a loss of data.

This warning is off by default. See [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md) for more information.

The following sample generates C4254:

```cpp
// C4254.cpp
// compile with: /W4
#pragma warning(default: 4254)

struct X {
   int a : 20;
   int b : 12;
};

int main() {
   X *x = new X();
   x->b = 10;
   x->a = 4;
   x->a = x->b;    // OK
   x->b = x->a;    // C4254
};
```
