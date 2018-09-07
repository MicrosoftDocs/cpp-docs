---
title: "A.6   Using the lastprivate Clause | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-parallel"]
ms.topic: "conceptual"
dev_langs: ["C++"]
ms.assetid: cf3bf0cc-aa46-4e44-9433-e2969e3be2c1
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# A.6   Using the lastprivate Clause
Correct execution sometimes depends on the value that the last iteration of a loop assigns to a variable. Such programs must list all such variables as arguments to a `lastprivate` clause ([Section 2.7.2.3](../../parallel/openmp/2-7-2-3-lastprivate.md) on page 27) so that the values of the variables are the same as when the loop is executed sequentially.  
  
```  
#pragma omp parallel  
{  
   #pragma omp for lastprivate(i)  
      for (i=0; i<n-1; i++)  
         a[i] = b[i] + b[i+1];  
}  
a[i]=b[i];  
```  
  
 In the preceding example, the value of `i` at the end of the parallel region will equal `n-1`, as in the sequential case.