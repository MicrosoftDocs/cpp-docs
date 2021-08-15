---
description: "Learn more about: Compiler Warning (level 4) C4245"
title: "Compiler Warning (level 4) C4245"
ms.date: "11/04/2016"
f1_keywords: ["C4245"]
helpviewer_keywords: ["C4245"]
ms.assetid: 85083d53-9cc2-4d12-b58c-6dad28f15cbe
---
# Compiler Warning (level 4) C4245

> '*conversion*' : conversion from '*type1*' to '*type2*', signed/unsigned mismatch

You tried to convert a **`signed const`** type that has a negative value to an **`unsigned`** type.

The following sample generates C4245:

```cpp
// C4245.cpp
// compile with: /W4 /c
const int i = -1;
unsigned int j = i; // C4245

const int k = 1;
unsigned int l = k; // okay

int m = -1;
unsigned int n = m; // okay

void Test(size_t i) {}

int main() {
   Test( -19 );   // C4245
}
```
