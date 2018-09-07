---
title: "omp_nest_lock_t | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-parallel"]
ms.topic: "reference"
f1_keywords: ["omp_nest_lock_t"]
dev_langs: ["C++"]
helpviewer_keywords: ["omp_nest_lock_t OpenMP data type"]
ms.assetid: fceac9fb-96d2-42b0-af19-c9b078380618
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# omp_nest_lock_t
A type that holds the following pieces of information about a lock: whether the lock is available, and the identity of the thread that owns the lock and a nesting count.  
  
 The following functions use **omp_nest_lock_t**:  
  
-   [omp_init_nest_lock](../../../parallel/openmp/reference/omp-init-nest-lock.md)  
  
-   [omp_destroy_nest_lock](../../../parallel/openmp/reference/omp-destroy-nest-lock.md)  
  
-   [omp_set_nest_lock](../../../parallel/openmp/reference/omp-set-nest-lock.md)  
  
-   [omp_unset_nest_lock](../../../parallel/openmp/reference/omp-unset-nest-lock.md)  
  
-   [omp_test_nest_lock](../../../parallel/openmp/reference/omp-test-nest-lock.md)  
  
 For more information, see [3.2 Lock Functions](../../../parallel/openmp/3-2-lock-functions.md).  
  
## Example  
 See [omp_init_nest_lock](../../../parallel/openmp/reference/omp-init-nest-lock.md) for an example of using **omp_nest_lock_t**.  
  
## See Also  
 [Data Types](../../../parallel/openmp/reference/openmp-data-types.md)