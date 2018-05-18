---
title: "A.18   Nested for Directives | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-parallel"]
ms.topic: "conceptual"
dev_langs: ["C++"]
ms.assetid: ae2b2e0b-ec94-43f8-928c-6d621b51f0df
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# A.18   Nested for Directives
The following example of `for` directive nesting ([Section 2.9](../../parallel/openmp/2-9-directive-nesting.md) on page 33) is compliant because the inner and outer `for` directives bind to different parallel regions:  
  
```  
#pragma omp parallel default(shared)  
{  
    #pragma omp for  
        for (i=0; i<n; i++)   
        {  
            #pragma omp parallel shared(i, n)  
            {  
                #pragma omp for  
                    for (j=0; j<n; j++)  
                        work(i, j);  
            }  
        }  
}  
```  
  
 A following variation of the preceding example is also compliant:  
  
```  
#pragma omp parallel default(shared)  
{  
    #pragma omp for  
        for (i=0; i<n; i++)  
            work1(i, n);  
}  
  
void work1(int i, int n)  
{  
    int j;  
    #pragma omp parallel default(shared)  
    {  
        #pragma omp for  
            for (j=0; j<n; j++)  
                work2(i, j);  
    }  
    return;  
}  
```