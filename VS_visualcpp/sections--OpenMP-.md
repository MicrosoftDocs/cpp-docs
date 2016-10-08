---
title: "sections (OpenMP)"
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
ms.assetid: 4cd1d776-e198-470e-930a-01fb0ab0a0bd
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
  
-   [firstprivate](../VS_visualcpp/firstprivate.md)  
  
-   [lastprivate](../VS_visualcpp/lastprivate.md)  
  
-   [nowait](../VS_visualcpp/nowait.md)  
  
-   [private](../VS_visualcpp/private--OpenMP-.md)  
  
-   [reduction](../VS_visualcpp/reduction.md)  
  
 If **parallel** is also specified, `clause` can be any clause accepted by the **parallel** or **sections** directives, except `nowait`.  
  
 For more information, see [2.4.2 sections Construct](../VS_visualcpp/2.4.2-sections-Construct.md).  
  
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
  
 **Hello from thread 0**  
**Hello from thread 0**   
## See Also  
 [Directives](../VS_visualcpp/OpenMP-Directives.md)