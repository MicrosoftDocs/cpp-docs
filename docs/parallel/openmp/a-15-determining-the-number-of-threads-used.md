---
title: "A.15   Determining the Number of Threads Used | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-parallel"]
ms.topic: "conceptual"
dev_langs: ["C++"]
ms.assetid: 026bb59a-f668-40db-a7cb-69a1bae83d2d
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# A.15   Determining the Number of Threads Used
Consider the following incorrect example (for [Section 3.1.2](../../parallel/openmp/3-1-2-omp-get-num-threads-function.md) on page 37):  
  
```  
np = omp_get_num_threads(); // misplaced   
#pragma omp parallel for schedule(static)  
    for (i=0; i<np; i++)  
        work(i);  
```  
  
 The `omp_get_num_threads()` call returns 1 in the serial section of the code, so *np* will always be equal to 1 in the preceding example. To determine the number of threads that will be deployed for the parallel region, the call should be inside the parallel region.  
  
 The following example shows how to rewrite this program without including a query for the number of threads:  
  
```  
#pragma omp parallel private(i)  
{  
    i = omp_get_thread_num();  
    work(i);  
}  
```