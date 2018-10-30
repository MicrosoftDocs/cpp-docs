---
title: "3.1.6 omp_in_parallel Function"
ms.date: "11/04/2016"
ms.assetid: db6e3a63-2a0a-4b8e-8cc6-c6b49edca5fb
---
# 3.1.6 omp_in_parallel Function

The **omp_in_parallel** function returns a nonzero value if it is called within the dynamic extent of a parallel region executing in parallel; otherwise, it returns 0. The format is as follows:

```
#include <omp.h>
int omp_in_parallel(void);
```

This function returns a nonzero value when called from within a region executing in parallel, including nested regions that are serialized.