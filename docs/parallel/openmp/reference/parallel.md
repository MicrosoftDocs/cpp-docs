---
title: "parallel | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "parallel"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "parallel OpenMP directive"
ms.assetid: b8e90073-e85b-4d39-8ed8-0364441794fb
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
# parallel
Defines a parallel region, which is code that will be executed by multiple threads in parallel.  
  
## Syntax  
  
```  
#pragma omp parallel [clauses]  
{  
   code_block  
}  
```  
  
## Remarks  
 where,  
  
 `clause` (optional)  
 Zero or more clauses.  See the Remarks section for a list of the clauses supported by **parallel**.  
  
## Remarks  
 The **parallel** directive supports the following OpenMP clauses:  
  
-   [copyin](../../../parallel/openmp/reference/copyin.md)  
  
-   [default](../../../parallel/openmp/reference/default-openmp.md)  
  
-   [firstprivate](../../../parallel/openmp/reference/firstprivate.md)  
  
-   [if](../../../parallel/openmp/reference/if-openmp.md)  
  
-   [num_threads](../../../parallel/openmp/reference/num-threads.md)  
  
-   [private](../../../parallel/openmp/reference/private-openmp.md)  
  
-   [reduction](../../../parallel/openmp/reference/reduction.md)  
  
-   [shared](../../../parallel/openmp/reference/shared-openmp.md)  
  
 **parallel** can also be used with the [sections](../../../parallel/openmp/reference/sections-openmp.md) and [for](../../../parallel/openmp/reference/for-openmp.md) directives.  
  
 For more information, see [2.3 parallel Construct](../../../parallel/openmp/2-3-parallel-construct.md).  
  
## Example  
 The following sample shows how to set the number of threads and define a parallel region. By default, the number of threads is equal to the number of logical processors on the machine. For example, if you have a machine with one physical processor that has hyperthreading enabled, it will have two logical processors and, therefore, two threads.  
  
```  
// omp_parallel.cpp  
// compile with: /openmp   
#include <stdio.h>  
#include <omp.h>  
  
int main() {  
   #pragma omp parallel num_threads(4)  
   {  
      int i = omp_get_thread_num();  
      printf_s("Hello from thread %d\n", i);  
   }  
}  
```  
  
```Output  
Hello from thread 0  
Hello from thread 1  
Hello from thread 2  
Hello from thread 3  
```  
  
## Comment  
 Note that the order of output can vary on different machines.  
  
## See Also  
 [Directives](../../../parallel/openmp/reference/openmp-directives.md)