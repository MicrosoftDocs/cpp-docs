---
title: "3.2.4 omp_unset_lock and omp_unset_nest_lock Functions"
ms.date: "11/04/2016"
ms.assetid: 5357e43e-a7c0-41d7-b529-3f7d15da8b11
---
# 3.2.4 omp_unset_lock and omp_unset_nest_lock Functions

These functions provide the means of releasing ownership of a lock. The format is as follows:

```
#include <omp.h>
void omp_unset_lock(omp_lock_t *lock);
void omp_unset_nest_lock(omp_nest_lock_t *lock);
```

The argument to each of these functions must point to an initialized lock variable owned by the thread executing the function. The behavior is undefined if the thread does not own that lock.

For a simple lock, the `omp_unset_lock` function releases the thread executing the function from ownership of the lock.

For a nestable lock, the `omp_unset_nest_lock` function decrements the nesting count, and releases the thread executing the function from ownership of the lock if the resulting count is zero.