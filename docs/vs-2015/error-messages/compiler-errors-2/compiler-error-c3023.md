---
title: "Compiler Error C3023 | Microsoft Docs"
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
  - "C3023"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3023"
ms.assetid: 89dcce98-3cd7-4931-a50f-87df1d2ebc9b
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3023
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3023](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3023).  
  
  
value' : unexpected token encountered in argument to OpenMP 'clause' clause  
  
 The values passed to a clause were not valid.  
  
 The following sample generates C3023:  
  
```  
// C3023.cpp  
// compile with: /openmp /link vcomps.lib  
#include <stdio.h>  
#include "omp.h"  
  
int main() {  
   int i;  
  
   #pragma omp parallel for schedule(dynamic 10)   // C3023  
   for (i = 0; i < 10; ++i) ;  
  
   #pragma omp parallel for schedule(dynamic;10)   // C3023  
   for (i = 0; i < 10; ++i) ;  
  
   // OK  
   #pragma omp parallel for schedule(dynamic, 10)  
   for (i = 0; i < 10; ++i)  
   ;  
}  
```

