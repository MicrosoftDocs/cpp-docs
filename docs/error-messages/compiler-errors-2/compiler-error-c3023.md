---
title: "Compiler Error C3023"
description: "Learn more about: Compiler Error C3023"
ms.date: 11/04/2016
f1_keywords: ["C3023"]
helpviewer_keywords: ["C3023"]
---
# Compiler Error C3023

> 'value' : unexpected token encountered in argument to OpenMP 'clause' clause

## Remarks

The values passed to a clause were not valid.

## Example

The following example generates C3023:

```cpp
// C3023.cpp
// compile with: /openmp /link vcomps.lib
#include <stdio.h>
#include "omp.h"

int main() {
   int i;

   #pragma omp parallel for schedule(dynamic 10)   // C3023
   for (i = 0; i < 10; ++i) ;

   #pragma omp parallel for schedule(dynamic;10)   // C3023
   for (i = 0; i < 10; ++i) ;

   // OK
   #pragma omp parallel for schedule(dynamic, 10)
   for (i = 0; i < 10; ++i)
   ;
}
```
