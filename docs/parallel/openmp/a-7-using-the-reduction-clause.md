---
title: "A.7   Using the reduction Clause | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-parallel"]
ms.topic: "conceptual"
dev_langs: ["C++"]
ms.assetid: e71e65bc-a25c-4f02-b507-66b52bf950a4
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# A.7   Using the reduction Clause
The following example demonstrates the reduction clause ([Section 2.7.2.6](../../parallel/openmp/2-7-2-6-reduction.md) on page 28):  
  
```  
#pragma omp parallel for private(i) shared(x, y, n) \  
                         reduction(+: a, b)  
    for (i=0; i<n; i++) {  
        a = a + x[i];  
        b = b + y[i];  
    }  
```