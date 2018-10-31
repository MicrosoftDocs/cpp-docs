---
title: "A.27   Use of C99 Variable Length Arrays"
ms.date: "11/04/2016"
ms.assetid: 8e542701-39f9-4f28-ab3a-840e8e669723
---
# A.27   Use of C99 Variable Length Arrays

The following example demonstrates how to use C99 Variable Length Arrays (VLAs) in a `firstprivate` directive ([Section 2.7.2.2](../../parallel/openmp/2-7-2-2-firstprivate.md) on page 26).

> [!NOTE]
>  Variable length arrays are not currently supported in Visual C++.

```
void f(int m, int C[m][m])
{
    double v1[m];
    ...
    #pragma omp parallel firstprivate(C, v1)
    ...
}
```