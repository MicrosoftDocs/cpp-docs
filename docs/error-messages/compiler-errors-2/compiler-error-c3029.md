---
description: "Learn more about: Compiler Error C3029"
title: "Compiler Error C3029"
ms.date: "11/04/2016"
f1_keywords: ["C3029"]
helpviewer_keywords: ["C3029"]
ms.assetid: 655eb04d-504a-468d-8c0c-bda1e5f297b7
---
# Compiler Error C3029

'symbol' : can only appear once in data-sharing clauses in an OpenMP directive

A symbol was used more than once in one or more clauses in a directive. The symbol can only be used once in the directive.

The following sample generates C3029:

```cpp
// C3029.cpp
// compile with: /openmp /link vcomps.lib
#include "omp.h"

int g_i;

int main() {
   int i, x;

   #pragma omp parallel reduction(+ : x, x)   // C3029
      ;

   #pragma omp parallel reduction(+ : x)   // OK
      ;

   #pragma omp parallel private(x) reduction(+ : x)   // C3029
      ;

   #pragma omp parallel reduction(+ : x)   // OK
      ;
}
```
