---
title: "omp_get_num_procs | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "omp_get_num_procs"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "omp_get_num_procs OpenMP function"
ms.assetid: 14a10b8f-e59b-4211-a292-687648c9f760
caps.latest.revision: 14
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
# omp_get_num_procs
Returns the number of processors that are available when the function is called.  
  
## Syntax  
  
```  
int omp_get_num_procs();  
```  
  
## Remarks  
 For more information, see [3.1.5 omp_get_num_procs Function](../../../parallel/openmp/3-1-5-omp-get-num-procs-function.md).  
  
## Example  
  
```  
// omp_get_num_procs.cpp  
// compile with: /openmp  
#include <stdio.h>  
#include <omp.h>  
  
int main( )   
{  
    printf_s("%d\n", omp_get_num_procs( ));  
    #pragma omp parallel  
        #pragma omp master  
        {  
            printf_s("%d\n", omp_get_num_procs( ));  
        }  
}  
```  
  
```Output  
// Expect the following output when the example is run on a two-processor machine:  
2  
2  
```  
  
## See Also  
 [Functions](../../../parallel/openmp/reference/openmp-functions.md)