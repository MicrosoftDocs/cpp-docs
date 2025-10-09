---
title: "Compiler Error C2231"
description: "Learn more about: Compiler Error C2231"
ms.date: 11/04/2016
f1_keywords: ["C2231"]
helpviewer_keywords: ["C2231"]
---
# Compiler Error C2231

> '.' : left operand points to 'class-key', use '->'

## Remarks

The operand to the left of the member-selection operation (.) is a pointer instead of a class, structure, or union.

## Example

The following example generates C2231:

```c
// C2231.c
struct S {
   int member;
} s, *ps = &s;
int main() {
   ps.member = 0;   // C2231

   // OK
   ps->member = 0;   // crash
   s.member = 0;
}
```
