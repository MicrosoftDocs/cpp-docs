---
description: "Learn more about: Compiler Error C3019"
title: "Compiler Error C3019"
ms.date: "11/04/2016"
f1_keywords: ["C3019"]
helpviewer_keywords: ["C3019"]
ms.assetid: 31a6d9b6-d29f-4499-9ad8-48dd751e87c7
---
# Compiler Error C3019

increment in OpenMP 'for' statement has improper form

The increment part of an OpenMP **`for`** loop must use the index variable both on the left and right side of the operator.

The following sample generates C3019:

```cpp
// C3019.cpp
// compile with: /openmp
int main()
{
   int i = 0, j = 1, n = 3;

   #pragma omp parallel
   {
      #pragma omp for
      for (i = 0; i < 10; i = j + n)   // C3019
      // Try the following line instead:
      // for (i = 0; i < 10; i++)
         j *= 2;
   }
}
```
