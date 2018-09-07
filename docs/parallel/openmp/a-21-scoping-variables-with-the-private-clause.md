---
title: "A.21   Scoping Variables with the private Clause | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-parallel"]
ms.topic: "conceptual"
dev_langs: ["C++"]
ms.assetid: 7cdb4a7f-af24-44ac-9d33-e43840bc8f3d
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# A.21   Scoping Variables with the private Clause
The values of `i` and `j` in the following example are undefined on exit from the parallel region:  
  
```  
int i, j;  
i = 1;  
j = 2;  
#pragma omp parallel private(i) firstprivate(j)  
{  
  i = 3;  
  j = j + 2;  
}  
printf_s("%d %d\n", i, j);  
```  
  
 For more information on the `private` clause, see [Section 2.7.2.1](../../parallel/openmp/2-7-2-1-private.md) on page 25.