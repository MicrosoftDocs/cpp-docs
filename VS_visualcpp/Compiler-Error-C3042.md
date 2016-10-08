---
title: "Compiler Error C3042"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-csharp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: bf73f61e-5bd2-40a8-9b06-6244e6a15a41
caps.latest.revision: 7
manager: douge
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# Compiler Error C3042
'copyprivate' and 'nowait' clauses cannot appear together on OpenMP 'directive' directive  
  
 The [copyprivate](../VS_visualcpp/copyprivate.md) and [nowait](../VS_visualcpp/nowait.md) clauses are mutually exclusive on the specified directive. To fix this error, remove one or both of the `copyprivate` or `nowait` clauses.  
  
 The following sample generates C3042:  
  
```  
// C3042.cpp  
// compile with: /openmp /c  
#include <stdio.h>  
#include "omp.h"  
  
double d;  
  
int main() {  
    #pragma omp parallel private(d)  
   {  
      #pragma omp single copyprivate(d) nowait   // C3042  
      {  
      }  
   }  
}  
```