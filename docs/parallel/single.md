---
title: "single"
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
  - "Single"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "single OpenMP directive"
ms.assetid: 85cf94fb-cb9c-4d82-8609-adffa9f552e1
caps.latest.revision: 9
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
# single
Lets you specify that a section of code should be executed on a single thread, not necessarily the master thread.  
  
## Syntax  
  
```  
#pragma omp single [clauses]   
{  
   code_block   
}  
```  
  
#### Parameters  
 `clause` (optional)  
 Zero or more clauses. See the Remarks section for a list of the clauses supported by **single**.  
  
## Remarks  
 The **single** directive supports the following OpenMP clauses:  
  
-   [copyprivate](../parallel/copyprivate.md)  
  
-   [firstprivate](../parallel/firstprivate.md)  
  
-   [nowait](../parallel/nowait.md)  
  
-   [private](../parallel/private--openmp-.md)  
  
 The [master](../parallel/master.md) directive lets you specify that a section of code should be executed only on the master thread.  
  
 For more information, see [2.4.3 single Construct](../parallel/2.4.3-single-construct.md).  
  
## Example  
  
```  
// omp_single.cpp  
// compile with: /openmp   
#include <stdio.h>  
#include <omp.h>  
  
int main() {  
   #pragma omp parallel num_threads(2)  
   {  
      #pragma omp single  
      // Only a single thread can read the input.  
      printf_s("read input\n");  
  
      // Multiple threads in the team compute the results.  
      printf_s("compute results\n");  
  
      #pragma omp single  
      // Only a single thread can write the output.  
      printf_s("write output\n");  
    }  
}  
```  
  
 **read input**  
**compute results**  
**compute results**  
**write output**   
## See Also  
 [Directives](../parallel/openmp-directives.md)