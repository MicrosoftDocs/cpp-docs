---
title: "Compiler Error C3042 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
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
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3042
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3042](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3042).  
  
  
copyprivate' and 'nowait' clauses cannot appear together on OpenMP 'directive' directive  
  
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

