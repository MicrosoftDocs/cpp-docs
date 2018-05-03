---
title: "Compiler Error C3032 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3032"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3032"]
ms.assetid: 6a92bd8e-319f-4a99-aef4-a9021f6f9928
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3032
'var' : variable in 'clause' clause cannot have incomplete type 'type'  
  
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