---
title: "Compiler Error C3030"
description: "Learn more about: Compiler Error C3030"
ms.date: 11/04/2016
f1_keywords: ["C3030"]
helpviewer_keywords: ["C3030"]
---
# Compiler Error C3030

> 'var' : variable in 'reduction' clause/directive cannot have reference type

## Remarks

You can only pass value parameters to certain clauses, such as the reduction clause.

## Example

The following example generates C3030:

```cpp
// C3030.cpp
// compile with: /openmp /link vcomps.lib
#include "omp.h"

void test(int &r) {
   #pragma omp parallel reduction(+ : r)   // C3030
      ;
}

void test2(int r) {
   #pragma omp parallel reduction(+ : r)   // OK
      ;
}

int main(int argc, char** argv) {
   int& r = *((int*)argv);
   int s = *((int*)argv);

   #pragma omp parallel reduction(+ : r)   // C3030
      ;

   #pragma omp parallel reduction(+ : s)   // OK
      ;
}
```
