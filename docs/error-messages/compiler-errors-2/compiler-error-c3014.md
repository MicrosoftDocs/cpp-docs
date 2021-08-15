---
description: "Learn more about: Compiler Error C3014"
title: "Compiler Error C3014"
ms.date: "11/04/2016"
f1_keywords: ["C3014"]
helpviewer_keywords: ["C3014"]
ms.assetid: af1c5b0c-dbf9-4274-b06a-c6c2cdcf2a52
---
# Compiler Error C3014

expected a for loop following OpenMP 'directive' directive

It is an error for anything other than a **`for`** loop to immediately follow a `#pragma omp for` directive.

The following sample generates C3014:

```cpp
// C3014.cpp
// compile with: /openmp
int main()
{
   int i = 0;

   #pragma omp parallel
   {
      #pragma omp for
      for (i = 0; i < 10; ++i)   // OK
      {
      }
   }

   #pragma omp parallel for
   for (i = 0; i < 10; ++i)   // OK
   {
   }

   #pragma omp parallel
   {
      #pragma omp for
      {   // C3014
         for (i = 0; i < 10; ++i)
         {
         }
      }
   }

   #pragma omp parallel for
   {   // C3014
      for (i = 0; i < 10; ++i)
      {
      }
   }

   #pragma omp parallel
   {
      #pragma omp for
      i *= 2;   // C3014
      for (i = 0; i < 10; ++i)
      {
      }
   }

   #pragma omp parallel for
   i *= 2;   // C3014
   for (i = 0; i < 10; ++i)
   {
   }
}
```
