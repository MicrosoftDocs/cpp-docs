---
title: "Compiler Error C3040 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3040"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3040"]
ms.assetid: 29e857ac-74f0-4ec6-becf-9026e38c160e
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3040
'var' : type of variable in 'reduction' clause is incompatible with reduction operator 'operator'  
  
 A variable in a [reduction](../../parallel/openmp/reference/reduction.md) clause cannot be used with the reduction operator.  
  
 The following sample generates C3040:  
  
```  
// C3040.cpp  
// compile with: /openmp /c  
#include "omp.h"  
double d;  
  
int main() {  
   #pragma omp parallel reduction(&:d)   // C3040  
      ;  
  
   #pragma omp parallel reduction(-:d)  // OK  
      ;  
}  
```