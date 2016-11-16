---
title: "omp_set_dynamic | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "omp_set_dynamic"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "omp_set_dynamic OpenMP function"
ms.assetid: 3845faf2-a0ca-45a5-ae70-2a7a6164f1e8
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
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
 The number of threads will never exceed the value set by [omp_set_num_threads](../../../parallel/openmp/reference/omp-set-num-threads.md) or by [OMP_NUM_THREADS](../../../parallel/openmp/reference/omp-num-threads.md).  
  
 Use [omp_get_dynamic](../../../parallel/openmp/reference/omp-get-dynamic.md) to display the current setting of `omp_set_dynamic`.  
  
 The setting for `omp_set_dynamic` will override the setting of the [OMP_DYNAMIC](../../../parallel/openmp/reference/omp-dynamic.md) environment variable.  
  
 For more information, see [3.1.7 omp_set_dynamic Function](../../../parallel/openmp/3-1-7-omp-set-dynamic-function.md).  
  
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
  
```Output  
1  
1  
```  
  
## See Also  
 [Functions](../../../parallel/openmp/reference/openmp-functions.md)