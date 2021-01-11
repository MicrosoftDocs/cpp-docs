---
description: "Learn more about: Compiler Error C3020"
title: "Compiler Error C3020"
ms.date: "11/04/2016"
f1_keywords: ["C3020"]
helpviewer_keywords: ["C3020"]
ms.assetid: f625c7a3-afaa-4bd8-9c1b-51891b832f36
---
# Compiler Error C3020

'var' : index variable of OpenMP 'for' loop cannot be modified in loop body

An OpenMP **`for`** loop may not modify the index (loop counter) in the body of the **`for`** loop.

The following sample generates C3020:

```cpp
// C3020.cpp
// compile with: /openmp
int main() {
   int i = 0, n = 3;

   #pragma omp parallel
   {
      #pragma omp for
      for (i = 0; i < 10; i += n)
         i *= 2;   // C3020
         // try the following line instead
         // n++;
   }
}
```

A variable declared with [lastprivate](../../parallel/openmp/reference/openmp-clauses.md#lastprivate) cannot be used as the index inside a parallelized loop.

The following sample will give C3020 for the second lastprivate because that lastprivate will trigger a write to idx_a within the outermost for loop. The first lastprivate doesn't give an error because that lastprivate triggers a write to idx_a outside the outermost for loop (technically, at the very end of the last iteration). The following sample generates C3020.

```cpp
// C3020b.cpp
// compile with: /openmp /c
float a[100][100];
int idx_a, idx_b;
void test(int first, int last)
{
   #pragma omp parallel for lastprivate(idx_a)
   for (idx_a = first; idx_a <= last; ++idx_a) {
      #pragma omp parallel for lastprivate(idx_a)   // C3020
      for (idx_b = first; idx_b <= last; ++idx_b) {
         a[idx_a][idx_b] += 1.0f;
      }
   }
}
```

The following sample demonstrates a possible resolution:

```cpp
// C3020c.cpp
// compile with: /openmp /c
float a[100][100];
int idx_a, idx_b;
void test(int first, int last)
{
   #pragma omp parallel for lastprivate(idx_a)
   for (idx_a = first; idx_a <= last; ++idx_a) {
      #pragma omp parallel for lastprivate(idx_b)
      for (idx_b = first; idx_b <= last; ++idx_b) {
         a[idx_a][idx_b] += 1.0f;
      }
   }
}
```
