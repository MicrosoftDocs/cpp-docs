---
title: "A.10   Specifying Sequential Ordering | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: ["C++"]
ms.assetid: 5c65a9b1-0fc5-4cad-a5a9-9ce10b25d25c
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# A.10   Specifying Sequential Ordering
Ordered sections ([Section 2.6.6](../../parallel/openmp/2-6-6-ordered-construct.md) on page 22) are useful for sequentially ordering the output from work that is done in parallel. The following program prints out the indexes in sequential order:  
  
```  
#pragma omp for ordered schedule(dynamic)  
    for (i=lb; i<ub; i+=st)  
        work(i);  
void work(int k)  
{  
    #pragma omp ordered  
        printf_s(" %d", k);  
}  
```