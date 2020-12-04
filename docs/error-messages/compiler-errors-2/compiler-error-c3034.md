---
description: "Learn more about: Compiler Error C3034"
title: "Compiler Error C3034"
ms.date: "11/04/2016"
f1_keywords: ["C3034"]
helpviewer_keywords: ["C3034"]
ms.assetid: 49db8bac-2720-4622-94e3-7988f1603fa3
---
# Compiler Error C3034

OpenMP 'directive1' directive cannot be directly nested within 'directive2' directive

Some directives cannot be nested. To fix this error, you can merge the statements of both directives into the block of one directive, or you can construct consecutive directives.

The following sample generates C3034:

```cpp
// C3034.cpp
// compile with: /openmp /link vcomps.lib
int main() {

   #pragma omp single
   {
      #pragma omp single   // C3034
      {
      ;
      }
   }

   // Two consecutive single clauses are OK.
   #pragma omp single
   {
   }

   #pragma omp single
   {
   }
}
```
