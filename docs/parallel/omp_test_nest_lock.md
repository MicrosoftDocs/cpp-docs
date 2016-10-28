---
title: "omp_test_nest_lock"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "omp_test_nest_lock"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "omp_test_nest_lock OpenMP function"
ms.assetid: 4c909bbe-80e0-4100-aca6-d415d7dc5294
caps.latest.revision: 10
ms.author: "mithom"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# omp_test_nest_lock
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
 A variable of type [omp_nest_lock_t](../parallel/omp_nest_lock_t.md) that was initialized with [omp_init_nest_lock](../parallel/omp_init_nest_lock.md).  
  
## Remarks  
 For more information, see [3.2.5 omp_test_lock and omp_test_nest_lock Functions](../parallel/3.2.5-omp_test_lock-and-omp_test_nest_lock-functions.md).  
  
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
  
 **Thread 1 - acquired nestable_lock**  
**Thread 0 - failed to acquire nestable_lock**  
**Thread 1 - acquired nestable_lock again**  
**Thread 0 - failed to acquire nestable_lock**  
**Thread 1 - released nestable_lock**  
**Thread 0 - failed to acquire nestable_lock**  
**Thread 1 - released nestable_lock**  
**Thread 0 - failed to acquire nestable_lock**  
**Thread 3 - acquired nestable_lock**  
**Thread 0 - failed to acquire nestable_lock**  
**Thread 3 - acquired nestable_lock again**  
**Thread 0 - failed to acquire nestable_lock**  
**Thread 2 - failed to acquire nestable_lock**  
**Thread 3 - released nestable_lock**  
**Thread 2 - failed to acquire nestable_lock**  
**Thread 3 - released nestable_lock**  
**Thread 2 - failed to acquire nestable_lock**  
**Thread 0 - acquired nestable_lock**  
**Thread 2 - failed to acquire nestable_lock**  
**Thread 2 - failed to acquire nestable_lock**  
**Thread 2 - failed to acquire nestable_lock**  
**Thread 0 - acquired nestable_lock again**  
**Thread 2 - failed to acquire nestable_lock**  
**Thread 0 - released nestable_lock**  
**Thread 2 - failed to acquire nestable_lock**  
**Thread 0 - released nestable_lock**  
**Thread 2 - failed to acquire nestable_lock**  
**Thread 2 - acquired nestable_lock**  
**Thread 2 - acquired nestable_lock again**  
**Thread 2 - released nestable_lock**  
**Thread 2 - released nestable_lock**   
## See Also  
 [Functions](../parallel/openmp-functions.md)