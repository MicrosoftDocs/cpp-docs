---
description: "Learn more about: Compiler Error C3044"
title: "Compiler Error C3044"
ms.date: "11/04/2016"
f1_keywords: ["C3044"]
helpviewer_keywords: ["C3044"]
ms.assetid: 9f3e25b2-4676-49ab-97bf-6c88cd0fa377
---
# Compiler Error C3044

'section' : only allowed directly nested under an OpenMP 'sections' directive

The compiler found a `section` directive was used incorrectly. For more information, see [sections](../../parallel/openmp/reference/openmp-directives.md#sections-openmp).

The following sample generates C3044:

```cpp
// C3044.cpp
// compile with: /openmp /c
#include "omp.h"
int main() {
   int n2 = 2, n3 = 3;

   #pragma omp parallel
   {
      ++n2;

      #pragma omp sections
      {
         ++n2;
      }

      #pragma omp section   // C3044
      {
         ++n3;
      }
   }

   #pragma omp parallel
   {
      ++n2;

      #pragma omp sections
      {
         #pragma omp section   // OK
         {
            ++n3;
         }
      }
   }
}
```
