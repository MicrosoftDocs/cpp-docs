---
description: "Learn more about: Compiler Error C3049"
title: "Compiler Error C3049"
ms.date: "11/04/2016"
f1_keywords: ["C3049"]
helpviewer_keywords: ["C3049"]
ms.assetid: 6ddf54f6-2c30-4d04-b637-98c6c922c533
---
# Compiler Error C3049

'arg' : invalid argument in OpenMP 'default' clause

An incorrect value was passed to a [default](../../parallel/openmp/reference/openmp-clauses.md#default-openmp) clause.

The following sample generates C3049:

```cpp
// C3049.cpp
// compile with: /openmp /c
int main() {
   int n1 = 1;

   #pragma omp parallel default(private)   // C3049
   // try the following line instead
   // #pragma omp parallel default(shared)
   {
      ++n1;
   }
}
```
