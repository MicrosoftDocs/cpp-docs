---
description: "Learn more about: Compiler Error C3022"
title: "Compiler Error C3022"
ms.date: "11/04/2016"
f1_keywords: ["C3022"]
helpviewer_keywords: ["C3022"]
ms.assetid: 9f1d444c-6c6e-48d9-9346-69128390aa33
---
# Compiler Error C3022

'clause' : invalid schedule kind of 'value' on OpenMP 'directive' directive

An unsupported value was passed to a clause.

The following sample generates C3022:

```cpp
// C3022.cpp
// compile with: /openmp /link vcomps.lib
#include <stdio.h>
#include "omp.h"

int main() {
   int i;

   #pragma omp parallel for schedule(10)   // C3022
   for (i = 0; i < 10; ++i) ;

   #pragma omp parallel for schedule(x)   // C3022
   for (i = 0; i < 10; ++i) ;

   // OK
   #pragma omp parallel for schedule(runtime)
   for (i = 0; i < 10; ++i)
   ;
}
```
