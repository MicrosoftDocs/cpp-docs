---
title: "critical | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-parallel"]
ms.topic: "reference"
f1_keywords: ["Critical"]
dev_langs: ["C++"]
helpviewer_keywords: ["critical OpenMP directive"]
ms.assetid: 2ab87d6d-5ca4-43ae-9f0a-1f517a6a2bab
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# critical
Specifies that code is only be executed on one thread at a time.  
  
## Syntax  
  
```  
#pragma omp critical [(name)]  
{  
   code_block  
}  
```  
  
## Arguments

*name*<br/>
(Optional) A name to identify the critical code. Note that name must be enclosed in parentheses.  
  
## Remarks  
 The **critical** directive supports no OpenMP clauses.  
  
 For more information, see [2.6.2 critical Construct](../../../parallel/openmp/2-6-2-critical-construct.md).  
  
## Example  
  
```  
// omp_critical.cpp  
// compile with: /openmp   
#include <omp.h>  
#include <stdio.h>  
#include <stdlib.h>  
  
#define SIZE 10  
  
int main()   
{  
    int i;  
    int max;  
    int a[SIZE];  
  
    for (i = 0; i < SIZE; i++)   
    {  
        a[i] = rand();  
        printf_s("%d\n", a[i]);  
    }  
  
    max = a[0];  
    #pragma omp parallel for num_threads(4)  
        for (i = 1; i < SIZE; i++)   
        {  
            if (a[i] > max)  
            {  
                #pragma omp critical  
                {  
                    // compare a[i] and max again because max   
                    // could have been changed by another thread after   
                    // the comparison outside the critical section  
                    if (a[i] > max)  
                        max = a[i];  
                }  
            }  
        }  
  
    printf_s("max = %d\n", max);  
}  
```  
  
```Output  
41  
18467  
6334  
26500  
19169  
15724  
11478  
29358  
26962  
24464  
max = 29358  
```  
  
## See Also  
 [Directives](../../../parallel/openmp/reference/openmp-directives.md)