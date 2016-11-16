---
title: "omp_set_nested | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "omp_set_nested"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "omp_set_nested OpenMP function"
ms.assetid: fa1cb08c-7b8b-42c9-8654-2c33dcffb5b6
caps.latest.revision: 13
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
# omp_set_nested
Enables nested parallelism.  
  
## Syntax  
  
```  
void omp_set_nested(  
   int val  
);  
```  
  
## Remarks  
 where,  
  
 `val`  
 If nonzero, enables nested parallelism. If zero, disables nested parallelism.  
  
## Remarks  
 OMP nested parallelism can be turned on with `omp_set_nested`, or by setting the [OMP_NESTED](../../../parallel/openmp/reference/omp-nested.md) environment variable.  
  
 The setting for `omp_set_nested` will override the setting of the `OMP_NESTED` environment variable.  
  
 When enabled, the environment variable can break an otherwise operational program because the number of threads increases exponentially when nesting parallel regions.  For example a function that recurses 6 times with the number of OMP threads set to 4 requires 4,096 (4 to the power of 6) threads  In general, the performance of your application will degrade if the number of thread exceeds the number of processors. One exception to this would be I/O bound applications.  
  
 Use [omp_get_nested](../../../parallel/openmp/reference/omp-get-nested.md) to display the current setting of `omp_set_nested`.  
  
 For more information, see [3.1.9 omp_set_nested Function](../../../parallel/openmp/3-1-9-omp-set-nested-function.md).  
  
## Example  
  
```  
// omp_set_nested.cpp  
// compile with: /openmp  
#include <stdio.h>  
#include <omp.h>  
  
int main( )   
{  
    omp_set_nested(1);  
    omp_set_num_threads(4);  
    printf_s("%d\n", omp_get_nested( ));  
    #pragma omp parallel  
        #pragma omp master  
        {  
            printf_s("%d\n", omp_get_nested( ));  
        }  
}  
```  
  
```Output  
1  
1  
```  
  
## See Also  
 [Functions](../../../parallel/openmp/reference/openmp-functions.md)