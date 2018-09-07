---
title: "omp_set_lock | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-parallel"]
ms.topic: "reference"
f1_keywords: ["omp_set_lock"]
dev_langs: ["C++"]
helpviewer_keywords: ["omp_set_lock OpenMP function"]
ms.assetid: ded839cb-ca19-403f-8622-eb52ce512d31
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# omp_set_lock
Blocks thread execution until a lock is available.  
  
## Syntax  
  
```  
void omp_set_lock(  
   omp_lock_t *lock  
);  
```  
  
## Remarks  
 where,  
  
 `lock`  
 A variable of type [omp_lock_t](../../../parallel/openmp/reference/omp-lock-t.md) that was initialized with [omp_init_lock](../../../parallel/openmp/reference/omp-init-lock.md).  
  
## Remarks  
 For more information, see [3.2.3 omp_set_lock and omp_set_nest_lock Functions](../../../parallel/openmp/3-2-3-omp-set-lock-and-omp-set-nest-lock-functions.md).  
  
## Examples  
 See [omp_init_lock](../../../parallel/openmp/reference/omp-init-lock.md) for an example of using `omp_set_lock`.  
  
## See Also  
 [Functions](../../../parallel/openmp/reference/openmp-functions.md)