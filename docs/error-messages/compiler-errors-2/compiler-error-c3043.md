---
title: "Compiler Error C3043"
description: "Learn more about: Compiler Error C3043"
ms.date: 11/04/2016
f1_keywords: ["C3043"]
helpviewer_keywords: ["C3043"]
---
# Compiler Error C3043

> OpenMP 'critical' directive cannot be nested in 'critical' directive with same name

## Remarks

A [critical](../../parallel/openmp/reference/openmp-directives.md#critical) directive cannot be nested in a `critical` directive that uses the same name.

## Example

The following example generates C3043:

```cpp
// C3043.cpp
// compile with: /openmp /c
#include "omp.h"

int main() {
   int n1 = 1, n2 = 2, n3 = 3;

   #pragma omp parallel
   {
      ++n2;

      #pragma omp critical(MyTest)
      {
         ++n2;

         #pragma omp critical(MyTest)   // C3043
         // try the following line instead
         // #pragma omp critical(MyTest2)
         {
            ++n3;
         }
      }
   }
}
```
