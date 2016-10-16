---
title: "omp_init_nest_lock"
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
  - "omp_init_nest_lock"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "omp_init_nest_lock OpenMP function"
ms.assetid: cf749ec5-de78-4186-9588-ac7c42b02463
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
# omp_init_nest_lock
Initializes a lock.  
  
## Syntax  
  
```  
void omp_init_nest_lock(  
   omp_nest_lock_t *lock  
);  
```  
  
## Remarks  
 where,  
  
 `lock`  
 A variable of type [omp_nest_lock_t](../parallel/omp_nest_lock_t.md).  
  
## Remarks  
 The initial nesting count is zero.  
  
 For more information, see [3.2.1 omp_init_lock and omp_init_nest_lock Functions](../parallel/3.2.1-omp_init_lock-and-omp_init_nest_lock-functions.md).  
  
## Example  
  
```  
// omp_init_nest_lock.cpp  
// compile with: /openmp  
#include <stdio.h>  
#include <omp.h>  
  
omp_nest_lock_t my_lock;  
  
void Test() {  
   int tid = omp_get_thread_num( );  
   omp_set_nest_lock(&my_lock);  
   printf_s("Thread %d - starting nested locked region\n", tid);  
   printf_s("Thread %d - ending nested locked region\n", tid);  
   omp_unset_nest_lock(&my_lock);  
}  
  
int main() {  
   omp_init_nest_lock(&my_lock);  
  
   #pragma omp parallel num_threads(4)  
   {  
      int i, j;  
  
      for (i = 0; i < 5; ++i) {  
         omp_set_nest_lock(&my_lock);  
            if (i % 3)   
               Test();  
            omp_unset_nest_lock(&my_lock);  
        }  
    }  
  
    omp_destroy_nest_lock(&my_lock);  
}  
```  
  
 **Thread 0 - starting nested locked region**  
**Thread 0 - ending nested locked region**  
**Thread 0 - starting nested locked region**  
**Thread 0 - ending nested locked region**  
**Thread 3 - starting nested locked region**  
**Thread 3 - ending nested locked region**  
**Thread 3 - starting nested locked region**  
**Thread 3 - ending nested locked region**  
**Thread 3 - starting nested locked region**  
**Thread 3 - ending nested locked region**  
**Thread 2 - starting nested locked region**  
**Thread 2 - ending nested locked region**  
**Thread 2 - starting nested locked region**  
**Thread 2 - ending nested locked region**  
**Thread 2 - starting nested locked region**  
**Thread 2 - ending nested locked region**  
**Thread 1 - starting nested locked region**  
**Thread 1 - ending nested locked region**  
**Thread 1 - starting nested locked region**  
**Thread 1 - ending nested locked region**  
**Thread 1 - starting nested locked region**  
**Thread 1 - ending nested locked region**  
**Thread 0 - starting nested locked region**  
**Thread 0 - ending nested locked region**   
## See Also  
 [Functions](../parallel/openmp-functions.md)