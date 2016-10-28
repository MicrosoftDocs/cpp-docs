---
title: "omp_set_dynamic"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "omp_set_dynamic"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "omp_set_dynamic OpenMP function"
ms.assetid: 3845faf2-a0ca-45a5-ae70-2a7a6164f1e8
caps.latest.revision: 10
ms.author: "mithom"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# omp_set_dynamic
Indicates that the number of threads available in subsequent parallel region can be adjusted by the run time.  
  
## Syntax  
  
```  
void omp_set_dynamic(  
   int val  
);  
```  
  
## Remarks  
 where,  
  
 `val`  
 A value that indicates if the number of threads available in subsequent parallel region can be adjusted by the runtime.  If nonzero, the runtime can adjust the number of threads, if zero, the runtime will not dynamically adjust the number of threads.  
  
## Remarks  
 The number of threads will never exceed the value set by [omp_set_num_threads](../parallel/omp_set_num_threads.md) or by [OMP_NUM_THREADS](../parallel/omp_num_threads.md).  
  
 Use [omp_get_dynamic](../parallel/omp_get_dynamic.md) to display the current setting of `omp_set_dynamic`.  
  
 The setting for `omp_set_dynamic` will override the setting of the [OMP_DYNAMIC](../parallel/omp_dynamic.md) environment variable.  
  
 For more information, see [3.1.7 omp_set_dynamic Function](../parallel/3.1.7-omp_set_dynamic-function.md).  
  
## Example  
  
```  
// omp_set_dynamic.cpp  
// compile with: /openmp  
#include <stdio.h>  
#include <omp.h>  
  
int main()   
{  
    omp_set_dynamic(9);  
    omp_set_num_threads(4);  
    printf_s("%d\n", omp_get_dynamic( ));  
    #pragma omp parallel  
        #pragma omp master  
        {  
            printf_s("%d\n", omp_get_dynamic( ));  
        }  
}  
```  
  
 **1**  
**1**   
## See Also  
 [Functions](../parallel/openmp-functions.md)