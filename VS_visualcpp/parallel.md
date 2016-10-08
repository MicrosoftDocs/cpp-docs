---
title: "parallel"
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
ms.assetid: b8e90073-e85b-4d39-8ed8-0364441794fb
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
  
-   [copyin](../VS_visualcpp/copyin.md)  
  
-   [default](../VS_visualcpp/default--OpenMP-.md)  
  
-   [firstprivate](../VS_visualcpp/firstprivate.md)  
  
-   [if](../VS_visualcpp/if--OpenMP-.md)  
  
-   [num_threads](../VS_visualcpp/num_threads.md)  
  
-   [private](../VS_visualcpp/private--OpenMP-.md)  
  
-   [reduction](../VS_visualcpp/reduction.md)  
  
-   [shared](../VS_visualcpp/shared--OpenMP-.md)  
  
 **parallel** can also be used with the [sections](../VS_visualcpp/sections--OpenMP-.md) and [for](../VS_visualcpp/for--OpenMP-.md) directives.  
  
 For more information, see [2.3 parallel Construct](../VS_visualcpp/2.3-parallel-Construct.md).  
  
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
  
 **Hello from thread 0**  
**Hello from thread 1**  
**Hello from thread 2**  
**Hello from thread 3**   
## Comment  
 Note that the order of output can vary on different machines.  
  
## See Also  
 [Directives](../VS_visualcpp/OpenMP-Directives.md)