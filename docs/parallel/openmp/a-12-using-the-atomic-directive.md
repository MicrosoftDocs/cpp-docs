---
title: "A.12   Using the atomic Directive | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-parallel"]
ms.topic: "conceptual"
dev_langs: ["C++"]
ms.assetid: d3ba3c87-413d-4efa-8a45-8a7f28ab0164
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# A.12   Using the atomic Directive
The following example avoids race conditions (simultaneous updates of an element of *x* by multiple threads) by using the `atomic` directive ([Section 2.6.4](../../parallel/openmp/2-6-4-atomic-construct.md) on page 19):  
  
```  
#pragma omp parallel for shared(x, y, index, n)  
    for (i=0; i<n; i++)   
    {  
        #pragma omp atomic  
            x[index[i]] += work1(i);  
        y[i] += work2(i);  
    }  
```  
  
 The advantage of using the `atomic` directive in this example is that it allows updates of two different elements of x to occur in parallel. If a `critical` directive  ([Section 2.6.2](../../parallel/openmp/2-6-2-critical-construct.md) on page 18) were used instead, then all updates to elements of *x* would be executed serially (though not in any guaranteed order).  
  
 Note that the `atomic` directive applies only to the C or C++ statement immediately following it.  As a result, elements of *y* are not updated atomically in this example.