---
title: "3.1.5 omp_get_num_procs Function"
ms.date: "11/04/2016"
ms.assetid: bbfbf17b-0c68-4ba6-a25d-07c36ecb551f
---
# 3.1.5 omp_get_num_procs Function

The `omp_get_num_procs` function returns the number of processors that are available to the program at the time the function is called. The format is as follows:

```
#include <omp.h>
int omp_get_num_procs(void);
```