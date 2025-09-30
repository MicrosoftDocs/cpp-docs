---
title: "Compiler Error C3048"
description: "Learn more about: Compiler Error C3048"
ms.date: 11/04/2016
f1_keywords: ["C3048"]
helpviewer_keywords: ["C3048"]
---
# Compiler Error C3048

> Expression following '#pragma omp atomic' has improper form

## Remarks

An atomic directive was incorrectly specified.

## Example

The following example generates C3048:

```cpp
// C3048.cpp
// compile with: /openmp vcomps.lib
#include "omp.h"
#include <stdio.h>

int main() {
   int a[10];
   omp_set_num_threads(4);
   #pragma omp parallel
   {
      #pragma omp atomic
      a[0] = 1;   // C3048
      // try the following line instead
      // a[0] += 1;
   }
}
```
