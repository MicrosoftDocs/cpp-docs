---
title: "Compiler Error C3024 | Microsoft Docs"
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
  - "C3024"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3024"
ms.assetid: 1c031c28-ce37-4de3-aead-cfe76b261856
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3024
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3024](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3024).  
  
  
schedule(runtime)' : chunk_size expression is not allowed  
  
 A value cannot be passed to the run-time parameter of the schedule clause.  
  
 The following sample generates C3024:  
  
```  
// C3024.cpp  
// compile with: /openmp /link vcomps.lib  
#include <stdio.h>  
#include "omp.h"  
  
int main() {  
   int i;  
  
   #pragma omp parallel for schedule(runtime, 10)   // C3024  
   for (i = 0; i < 10; ++i) ;  
  
   #pragma omp parallel for schedule(runtime)   // OK  
   for (i = 0; i < 10; ++i) ;  
}  
```

