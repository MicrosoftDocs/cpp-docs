---
description: "Learn more about: Compiler Error C3018"
title: "Compiler Error C3018"
ms.date: "11/04/2016"
f1_keywords: ["C3018"]
helpviewer_keywords: ["C3018"]
ms.assetid: 685be45f-f116-43a8-a88d-05ab6616e2f1
---
# Compiler Error C3018

'var1' : OpenMP 'for' test or increment must use index variable 'var2'

A **`for`** loop in an OpenMP statement must use the same variable for its test and increment as it uses for its index.

The following sample generates C3018:

```cpp
// C3018.cpp
// compile with: /openmp
int main()
{
   int i = 0, j = 5;

   #pragma omp parallel
   {
      #pragma omp for
      for (i = 0; j < 10; ++i)   // C3018
      // try the following line instead
      // for (i = 0; i < 10; ++i)
         j *= 2;

      #pragma omp for
      for (i = 0; i < 10; j = j + i)   // C3018
      // try the following line instead
      // for (i = 0; i < 10; i = j + i)
         j *= 2;
   }
}
```
