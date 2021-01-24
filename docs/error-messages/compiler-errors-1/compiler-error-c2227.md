---
description: "Learn more about: Compiler Error C2227"
title: "Compiler Error C2227"
ms.date: "11/04/2016"
f1_keywords: ["C2227"]
helpviewer_keywords: ["C2227"]
ms.assetid: d470e8b8-7e15-468b-84fa-37d1a0132271
---
# Compiler Error C2227

left of '->member' must point to class/struct/union/generic type

The operand to the left of `->` is not a pointer to a class, structure, or union.

The following sample generates C2227:

```cpp
// C2227.cpp
int *pInt;
struct S {
public:
    int member;
} s, *pS = &s;

int main() {
   pInt->member = 0;   // C2227 pInt points to an int
   pS->member = 0;   // OK
}
```
