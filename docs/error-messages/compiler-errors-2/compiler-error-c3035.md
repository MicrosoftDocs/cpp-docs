---
title: "Compiler Error C3035"
description: "Learn more about: Compiler Error C3035"
ms.date: 11/04/2016
f1_keywords: ["C3035"]
helpviewer_keywords: ["C3035"]
---
# Compiler Error C3035

> OpenMP 'ordered' directive must bind directly to a 'for' or 'parallel for' directive with the 'ordered' clause

## Remarks

An ordered clause was ill formed.

## Example

The following example generates C3035:

```cpp
// C3035.cpp
// compile with: /openmp /link vcomps.lib
int main() {
   int n = 0, x, i;

   #pragma omp parallel private(n)
   {
      #pragma omp ordered   // C3035
      // Try the following line instead:
      // #pragma omp for ordered
       for (i = 0 ; i < 10 ; ++i)
         ;
   }
}
```
