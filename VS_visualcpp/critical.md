---
title: "critical"
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
ms.assetid: 2ab87d6d-5ca4-43ae-9f0a-1f517a6a2bab
caps.latest.revision: 10
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
# critical
Specifies that code is only be executed on one thread at a time.  
  
## Syntax  
  
```  
#pragma omp critical [(name)]  
{  
   code_block  
}  
```  
  
## Remarks  
 where,  
  
 (`name`) (optional)  
 A name to identify the critical code. Note that name must be enclosed in parentheses.  
  
## Remarks  
 The **critical** directive supports no OpenMP clauses.  
  
 For more information, see [2.6.2 critical Construct](../VS_visualcpp/2.6.2-critical-Construct.md).  
  
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
  
 **41**  
**18467**  
**6334**  
**26500**  
**19169**  
**15724**  
**11478**  
**29358**  
**26962**  
**24464**  
**max = 29358**   
## See Also  
 [Directives](../VS_visualcpp/OpenMP-Directives.md)