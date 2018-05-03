---
title: "A.3   Using Parallel Regions | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-parallel"]
ms.topic: "conceptual"
dev_langs: ["C++"]
ms.assetid: 575216a1-960a-47f7-9c82-7f660291fcfe
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# A.3   Using Parallel Regions
The `parallel` directive ([Section 2.3](../../parallel/openmp/2-3-parallel-construct.md) on page 8) can be used in coarse-grain parallel programs. In the following example, each thread in the parallel region decides what part of the global array `x` to work on, based on the thread number:  
  
```  
#pragma omp parallel shared(x, npoints) private(iam, np, ipoints)  
{  
    iam = omp_get_thread_num();  
    np =  omp_get_num_threads();  
    ipoints = npoints / np;  
    subdomain(x, iam, ipoints);  
}  
```