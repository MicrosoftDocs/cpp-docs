---
description: "Learn more about: Compiler Error C3008"
title: "Compiler Error C3008"
ms.date: "11/04/2016"
f1_keywords: ["C3008"]
helpviewer_keywords: ["C3008"]
ms.assetid: 04d93201-28e5-4be0-945c-aad616376f4b
---
# Compiler Error C3008

'arg' : argument is missing closing ')' on OpenMP 'directive' directive

An OpenMP directive that takes an argument did not have a closing parenthesis.

The following sample generates C3008:

```c
// C3008.c
// compile with: /openmp
int main()
{
   int x, y, z;
   #pragma omp parallel shared(x   // C3008
   // Try the following line instead:
   #pragma omp parallel shared(x)
   {
   }
}
```
