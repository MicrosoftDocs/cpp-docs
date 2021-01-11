---
description: "Learn more about: Compiler Error C2540"
title: "Compiler Error C2540"
ms.date: "11/04/2016"
f1_keywords: ["C2540"]
helpviewer_keywords: ["C2540"]
ms.assetid: 92c805a3-2dd9-46ca-a63d-3845c18ecc95
---
# Compiler Error C2540

non-constant expression as array bound

An array must have a constant bound.

The following sample generates C2540:

```cpp
// C2540.cpp
void func(int n, int pC[]) {
   int i = ((int [n])pC)[1];   // C2540
}

void func2(int n, int pC[]) {
   int i = (pC)[1];   // OK
}

int main() {
   int pC[100];
   func(100, pC);
   func2(100, pC);
}
```
