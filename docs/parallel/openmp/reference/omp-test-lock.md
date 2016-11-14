---
title: "omp_test_lock | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "omp_test_lock"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "omp_test_lock OpenMP function"
ms.assetid: 314ca85e-0749-4c16-800f-b0f36fed256d
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
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
# omp_test_lock
Attempts to set a lock but does not block thread execution.  
  
## Syntax  
  
```  
int omp_test_lock(  
   omp_lock_t *lock  
);  
```  
  
## Remarks  
 where,  
  
 `lock`  
 A variable of type [omp_lock_t](../../../parallel/openmp/reference/omp-lock-t.md) that was initialized with [omp_init_lock](../../../parallel/openmp/reference/omp-init-lock.md).  
  
## Remarks  
 For more information, see [3.2.5 omp_test_lock and omp_test_nest_lock Functions](../../../parallel/openmp/3-2-5-omp-test-lock-and-omp-test-nest-lock-functions.md).  
  
## Example  
  
```  
// omp_test_lock.cpp  
// compile with: /openmp  
#include <stdio.h>  
#include <omp.h>  
  
omp_lock_t simple_lock;                   
  
int main() {  
    omp_init_lock(&simple_lock);  
  
    #pragma omp parallel num_threads(4)  
    {  
        int tid = omp_get_thread_num();  
  
        while (!omp_test_lock(&simple_lock))  
            printf_s("Thread %d - failed to acquire simple_lock\n",  
                     tid);  
  
        printf_s("Thread %d - acquired simple_lock\n", tid);  
  
        printf_s("Thread %d - released simple_lock\n", tid);  
        omp_unset_lock(&simple_lock);  
    }  
  
    omp_destroy_lock(&simple_lock);  
}  
```  
  
```Output  
Thread 1 - acquired simple_lock  
Thread 1 - released simple_lock  
Thread 0 - failed to acquire simple_lock  
Thread 3 - failed to acquire simple_lock  
Thread 0 - failed to acquire simple_lock  
Thread 3 - failed to acquire simple_lock  
Thread 2 - acquired simple_lock  
Thread 0 - failed to acquire simple_lock  
Thread 3 - failed to acquire simple_lock  
Thread 0 - failed to acquire simple_lock  
Thread 3 - failed to acquire simple_lock  
Thread 2 - released simple_lock  
Thread 0 - failed to acquire simple_lock  
Thread 3 - failed to acquire simple_lock  
Thread 0 - acquired simple_lock  
Thread 3 - failed to acquire simple_lock  
Thread 0 - released simple_lock  
Thread 3 - failed to acquire simple_lock  
Thread 3 - acquired simple_lock  
Thread 3 - released simple_lock  
```  
  
## See Also  
 [Functions](../../../parallel/openmp/reference/openmp-functions.md)