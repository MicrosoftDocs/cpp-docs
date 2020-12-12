---
description: "Learn more about: Compiler Error C3036"
title: "Compiler Error C3036"
ms.date: "11/04/2016"
f1_keywords: ["C3036"]
helpviewer_keywords: ["C3036"]
ms.assetid: 10c6993e-bc42-4a07-85c7-cdc34ac30906
---
# Compiler Error C3036

'operator' : invalid operator token in OpenMP 'reduction' clause

A [reduction](../../parallel/openmp/reference/openmp-clauses.md#reduction) clause was not specified correctly.

The following sample generates C3036:

```cpp
// C3036.cpp
// compile with: /openmp
static float a[1000], b[1000], c[1000];
void test1(int first, int last) {
   static float dp = 0.0f;
   #pragma omp for nowait reduction(.:dp)   // C3036
   // try the following line instead
   // #pragma omp for nowait reduction(+: dp)
   for (int i = first ; i <= last ; ++i)
      dp += a[i] * b[i];
}
```
