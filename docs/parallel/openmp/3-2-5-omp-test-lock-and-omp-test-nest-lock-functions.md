---
title: "3.2.5 omp_test_lock and omp_test_nest_lock Functions | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-parallel"]
ms.topic: "conceptual"
dev_langs: ["C++"]
ms.assetid: 36818945-c22c-4c24-b754-4e73eba6f3f8
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# 3.2.5 omp_test_lock and omp_test_nest_lock Functions
These functions attempt to set a lock but do not block execution of the thread. The format is as follows:  
  
```  
#include <omp.h>  
int omp_test_lock(omp_lock_t *lock);  
int omp_test_nest_lock(omp_nest_lock_t *lock);  
```  
  
 The argument must point to an initialized lock variable. These functions attempt to set a lock in the same manner as `omp_set_lock` and `omp_set_nest_lock`, except that they do not block execution of the thread.  
  
 For a simple lock, the `omp_test_lock` function returns a nonzero value if the lock is successfully set; otherwise, it returns zero.  
  
 For a nestable lock, the `omp_test_nest_lock` function returns the new nesting count if the lock is successfully set; otherwise, it returns zero.