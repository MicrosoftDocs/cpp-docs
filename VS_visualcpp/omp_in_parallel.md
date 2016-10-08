---
title: "omp_in_parallel"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 1f01a1b4-78c5-496a-afb7-a43ecdad83d6
caps.latest.revision: 8
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# omp_in_parallel
Returns nonzero if called from within a parallel region.  
  
## Syntax  
  
```  
int omp_in_parallel( );  
```  
  
## Remarks  
 For more information, see [3.1.6 omp_in_parallel Function](../VS_visualcpp/3.1.6-omp_in_parallel-Function.md).  
  
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
  
 **0**  
**1**   
## See Also  
 [Functions](../VS_visualcpp/OpenMP-Functions.md)