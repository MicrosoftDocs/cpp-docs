---
title: "A.4   Using the nowait Clause"
ms.date: "11/04/2016"
ms.assetid: d3de2111-05ea-4ee3-a66c-57bd988712af
---
# A.4   Using the nowait Clause

If there are multiple independent loops within a parallel region, you can use the `nowait` clause ([Section 2.4.1](../../parallel/openmp/2-4-1-for-construct.md) on page 11) to avoid the implied barrier at the end of the `for` directive, as follows:

```
#pragma omp parallel
{
    #pragma omp for nowait
        for (i=1; i<n; i++)
             b[i] = (a[i] + a[i-1]) / 2.0;
    #pragma omp for nowait
        for (i=0; i<m; i++)
            y[i] = sqrt(z[i]);
}
```