---
title: "Compiler Error C3034 | Microsoft Docs"
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
  - "C3034"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3034"
ms.assetid: 49db8bac-2720-4622-94e3-7988f1603fa3
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3034
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3034](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3034).  
  
  
OpenMP 'directive1' directive cannot be directly nested within 'directive2' directive  
  
 Some directives cannot be nested. To fix this error, you can merge the statements of both directives into the block of one directive, or you can construct consecutive directives.  
  
 The following sample generates C3034:  
  
```  
// C3034.cpp  
// compile with: /openmp /link vcomps.lib  
int main() {  
  
   #pragma omp single  
   {  
      #pragma omp single   // C3034   
      {  
      ;  
      }  
   }  
  
   // Two consecutive single clauses are OK.  
   #pragma omp single  
   {  
   }  
  
   #pragma omp single  
   {  
   }  
}  
```

