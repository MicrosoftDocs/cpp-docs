---
title: "3.1.8 omp_get_dynamic Function"
ms.date: "11/04/2016"
ms.assetid: c03e2daf-29c9-49e3-9b67-b980ad1ab195
---
# 3.1.8 omp_get_dynamic Function

The **omp_get_dynamic** function returns a nonzero value if dynamic adjustment of threads is enabled, and returns 0 otherwise. The format is as follows:

```
#include <omp.h>
int omp_get_dynamic(void);
```

If the implementation does not implement dynamic adjustment of the number of threads, this function always returns 0.

## Cross References:

- For a description of dynamic thread adjustment, see [Section 3.1.7](../../parallel/openmp/3-1-7-omp-set-dynamic-function.md) on page 39.