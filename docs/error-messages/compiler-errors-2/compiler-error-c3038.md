---
description: "Learn more about: Compiler Error C3038"
title: "Compiler Error C3038"
ms.date: "11/04/2016"
f1_keywords: ["C3038"]
helpviewer_keywords: ["C3038"]
ms.assetid: 140ada3e-5636-43ef-a4ee-22a9f66a771f
---
# Compiler Error C3038

'var' : variable in 'private' clause cannot be a reduction variable in enclosing context

Variables that appear in the [reduction](../../parallel/openmp/reference/openmp-clauses.md#reduction) clause of a parallel directive cannot be specified in a [private](../../parallel/openmp/reference/openmp-clauses.md#private-openmp) clause on a work-sharing directive that binds to the parallel construct.

The following sample generates C3038:

```cpp
// C3038.cpp
// compile with: /openmp /c
int g_i, g_i2;

int main() {
   int i;

   #pragma omp parallel reduction(+: g_i)
   {
      #pragma omp for private(g_i)   // C3038
      // try the following line instead
      // #pragma omp for private(g_i2)
      for (i = 0; i < 10; ++i)
         g_i += i;
   }
}
```
