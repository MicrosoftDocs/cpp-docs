---
title: "Compiler Warning (level 4, off) C4254"
description: "Learn more about: Compiler Warning (level 4, off) C4254"
ms.date: 11/04/2016
f1_keywords: ["C4254"]
helpviewer_keywords: ["C4254"]
---
# Compiler Warning (level 4) C4254

> '*operator*': conversion from '*type1*':'*field_bits*' to '*type2*':'*field_bits*', possible loss of data

## Remarks

A larger bit field was assigned to a smaller bit field. There could be a loss of data.

This warning is off by default. For more information, see [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md).

## Example

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
}
```
