---
description: "Learn more about: Compiler Error C3024"
title: "Compiler Error C3024"
ms.date: "11/04/2016"
f1_keywords: ["C3024"]
helpviewer_keywords: ["C3024"]
ms.assetid: 1c031c28-ce37-4de3-aead-cfe76b261856
---
# Compiler Error C3024

'schedule(runtime)' : chunk_size expression is not allowed

A value cannot be passed to the run-time parameter of the schedule clause.

The following sample generates C3024:

```cpp
// C3024.cpp
// compile with: /openmp /link vcomps.lib
#include <stdio.h>
#include "omp.h"

int main() {
   int i;

   #pragma omp parallel for schedule(runtime, 10)   // C3024
   for (i = 0; i < 10; ++i) ;

   #pragma omp parallel for schedule(runtime)   // OK
   for (i = 0; i < 10; ++i) ;
}
```
