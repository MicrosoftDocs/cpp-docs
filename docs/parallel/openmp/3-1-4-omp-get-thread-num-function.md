---
title: "3.1.4 omp_get_thread_num Function"
ms.date: "11/04/2016"
ms.assetid: 5220402b-c109-4b1f-ba79-002e93d08617
---
# 3.1.4 omp_get_thread_num Function

The `omp_get_thread_num` function returns the thread number, within its team, of the thread executing the function. The thread number lies between 0 and **omp_get_num_threads()**-1, inclusive. The master thread of the team is thread 0.

The format is as follows:

```
#include <omp.h>
int omp_get_thread_num(void);
```

If called from a serial region, `omp_get_thread_num` returns 0. If called from within a nested parallel region that is serialized, this function returns 0.

## Cross References:

- `omp_get_num_threads` function, see [Section 3.1.2](../../parallel/openmp/3-1-2-omp-get-num-threads-function.md) on page 37.