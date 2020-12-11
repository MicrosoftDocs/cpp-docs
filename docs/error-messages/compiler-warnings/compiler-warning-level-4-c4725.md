---
description: "Learn more about: Compiler Warning (level 4) C4725"
title: "Compiler Warning (level 4) C4725"
ms.date: "11/04/2016"
f1_keywords: ["C4725"]
helpviewer_keywords: ["C4725"]
ms.assetid: effa0335-71c3-4b3b-8618-da4b9b46a95d
---
# Compiler Warning (level 4) C4725

instruction may be inaccurate on some Pentiums

Your code contains an inline assembly instruction that may not produce accurate results on some Pentium microprocessors.

The following sample generates C4725:

```cpp
// C4725.cpp
// compile with: /W4
// processor: x86
double m32fp = 2.0003e-17;

void f() {
   __asm
   {
      FDIV m32fp   // C4725
   }
}

int main() {
}
```
