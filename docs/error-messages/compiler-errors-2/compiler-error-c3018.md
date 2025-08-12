---
title: "Compiler Error C3018"
description: "Learn more about: Compiler Error C3018"
ms.date: 11/04/2016
f1_keywords: ["C3018"]
helpviewer_keywords: ["C3018"]
---
# Compiler Error C3018

> 'var1' : OpenMP 'for' test or increment must use index variable 'var2'

## Remarks

A **`for`** loop in an OpenMP statement must use the same variable for its test and increment as it uses for its index.

## Example

The following example generates C3018:

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
