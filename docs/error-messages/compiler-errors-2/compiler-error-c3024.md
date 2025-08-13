---
title: "Compiler Error C3024"
description: "Learn more about: Compiler Error C3024"
ms.date: 11/04/2016
f1_keywords: ["C3024"]
helpviewer_keywords: ["C3024"]
---
# Compiler Error C3024

> 'schedule(runtime)' : chunk_size expression is not allowed

## Remarks

A value cannot be passed to the run-time parameter of the schedule clause.

## Example

The following example generates C3024:

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
