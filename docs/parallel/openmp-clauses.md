---
title: "OpenMP Clauses"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: 806e7d8f-b204-4e4c-a12c-273ab540a7ca
caps.latest.revision: 7
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
# OpenMP Clauses
Provides links to clauses used in the OpenMP API.  
  
 Visual C++ supports the following OpenMP clauses:  
  
|Clause|Description|  
|------------|-----------------|  
|[copyin](../parallel/copyin.md)|Allows threads to access the master thread's value, for a [threadprivate](../parallel/threadprivate.md) variable.|  
|[copyprivate](../parallel/copyprivate.md)|Specifies that one or more variables should be shared among all threads.|  
|[default](../parallel/default--openmp-.md)|Specifies the behavior of unscoped variables in a parallel region.|  
|[firstprivate](../parallel/firstprivate.md)|Specifies that each thread should have its own instance of a variable, and that the variable should be initialized with the value of the variable, because it exists before the parallel construct.|  
|[if](../parallel/if--openmp-.md)|Specifies whether a loop should be executed in parallel or in serial.|  
|[lastprivate](../parallel/lastprivate.md)|Specifies that the enclosing context's version of the variable is set equal to the private version of whichever thread executes the final iteration (for-loop construct) or last section (#pragma sections).|  
|[nowait](../parallel/nowait.md)|Overrides the barrier implicit in a directive.|  
|[num_threads](../parallel/num_threads.md)|Sets the number of threads in a thread team.|  
|[ordered](../parallel/ordered--openmp-clauses-.md)|Required on a parallel [for](../parallel/for--openmp-.md) statement if an [ordered](../parallel/ordered--openmp-directives-.md) directive is to be used in the loop.|  
|[private](../parallel/private--openmp-.md)|Specifies that each thread should have its own instance of a variable.|  
|[reduction](../parallel/reduction.md)|Specifies that one or more variables that are private to each thread are the subject of a reduction operation at the end of the parallel region.|  
|[schedule](../parallel/schedule.md)|Applies to the [for](../parallel/for--openmp-.md) directive.|  
|[shared](../parallel/shared--openmp-.md)|Specifies that one or more variables should be shared among all threads.|  
  
## See Also  
 [OpenMP](../parallel/openmp-in-visual-c--.md)   
 [Directives](../parallel/openmp-directives.md)