---
title: "Compiler Error C2227"
description: "Learn more about: Compiler Error C2227"
ms.date: 11/04/2016
f1_keywords: ["C2227"]
helpviewer_keywords: ["C2227"]
---
# Compiler Error C2227

> left of '->member' must point to class/struct/union/generic type

## Remarks

The operand to the left of `->` is not a pointer to a class, structure, or union.

## Example

The following example generates C2227:

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
