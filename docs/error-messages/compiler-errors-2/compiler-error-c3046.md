---
title: "Compiler Error C3046"
description: "Learn more about: Compiler Error C3046"
ms.date: 11/04/2016
f1_keywords: ["C3046"]
helpviewer_keywords: ["C3046"]
---
# Compiler Error C3046

> Missing structured block in an OpenMP '#pragma omp sections' region

## Remarks

A [sections](../../parallel/openmp/reference/openmp-directives.md#sections-openmp) directive has an empty code block.

## Example

The following example generates C3046:

```cpp
// C3046.cpp
// compile with: /openmp /c
#include "omp.h"

int main() {
   int n2 = 2, n3 = 3;

   #pragma omp parallel
   {
      ++n2;

      #pragma omp sections
      {
/*
         ++n2;

         #pragma omp section
         {
            ++n3;
         }
*/
       }   // C3046 uncomment code to resolve this C3046
   }
}
```
