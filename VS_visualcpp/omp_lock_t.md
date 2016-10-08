---
title: "omp_lock_t"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 51b80629-4ffc-4b8a-95c7-1af048f1f286
caps.latest.revision: 7
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# omp_lock_t
A type that holds the status of a lock, whether the lock is available or if a thread owns a lock.  
  
 The following functions use **omp_lock_t**:  
  
-   [omp_init_lock](../VS_visualcpp/omp_init_lock.md)  
  
-   [omp_destroy_lock](../VS_visualcpp/omp_destroy_lock.md)  
  
-   [omp_set_lock](../VS_visualcpp/omp_set_lock.md)  
  
-   [omp_unset_lock](../VS_visualcpp/omp_unset_lock.md)  
  
-   [omp_test_lock](../VS_visualcpp/omp_test_lock.md)  
  
 For more information, see [3.2 Lock Functions](../VS_visualcpp/3.2-Lock-Functions.md).  
  
## Example  
 See [omp_init_lock](../VS_visualcpp/omp_init_lock.md) for an example of using **omp_lock_t**.  
  
## See Also  
 [Data Types](../VS_visualcpp/OpenMP-Data-Types.md)