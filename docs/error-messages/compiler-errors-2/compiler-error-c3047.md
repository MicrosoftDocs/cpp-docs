---
title: "Compiler Error C3047"
description: "Learn more about: Compiler Error C3047"
ms.date: 06/01/2022
f1_keywords: ["C3047"]
helpviewer_keywords: ["C3047"]
---
# Compiler Error C3047

> Structured block in an OpenMP 'sections' region must be preceded by '#pragma omp section'

## Remarks

Any code in a code block introduced by a [sections](../../parallel/openmp/reference/openmp-directives.md#sections-openmp) directive must be in a code block introduced by a `section` directive.

This error is obsolete in Visual Studio 2022 and later versions.

## Example

The following example generates C3047:

```cpp
// C3047.cpp
// compile with: /openmp /c
#include "omp.h"

int main() {
   int n2 = 2, n3 = 3;

   #pragma omp parallel
   {
      ++n2;

      #pragma omp sections
      {

         #pragma omp section
         {
            ++n3;
         }

         ++n2;   // C3047 not enclosed in #pragma omp section
      }
   }
}
```
