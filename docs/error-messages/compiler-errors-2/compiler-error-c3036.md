---
title: "Compiler Error C3036"
description: "Learn more about: Compiler Error C3036"
ms.date: 11/04/2016
f1_keywords: ["C3036"]
helpviewer_keywords: ["C3036"]
---
# Compiler Error C3036

> 'operator' : invalid operator token in OpenMP 'reduction' clause

## Remarks

A [reduction](../../parallel/openmp/reference/openmp-clauses.md#reduction) clause was not specified correctly.

## Example

The following example generates C3036:

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
