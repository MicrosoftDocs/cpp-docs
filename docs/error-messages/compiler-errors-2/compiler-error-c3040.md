---
title: "Compiler Error C3040"
description: "Learn more about: Compiler Error C3040"
ms.date: 11/04/2016
f1_keywords: ["C3040"]
helpviewer_keywords: ["C3040"]
---
# Compiler Error C3040

> 'var' : type of variable in 'reduction' clause is incompatible with reduction operator 'operator'

## Remarks

A variable in a [reduction](../../parallel/openmp/reference/openmp-clauses.md#reduction) clause cannot be used with the reduction operator.

## Example

The following example generates C3040:

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
