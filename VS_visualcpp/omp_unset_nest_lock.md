---
title: "omp_unset_nest_lock"
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
ms.assetid: 1721d061-3f9c-45d7-b479-a665cd0a121d
caps.latest.revision: 9
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
# omp_unset_nest_lock
Releases a nestable lock.  
  
## Syntax  
  
```  
void omp_unset_nest_lock(   
   omp_nest_lock_t *lock   
);  
```  
  
## Remarks  
 where,  
  
 `lock`  
 A variable of type [omp_nest_lock_t](../VS_visualcpp/omp_nest_lock_t.md) that was initialized with [omp_init_nest_lock](../VS_visualcpp/omp_init_nest_lock.md), owned by the thread and executing in the function.  
  
## Remarks  
 For more information, see [3.2.4 omp_unset_lock and omp_unset_nest_lock Functions](../VS_visualcpp/3.2.4-omp_unset_lock-and-omp_unset_nest_lock-Functions.md).  
  
## Example  
 See [omp_init_nest_lock](../VS_visualcpp/omp_init_nest_lock.md) for an example of using `omp_unset_nest_lock`.  
  
## See Also  
 [Functions](../VS_visualcpp/OpenMP-Functions.md)