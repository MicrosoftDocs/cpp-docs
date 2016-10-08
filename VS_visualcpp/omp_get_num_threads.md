---
title: "omp_get_num_threads"
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
ms.assetid: e7c3cea1-44ac-435d-866e-2b7bc477e807
caps.latest.revision: 9
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
# omp_get_num_threads
Returns the number of threads in the parallel region.  
  
## Syntax  
  
```  
int omp_get_num_threads( );  
```  
  
## Remarks  
 For more information, see [3.1.2 omp_get_num_threads Function](../VS_visualcpp/3.1.2-omp_get_num_threads-Function.md).  
  
## Example  
  
```  
// omp_get_num_threads.cpp  
// compile with: /openmp  
#include <stdio.h>  
#include <omp.h>  
  
int main()  
{  
    omp_set_num_threads(4);  
    printf_s("%d\n", omp_get_num_threads( ));  
    #pragma omp parallel  
        #pragma omp master  
        {  
            printf_s("%d\n", omp_get_num_threads( ));  
        }  
  
    printf_s("%d\n", omp_get_num_threads( ));  
  
    #pragma omp parallel num_threads(3)  
        #pragma omp master  
        {  
            printf_s("%d\n", omp_get_num_threads( ));  
        }  
  
    printf_s("%d\n", omp_get_num_threads( ));  
}  
```  
  
 **1**  
**4**  
**1**  
**3**  
**1**   
## See Also  
 [Functions](../VS_visualcpp/OpenMP-Functions.md)