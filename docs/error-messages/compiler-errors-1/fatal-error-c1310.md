---
title: "Fatal Error C1310"
description: "Learn more about: Fatal Error C1310"
ms.date: 11/04/2016
f1_keywords: ["C1310"]
helpviewer_keywords: ["C1310"]
---
# Fatal Error C1310

> profile guided optimizations are not available with OpenMP

## Remarks

You will not be able to link with [/LTCG:PGI](../../build/reference/ltcg-link-time-code-generation.md) any module that was compiled with [/GL](../../build/reference/gl-whole-program-optimization.md).

## Example

The following example generates C1310:

```cpp
// C1310.cpp
// compile with: /openmp /GL /link /LTCG:PGI
// C1310 expected
int main()
{
   int i = 0, j = 10;

   #pragma omp parallel
   {
      #pragma omp for
      for (i = 0; i < 0; i++)
         --j;
   }
}
```
