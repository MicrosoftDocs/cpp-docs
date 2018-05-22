---
title: "omp_test_nest_lock | Microsoft Docs"
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
  - "omp_test_nest_lock"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "omp_test_nest_lock OpenMP function"
ms.assetid: 4c909bbe-80e0-4100-aca6-d415d7dc5294
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# omp_test_nest_lock
[!INCLUDE[blank_token](../../../includes/blank-token.md)]

Attempts to set a nestable lock but does not block thread execution.  
  
## Syntax  
  
```  
int omp_test_nest_lock(  
   omp_nest_lock_t *lock  
);  
```  
  
## Remarks  
 where,  
  
 `lock`  
 A variable of type [omp_nest_lock_t](../../../parallel/openmp/reference/omp-nest-lock-t.md) that was initialized with [omp_init_nest_lock](../../../parallel/openmp/reference/omp-init-nest-lock.md).  
  
## Remarks  
 For more information, see [3.2.5 omp_test_lock and omp_test_nest_lock Functions](../../../parallel/openmp/3-2-5-omp-test-lock-and-omp-test-nest-lock-functions.md).  
  
## Example  
  
```  
// omp_test_nest_lock.cpp  
// compile with: /openmp  
#include <stdio.h>  
#include <omp.h>  
  
omp_nest_lock_t nestable_lock;      
  
int main() {  
   omp_init_nest_lock(&nestable_lock);  
  
   #pragma omp parallel num_threads(4)  
   {  
      int tid = omp_get_thread_num();  
      while (!omp_test_nest_lock(&nestable_lock))  
         printf_s("Thread %d - failed to acquire nestable_lock\n",  
                tid);  
  
      printf_s("Thread %d - acquired nestable_lock\n", tid);  
  
      if (omp_test_nest_lock(&nestable_lock)) {  
         printf_s("Thread %d - acquired nestable_lock again\n",  
                tid);  
         printf_s("Thread %d - released nestable_lock\n",   
                tid);  
         omp_unset_nest_lock(&nestable_lock);  
      }  
  
      printf_s("Thread %d - released nestable_lock\n", tid);  
      omp_unset_nest_lock(&nestable_lock);  
   }  
  
   omp_destroy_nest_lock(&nestable_lock);  
}  
```  
  
```Output  
Thread 1 - acquired nestable_lock  
Thread 0 - failed to acquire nestable_lock  
Thread 1 - acquired nestable_lock again  
Thread 0 - failed to acquire nestable_lock  
Thread 1 - released nestable_lock  
Thread 0 - failed to acquire nestable_lock  
Thread 1 - released nestable_lock  
Thread 0 - failed to acquire nestable_lock  
Thread 3 - acquired nestable_lock  
Thread 0 - failed to acquire nestable_lock  
Thread 3 - acquired nestable_lock again  
Thread 0 - failed to acquire nestable_lock  
Thread 2 - failed to acquire nestable_lock  
Thread 3 - released nestable_lock  
Thread 2 - failed to acquire nestable_lock  
Thread 3 - released nestable_lock  
Thread 2 - failed to acquire nestable_lock  
Thread 0 - acquired nestable_lock  
Thread 2 - failed to acquire nestable_lock  
Thread 2 - failed to acquire nestable_lock  
Thread 2 - failed to acquire nestable_lock  
Thread 0 - acquired nestable_lock again  
Thread 2 - failed to acquire nestable_lock  
Thread 0 - released nestable_lock  
Thread 2 - failed to acquire nestable_lock  
Thread 0 - released nestable_lock  
Thread 2 - failed to acquire nestable_lock  
Thread 2 - acquired nestable_lock  
Thread 2 - acquired nestable_lock again  
Thread 2 - released nestable_lock  
Thread 2 - released nestable_lock  
```  
  
## See Also  
 [Functions](../../../parallel/openmp/reference/openmp-functions.md)