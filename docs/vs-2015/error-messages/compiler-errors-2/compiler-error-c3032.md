---
title: "Compiler Error C3032 | Microsoft Docs"
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
  - "C3032"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3032"
ms.assetid: 6a92bd8e-319f-4a99-aef4-a9021f6f9928
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3032
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3032](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3032).  
  
  
var' : variable in 'clause' clause cannot have incomplete type 'type'  
  
 Types passed to certain clauses must be fully visible to the compiler.  
  
 The following sample generates C3032:  
  
```  
// C3032.cpp  
// compile with: /openmp /link vcomps.lib  
#include "omp.h"  
  
struct Incomplete;  
extern struct Incomplete inc;  
  
int main() {  
   int i = 9;  
   #pragma omp parallel private(inc)   // C3032  
      ;  
  
   #pragma omp parallel private(i)     // OK  
      ;  
  
}  
```

