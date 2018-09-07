---
title: "A.26   Using the threadprivate Directive | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-parallel"]
ms.topic: "conceptual"
dev_langs: ["C++"]
ms.assetid: 6eda76c2-c4f1-4208-a900-e0ea98a53eca
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# A.26   Using the threadprivate Directive
The following examples demonstrate how to use the `threadprivate` directive  ([Section 2.7.1](../../parallel/openmp/2-7-1-threadprivate-directive.md) on page 23) to give each thread a separate counter.  
  
 **Example 1:**  
  
```  
int counter = 0;  
#pragma omp threadprivate(counter)  
  
int sub()  
{  
    counter++;  
    return(counter);  
}  
```  
  
 **Example 2:**  
  
```  
int sub()  
{  
    static int counter = 0;  
    #pragma omp threadprivate(counter)  
    counter++;  
    return(counter);  
}  
```