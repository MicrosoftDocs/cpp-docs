---
title: "omp_destroy_lock | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-parallel"]
ms.topic: "reference"
f1_keywords: ["omp_destroy_lock"]
dev_langs: ["C++"]
helpviewer_keywords: ["omp_destroy_lock OpenMP function"]
ms.assetid: b73ab036-b76f-4e42-82ff-c89db2edf7c0
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# omp_destroy_lock
Uninitializes a lock.  
  
## Syntax  
  
```  
void omp_destroy_lock(  
   omp_lock_t *lock  
);  
```  
  
## Remarks  
 where,  
  
 `lock`  
 A variable of type [omp_lock_t](../../../parallel/openmp/reference/omp-lock-t.md) that was initialized with [omp_init_lock](../../../parallel/openmp/reference/omp-init-lock.md).  
  
## Remarks  
 For more information, see [3.2.2 omp_destroy_lock and omp_destroy_nest_lock Functions](../../../parallel/openmp/3-2-2-omp-destroy-lock-and-omp-destroy-nest-lock-functions.md).  
  
## Example  
 See [omp_init_lock](../../../parallel/openmp/reference/omp-init-lock.md) for an example of using `omp_destroy_lock`.  
  
## See Also  
 [Functions](../../../parallel/openmp/reference/openmp-functions.md)