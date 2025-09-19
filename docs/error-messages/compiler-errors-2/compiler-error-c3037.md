---
title: "Compiler Error C3037"
description: "Learn more about: Compiler Error C3037"
ms.date: 11/04/2016
f1_keywords: ["C3037"]
helpviewer_keywords: ["C3037"]
---
# Compiler Error C3037

> 'var' : variable in 'reduction' clause must be shared in enclosing context

## Remarks

A variable specified in a [reduction](../../parallel/openmp/reference/openmp-clauses.md#reduction) clause may not be private to each thread in the context.

## Example

The following example generates C3037:

```cpp
// C3037.cpp
// compile with: /openmp /c
int g_i;

int main() {
   int i;

   #pragma omp parallel private(g_i)
   // try the following line instead
   // #pragma omp parallel
   {
      #pragma omp for reduction(+:g_i)   // C3037
      for (i = 0 ; i < 10 ; ++i) {
         g_i += i;
      }
   }
}
```
