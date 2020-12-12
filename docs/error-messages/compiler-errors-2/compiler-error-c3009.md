---
description: "Learn more about: Compiler Error C3009"
title: "Compiler Error C3009"
ms.date: "11/04/2016"
f1_keywords: ["C3009"]
helpviewer_keywords: ["C3009"]
ms.assetid: aded5985-f5fd-4c3e-a157-16be55ec1313
---
# Compiler Error C3009

'label' : jump into OpenMP structured block not allowed

Code cannot jump into or out of an OpenMP block.

The following sample generates C3009:

```c
// C3009.c
// compile with: /openmp
int main() {
   #pragma omp parallel
   {
   lbl2:;
   }
   goto lbl2;   // C3009
}
```
