---
title: "master | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-parallel"]
ms.topic: "reference"
f1_keywords: ["master"]
dev_langs: ["C++"]
helpviewer_keywords: ["master OpenMP directive"]
ms.assetid: 559ed974-e02a-486e-a23f-31556429b2c4
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# master
Specifies that only the master threadshould execute a section of the program.  
  
## Syntax  
  
```  
#pragma omp master  
{  
   code_block  
}  
```  
  
## Remarks  
 The **master** directive supports no OpenMP clauses.  
  
 The [single](../../../parallel/openmp/reference/single.md) directive lets you specify that a section of code should be executed on a single thread, not necessarily the master thread.  
  
 For more information, see [2.6.1 master Construct](../../../parallel/openmp/2-6-1-master-construct.md).  
  
## Example  
  
```  
// omp_master.cpp  
// compile with: /openmp   
#include <omp.h>  
#include <stdio.h>  
  
int main( )   
{  
    int a[5], i;  
  
    #pragma omp parallel  
    {  
        // Perform some computation.  
        #pragma omp for  
        for (i = 0; i < 5; i++)  
            a[i] = i * i;  
  
        // Print intermediate results.  
        #pragma omp master  
            for (i = 0; i < 5; i++)  
                printf_s("a[%d] = %d\n", i, a[i]);  
  
        // Wait.  
        #pragma omp barrier  
  
        // Continue with the computation.  
        #pragma omp for  
        for (i = 0; i < 5; i++)  
            a[i] += i;  
    }  
}  
```  
  
```Output  
a[0] = 0  
a[1] = 1  
a[2] = 4  
a[3] = 9  
a[4] = 16  
```  
  
## See Also  
 [Directives](../../../parallel/openmp/reference/openmp-directives.md)