---
title: "omp_set_nest_lock | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-parallel"]
ms.topic: "reference"
f1_keywords: ["omp_set_nest_lock"]
dev_langs: ["C++"]
helpviewer_keywords: ["omp_set_nest_lock OpenMP function"]
ms.assetid: b98ed889-ff8e-4217-a3e9-3993ed8699af
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# omp_set_nest_lock
Blocks thread execution until a lock is available.  
  
## Syntax  
  
```  
void omp_set_nest_lock(  
   omp_nest_lock_t *lock  
);  
```  
  
## Remarks  
 where,  
  
 `lock`  
 A variable of type [omp_nest_lock_t](../../../parallel/openmp/reference/omp-nest-lock-t.md) that was initialized with [omp_init_nest_lock](../../../parallel/openmp/reference/omp-init-nest-lock.md).  
  
## Remarks  
 For more information, see [3.2.3 omp_set_lock and omp_set_nest_lock Functions](../../../parallel/openmp/3-2-3-omp-set-lock-and-omp-set-nest-lock-functions.md).  
  
## Examples  
 See [omp_init_nest_lock](../../../parallel/openmp/reference/omp-init-nest-lock.md) for an example of using `omp_set_nest_lock`.  
  
## See Also  
 [Functions](../../../parallel/openmp/reference/openmp-functions.md)