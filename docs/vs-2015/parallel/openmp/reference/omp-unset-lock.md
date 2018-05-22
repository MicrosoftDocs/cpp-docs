---
title: "omp_unset_lock | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "omp_unset_lock"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "omp_unset_lock OpenMP function"
ms.assetid: 68fcb728-040b-4bad-979e-aaecb9097a4e
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# omp_unset_lock
[!INCLUDE[blank_token](../../../includes/blank-token.md)]

Releases a lock.  
  
## Syntax  
  
```  
void omp_unset_lock(  
   omp_lock_t *lock  
);  
```  
  
## Remarks  
 where,  
  
 `lock`  
 A variable of type [omp_lock_t](../../../parallel/openmp/reference/omp-lock-t.md) that was initialized with [omp_init_lock](../../../parallel/openmp/reference/omp-init-lock.md), owned by the thread and executing in the function.  
  
## Remarks  
 For more information, see [3.2.4 omp_unset_lock and omp_unset_nest_lock Functions](../../../parallel/openmp/3-2-4-omp-unset-lock-and-omp-unset-nest-lock-functions.md).  
  
## Example  
 See [omp_init_lock](../../../parallel/openmp/reference/omp-init-lock.md) for an example of using `omp_unset_lock`.  
  
## See Also  
 [Functions](../../../parallel/openmp/reference/openmp-functions.md)