---
title: "sections (OpenMP) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: ["section", "SECTIONS"]
dev_langs: ["C++"]
helpviewer_keywords: ["sections OpenMP directive"]
ms.assetid: 4cd1d776-e198-470e-930a-01fb0ab0a0bd
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# sections (OpenMP)
Identifies code sections to be divided among all threads.  
  
## Syntax  
  
```  
#pragma omp [parallel] sections [clauses]  
{  
   #pragma omp section  
   {  
      code_block   
   }   
}  
```  
  
## Remarks  
 where,  
  
 `clause` (optional)  
 Zero or more clauses. See the Remarks section for a list of the clauses supported by **sections**.  
  
## Remarks  
 The **sections** directive can contain zero or more **section** directives.  
  
 The **sections** directive supports the following OpenMP clauses:  
  
-   [firstprivate](../../../parallel/openmp/reference/firstprivate.md)  
  
-   [lastprivate](../../../parallel/openmp/reference/lastprivate.md)  
  
-   [nowait](../../../parallel/openmp/reference/nowait.md)  
  
-   [private](../../../parallel/openmp/reference/private-openmp.md)  
  
-   [reduction](../../../parallel/openmp/reference/reduction.md)  
  
 If **parallel** is also specified, `clause` can be any clause accepted by the **parallel** or **sections** directives, except `nowait`.  
  
 For more information, see [2.4.2 sections Construct](../../../parallel/openmp/2-4-2-sections-construct.md).  
  
## Example  
  
```  
// omp_sections.cpp  
// compile with: /openmp   
#include <stdio.h>  
#include <omp.h>  
  
int main() {  
    #pragma omp parallel sections num_threads(4)  
    {  
        printf_s("Hello from thread %d\n", omp_get_thread_num());  
        #pragma omp section  
        printf_s("Hello from thread %d\n", omp_get_thread_num());  
    }  
}  
```  
  
```Output  
Hello from thread 0  
Hello from thread 0  
```  
  
## See Also  
 [Directives](../../../parallel/openmp/reference/openmp-directives.md)