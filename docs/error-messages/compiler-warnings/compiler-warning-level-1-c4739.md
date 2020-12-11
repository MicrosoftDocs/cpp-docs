---
description: "Learn more about: Compiler Warning (Level 1) C4739"
title: "Compiler Warning (Level 1) C4739"
ms.date: "11/04/2016"
f1_keywords: ["C4739"]
helpviewer_keywords: ["C4739"]
ms.assetid: 600873b3-7c85-4cd4-944e-cd8e01bfcbb0
---
# Compiler Warning (Level 1) C4739

reference to variable 'var' exceeds its storage space

A value was assigned to a variable, but the value is greater than the size of the variable. Memory will be written beyond the variable's memory location, and data loss is possible.

To resolve this warning, only assign a value to a variable whose size can accommodate the value.

The following sample generates C4739:

```cpp
// C4739.cpp
// compile with: /RTCs /Zi /W1 /c
char *pc;
int main() {
   char c;
   *(int *)&c = 1;   // C4739

   // OK
   *(char *)&c = 1;
}
```
