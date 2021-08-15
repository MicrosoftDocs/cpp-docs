---
description: "Learn more about: Compiler Error C3040"
title: "Compiler Error C3040"
ms.date: "11/04/2016"
f1_keywords: ["C3040"]
helpviewer_keywords: ["C3040"]
ms.assetid: 29e857ac-74f0-4ec6-becf-9026e38c160e
---
# Compiler Error C3040

'var' : type of variable in 'reduction' clause is incompatible with reduction operator 'operator'

A variable in a [reduction](../../parallel/openmp/reference/openmp-clauses.md#reduction) clause cannot be used with the reduction operator.

The following sample generates C3040:

```cpp
// C3040.cpp
// compile with: /openmp /c
#include "omp.h"
double d;

int main() {
   #pragma omp parallel reduction(&:d)   // C3040
      ;

   #pragma omp parallel reduction(-:d)  // OK
      ;
}
```
