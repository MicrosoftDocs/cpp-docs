---
title: "omp_in_parallel | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-parallel"]
ms.topic: "reference"
f1_keywords: ["omp_in_parallel"]
dev_langs: ["C++"]
helpviewer_keywords: ["omp_in_parallel OpenMP function"]
ms.assetid: 1f01a1b4-78c5-496a-afb7-a43ecdad83d6
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# omp_in_parallel
Returns nonzero if called from within a parallel region.  
  
## Syntax  
  
```  
int omp_in_parallel( );  
```  
  
## Remarks  
 For more information, see [3.1.6 omp_in_parallel Function](../../../parallel/openmp/3-1-6-omp-in-parallel-function.md).  
  
## Example  
  
```  
// omp_in_parallel.cpp  
// compile with: /openmp  
#include <stdio.h>  
#include <omp.h>  
  
int main( )   
{  
    omp_set_num_threads(4);  
    printf_s("%d\n", omp_in_parallel( ));  
  
    #pragma omp parallel  
        #pragma omp master  
        {  
            printf_s("%d\n", omp_in_parallel( ));  
        }  
}  
```  
  
```Output  
0  
1  
```  
  
## See Also  
 [Functions](../../../parallel/openmp/reference/openmp-functions.md)