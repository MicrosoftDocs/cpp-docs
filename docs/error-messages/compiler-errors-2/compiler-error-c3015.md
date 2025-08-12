---
title: "Compiler Error C3015"
description: "Learn more about: Compiler Error C3015"
ms.date: 11/04/2016
f1_keywords: ["C3015"]
helpviewer_keywords: ["C3015"]
---
# Compiler Error C3015

> initialization in OpenMP 'for' statement has improper form

## Remarks

A **`for`** loop in an OpenMP statement must be fully and explicitly specified.

## Example

The following example generates C3015:

```cpp
// C3015.cpp
// compile with: /openmp
int main()
{
   int i = 0, j = 10;

   #pragma omp parallel
   {
      #pragma omp for
      for (; i < 0; i += j)   // C3015
      // Try the following line instead:
      // for (i = 0; i < 0; i++)
         --j;
   }
}
```
