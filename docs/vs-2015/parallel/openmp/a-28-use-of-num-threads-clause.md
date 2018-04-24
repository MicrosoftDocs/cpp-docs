---
title: "A.28   Use of num_threads Clause | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: 26238da1-902c-49b4-9559-0fbc9eaf7f36
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# A.28   Use of num_threads Clause
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The following example demonstrates the `num_threads` clause ([Section 2.3](../../parallel/openmp/2-3-parallel-construct.md) on page 8). The parallel region is executed with a maximum of 10 threads.  
  
```  
#include <omp.h>  
main()  
{  
    omp_set_dynamic(1);  
    ...  
    #pragma omp parallel num_threads(10)  
    {  
        ... parallel region ...  
    }  
}  
```