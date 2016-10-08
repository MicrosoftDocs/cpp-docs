---
title: "omp_nest_lock_t"
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
ms.assetid: fceac9fb-96d2-42b0-af19-c9b078380618
caps.latest.revision: 8
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
# omp_nest_lock_t
A type that holds the following pieces of information about a lock: whether the lock is available, and the identity of the thread that owns the lock and a nesting count.  
  
 The following functions use **omp_nest_lock_t**:  
  
-   [omp_init_nest_lock](../VS_visualcpp/omp_init_nest_lock.md)  
  
-   [omp_destroy_nest_lock](../VS_visualcpp/omp_destroy_nest_lock.md)  
  
-   [omp_set_nest_lock](../VS_visualcpp/omp_set_nest_lock.md)  
  
-   [omp_unset_nest_lock](../VS_visualcpp/omp_unset_nest_lock.md)  
  
-   [omp_test_nest_lock](../VS_visualcpp/omp_test_nest_lock.md)  
  
 For more information, see [3.2 Lock Functions](../VS_visualcpp/3.2-Lock-Functions.md).  
  
## Example  
 See [omp_init_nest_lock](../VS_visualcpp/omp_init_nest_lock.md) for an example of using **omp_nest_lock_t**.  
  
## See Also  
 [Data Types](../VS_visualcpp/OpenMP-Data-Types.md)