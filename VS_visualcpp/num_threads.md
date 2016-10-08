---
title: "num_threads"
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
ms.assetid: 09a56fc8-25c7-43e4-bbb5-71cb955d0b93
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
# num_threads
Sets the number of threads in a thread team.  
  
## Syntax  
  
```  
num_threads(num)  
```  
  
## Remarks  
 where,  
  
 `num`  
 The number of threads  
  
## Remarks  
 The `num_threads` clause has the same functionality as the [omp_set_num_threads](../VS_visualcpp/omp_set_num_threads.md) function.  
  
 `num_threads` applies to the following directives:  
  
-   [parallel](../VS_visualcpp/parallel.md)  
  
-   [for](../VS_visualcpp/for--OpenMP-.md)  
  
-   [sections](../VS_visualcpp/sections--OpenMP-.md)  
  
 For more information, see [2.3 parallel Construct](../VS_visualcpp/2.3-parallel-Construct.md).  
  
## Example  
 See [parallel](../VS_visualcpp/parallel.md) for an example of using `num_threads` clause.  
  
## See Also  
 [Clauses](../VS_visualcpp/OpenMP-Clauses.md)