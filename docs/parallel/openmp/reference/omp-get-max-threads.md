---
title: "omp_get_max_threads | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-parallel"]
ms.topic: "reference"
f1_keywords: ["omp_get_max_threads"]
dev_langs: ["C++"]
helpviewer_keywords: ["omp_get_max_threads OpenMP function"]
ms.assetid: f47c3725-3e40-469f-8bc8-a1e47f264cc3
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# omp_get_max_threads
Returns an integer that is equal to or greater than the number of threads that would be available if a parallel region without [num_threads](../../../parallel/openmp/reference/num-threads.md) were defined at that point in the code.  
  
## Syntax  
  
```  
int omp_get_max_threads( )  
```  
  
## Remarks  
 For more information, see [3.1.3 omp_get_max_threads Function](../../../parallel/openmp/3-1-3-omp-get-max-threads-function.md).  
  
## Example  
  
```  
// omp_get_max_threads.cpp  
// compile with: /openmp  
#include <stdio.h>  
#include <omp.h>  
  
int main( )   
{  
    omp_set_num_threads(8);  
    printf_s("%d\n", omp_get_max_threads( ));  
    #pragma omp parallel  
        #pragma omp master  
        {  
            printf_s("%d\n", omp_get_max_threads( ));  
        }  
  
    printf_s("%d\n", omp_get_max_threads( ));  
  
    #pragma omp parallel num_threads(3)  
        #pragma omp master  
        {  
            printf_s("%d\n", omp_get_max_threads( ));  
        }  
  
    printf_s("%d\n", omp_get_max_threads( ));  
}  
```  
  
```Output  
8  
8  
8  
8  
8  
```  
  
## See Also  
 [Functions](../../../parallel/openmp/reference/openmp-functions.md)