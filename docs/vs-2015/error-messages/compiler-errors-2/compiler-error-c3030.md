---
title: "Compiler Error C3030 | Microsoft Docs"
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
  - "C3030"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3030"
ms.assetid: de92fd7e-29ba-46e8-b43b-f4b985cd74de
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3030
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3030](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3030).  
  
  
var' : variable in 'reduction' clause/directive cannot have reference type  
  
 You can only pass value parameters to certain clauses, such as the reduction clause.  
  
 The following sample generates C3030:  
  
```  
// C3030.cpp  
// compile with: /openmp /link vcomps.lib  
#include "omp.h"  
  
void test(int &r) {  
   #pragma omp parallel reduction(+ : r)   // C3030  
      ;  
}  
  
void test2(int r) {  
   #pragma omp parallel reduction(+ : r)   // OK  
      ;  
}  
  
int main(int argc, char** argv) {  
   int& r = *((int*)argv);  
   int s = *((int*)argv);  
  
   #pragma omp parallel reduction(+ : r)   // C3030  
      ;  
  
   #pragma omp parallel reduction(+ : s)   // OK  
      ;  
}  
```

