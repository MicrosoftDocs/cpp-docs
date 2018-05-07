---
title: "3.2.2 omp_destroy_lock and omp_destroy_nest_lock Functions | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-parallel"]
ms.topic: "conceptual"
dev_langs: ["C++"]
ms.assetid: d334907d-94f7-4bbf-b20e-41d53484cbff
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# 3.2.2 omp_destroy_lock and omp_destroy_nest_lock Functions
These functions ensure that the pointed to lock variable *lock* is uninitialized. The format is as follows:  
  
```  
#include <omp.h>  
void omp_destroy_lock(omp_lock_t *lock);  
void omp_destroy_nest_lock(omp_nest_lock_t *lock);  
```  
  
 It is noncompliant to call either of these routines with a lock variable that is uninitialized or unlocked.