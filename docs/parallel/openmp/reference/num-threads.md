---
title: "num_threads | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-parallel"]
ms.topic: "reference"
f1_keywords: ["num_threads"]
dev_langs: ["C++"]
helpviewer_keywords: ["num_threads OpenMP clause"]
ms.assetid: 09a56fc8-25c7-43e4-bbb5-71cb955d0b93
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
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
 The `num_threads` clause has the same functionality as the [omp_set_num_threads](../../../parallel/openmp/reference/omp-set-num-threads.md) function.  
  
 `num_threads` applies to the following directives:  
  
-   [parallel](../../../parallel/openmp/reference/parallel.md)  
  
-   [for](../../../parallel/openmp/reference/for-openmp.md)  
  
-   [sections](../../../parallel/openmp/reference/sections-openmp.md)  
  
 For more information, see [2.3 parallel Construct](../../../parallel/openmp/2-3-parallel-construct.md).  
  
## Example  
 See [parallel](../../../parallel/openmp/reference/parallel.md) for an example of using `num_threads` clause.  
  
## See Also  
 [Clauses](../../../parallel/openmp/reference/openmp-clauses.md)