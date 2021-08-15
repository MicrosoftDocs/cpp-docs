---
description: "Learn more about: Compiler Warning (level 1) C4090"
title: "Compiler Warning (level 1) C4090"
ms.date: "11/04/2016"
f1_keywords: ["C4090"]
helpviewer_keywords: ["C4090"]
ms.assetid: baad469d-23d4-45aa-ad9c-305b32d61e9a
---
# Compiler Warning (level 1) C4090

'operation' : different 'modifier' qualifiers

A variable used in an operation is defined with a specified modifier that prevents it from being modified without detection by the compiler. The expression is compiled without modification.

This warning can be caused when a pointer to a **`const`** or **`volatile`** item is assigned to a pointer not declared as pointing to **`const`** or **`volatile`**.

This warning is issued for C programs. In a C++ program, the compiler issues an error: [C2440](../../error-messages/compiler-errors-1/compiler-error-c2440.md).

The following sample generates C4090:

```c
// C4090.c
// compile with: /W1
int *volatile *p;
int *const *q;
int **r;

int main() {
   p = q;   // C4090
   p = r;
   q = p;   // C4090
   q = r;
   r = p;   // C4090
   r = q;   // C4090
}
```
