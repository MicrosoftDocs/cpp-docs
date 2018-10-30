---
title: "3.3.1 omp_get_wtime Function"
ms.date: "11/04/2016"
ms.assetid: 90188bd2-c53e-4398-8946-d3ecc92fa0f6
---
# 3.3.1 omp_get_wtime Function

The `omp_get_wtime` function returns a double-precision floating point value equal to the elapsed wall clock time in seconds since some "time in the past".  The actual "time in the past" is arbitrary, but it is guaranteed not to change during the execution of the application program. The format is as follows:

```
#include <omp.h>
double omp_get_wtime(void);
```

It is anticipated that the function will be used to measure elapsed times as shown in the following example:

```
double start;
double end;
start = omp_get_wtime();
... work to be timed ...
end = omp_get_wtime();
printf_s("Work took %f sec. time.\n", end-start);
```

The times returned are "per-thread times" by which is meant they are not required to be globally consistent across all the threads participating in an application.