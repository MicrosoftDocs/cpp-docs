---
title: "A.31   Thread-Safe Lock Functions | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-parallel"]
ms.topic: "conceptual"
dev_langs: ["C++"]
ms.assetid: 3ad89eb8-076c-405a-be5e-88d3d707a832
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# A.31   Thread-Safe Lock Functions
The following C++ example demonstrates how to initialize an array of locks in a parallel region by using `omp_init_lock` ([Section 3.2.1](../../parallel/openmp/3-2-1-omp-init-lock-and-omp-init-nest-lock-functions.md) on page 42).  
  
## Example  
  
### Code  
  
```  
// A_13_omp_init_lock.cpp  
// compile with: /openmp  
#include <omp.h>  
  
omp_lock_t *new_locks() {  
   int i;  
   omp_lock_t *lock = new omp_lock_t[1000];  
   #pragma omp parallel for private(i)  
   for (i = 0 ; i < 1000 ; i++)  
      omp_init_lock(&lock[i]);  
  
   return lock;  
}  
  
int main () {}  
```