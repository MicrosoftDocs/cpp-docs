---
title: "Compiler Error C2232"
description: "Learn more about: Compiler Error C2232"
ms.date: 11/04/2016
f1_keywords: ["C2232"]
helpviewer_keywords: ["C2232"]
---
# Compiler Error C2232

> '->' : left operand has 'class-key' type, use '.'

## Remarks

The operand to the left of the `->` operator is not a pointer. Use the period (.) operator for a class, structure, or union.

## Example

The following example generates C2232:

```c
// C2232.c
struct X {
    int member;
} x, *px;
int main() {
    x->member = 0;   // C2232, x is not a pointer

    px->member = 0;
    x.member = 0;
}
```
