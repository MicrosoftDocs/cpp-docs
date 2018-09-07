---
title: "Compiler Error C3031 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3031"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3031"]
ms.assetid: 7e621e7e-eda7-45b5-8836-29599cd05255
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3031
'var' : variable in 'reduction' clause must have scalar arithmetic type  
  
 A variable of the wrong type was passed to a reduction clause.  
  
 The following sample generates C3031:  
  
```  
// C3031.cpp  
// compile with: /openmp /link vcomps.lib  
#include <stdio.h>  
#include "omp.h"  
  
typedef struct {  
   int n;  
} Incomplete;  
  
extern Incomplete inc;  
int i = 9;  
  
int main() {  
   #pragma omp parallel reduction(+: inc)   // C3031   
      ;  
  
   #pragma omp parallel reduction(+: i)     // OK  
      ;  
}  
```