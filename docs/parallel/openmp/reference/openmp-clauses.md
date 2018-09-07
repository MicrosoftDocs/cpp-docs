---
title: "OpenMP Clauses | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-parallel"]
ms.topic: "reference"
dev_langs: ["C++"]
ms.assetid: 806e7d8f-b204-4e4c-a12c-273ab540a7ca
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# OpenMP Clauses
Provides links to clauses used in the OpenMP API.  
  
 Visual C++ supports the following OpenMP clauses:  
  
|Clause|Description|  
|------------|-----------------|  
|[copyin](../../../parallel/openmp/reference/copyin.md)|Allows threads to access the master thread's value, for a [threadprivate](../../../parallel/openmp/reference/threadprivate.md) variable.|  
|[copyprivate](../../../parallel/openmp/reference/copyprivate.md)|Specifies that one or more variables should be shared among all threads.|  
|[default](../../../parallel/openmp/reference/default-openmp.md)|Specifies the behavior of unscoped variables in a parallel region.|  
|[firstprivate](../../../parallel/openmp/reference/firstprivate.md)|Specifies that each thread should have its own instance of a variable, and that the variable should be initialized with the value of the variable, because it exists before the parallel construct.|  
|[if](../../../parallel/openmp/reference/if-openmp.md)|Specifies whether a loop should be executed in parallel or in serial.|  
|[lastprivate](../../../parallel/openmp/reference/lastprivate.md)|Specifies that the enclosing context's version of the variable is set equal to the private version of whichever thread executes the final iteration (for-loop construct) or last section (#pragma sections).|  
|[nowait](../../../parallel/openmp/reference/nowait.md)|Overrides the barrier implicit in a directive.|  
|[num_threads](../../../parallel/openmp/reference/num-threads.md)|Sets the number of threads in a thread team.|  
|[ordered](../../../parallel/openmp/reference/ordered-openmp-clauses.md)|Required on a parallel [for](../../../parallel/openmp/reference/for-openmp.md) statement if an [ordered](../../../parallel/openmp/reference/ordered-openmp-directives.md) directive is to be used in the loop.|  
|[private](../../../parallel/openmp/reference/private-openmp.md)|Specifies that each thread should have its own instance of a variable.|  
|[reduction](../../../parallel/openmp/reference/reduction.md)|Specifies that one or more variables that are private to each thread are the subject of a reduction operation at the end of the parallel region.|  
|[schedule](../../../parallel/openmp/reference/schedule.md)|Applies to the [for](../../../parallel/openmp/reference/for-openmp.md) directive.|  
|[shared](../../../parallel/openmp/reference/shared-openmp.md)|Specifies that one or more variables should be shared among all threads.|  
  
## See Also  
 [OpenMP](../../../parallel/openmp/openmp-in-visual-cpp.md)   
 [Directives](../../../parallel/openmp/reference/openmp-directives.md)