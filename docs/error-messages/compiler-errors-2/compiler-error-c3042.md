---
title: "Compiler Error C3042 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C3042"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3042"
ms.assetid: bf73f61e-5bd2-40a8-9b06-6244e6a15a41
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# Compiler Error C3042
'copyprivate' and 'nowait' clauses cannot appear together on OpenMP 'directive' directive  
  
 The [copyprivate](../../parallel/openmp/reference/copyprivate.md) and [nowait](../../parallel/openmp/reference/nowait.md) clauses are mutually exclusive on the specified directive. To fix this error, remove one or both of the `copyprivate` or `nowait` clauses.  
  
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