---
title: "OpenMP Clauses"
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
ms.assetid: 806e7d8f-b204-4e4c-a12c-273ab540a7ca
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
# OpenMP Clauses
Provides links to clauses used in the OpenMP API.  
  
 Visual C++ supports the following OpenMP clauses:  
  
|Clause|Description|  
|------------|-----------------|  
|[copyin](../VS_visualcpp/copyin.md)|Allows threads to access the master thread's value, for a [threadprivate](../VS_visualcpp/threadprivate.md) variable.|  
|[copyprivate](../VS_visualcpp/copyprivate.md)|Specifies that one or more variables should be shared among all threads.|  
|[default](../VS_visualcpp/default--OpenMP-.md)|Specifies the behavior of unscoped variables in a parallel region.|  
|[firstprivate](../VS_visualcpp/firstprivate.md)|Specifies that each thread should have its own instance of a variable, and that the variable should be initialized with the value of the variable, because it exists before the parallel construct.|  
|[if](../VS_visualcpp/if--OpenMP-.md)|Specifies whether a loop should be executed in parallel or in serial.|  
|[lastprivate](../VS_visualcpp/lastprivate.md)|Specifies that the enclosing context's version of the variable is set equal to the private version of whichever thread executes the final iteration (for-loop construct) or last section (#pragma sections).|  
|[nowait](../VS_visualcpp/nowait.md)|Overrides the barrier implicit in a directive.|  
|[num_threads](../VS_visualcpp/num_threads.md)|Sets the number of threads in a thread team.|  
|[ordered](../VS_visualcpp/ordered--OpenMP-Clauses-.md)|Required on a parallel [for](../VS_visualcpp/for--OpenMP-.md) statement if an [ordered](../VS_visualcpp/ordered--OpenMP-Directives-.md) directive is to be used in the loop.|  
|[private](../VS_visualcpp/private--OpenMP-.md)|Specifies that each thread should have its own instance of a variable.|  
|[reduction](../VS_visualcpp/reduction.md)|Specifies that one or more variables that are private to each thread are the subject of a reduction operation at the end of the parallel region.|  
|[schedule](../VS_visualcpp/schedule.md)|Applies to the [for](../VS_visualcpp/for--OpenMP-.md) directive.|  
|[shared](../VS_visualcpp/shared--OpenMP-.md)|Specifies that one or more variables should be shared among all threads.|  
  
## See Also  
 [OpenMP](../VS_visualcpp/OpenMP-in-Visual-C--.md)   
 [Directives](../VS_visualcpp/OpenMP-Directives.md)