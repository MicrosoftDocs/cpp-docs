---
title: "Compiler Error C3013 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3013"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3013"]
ms.assetid: f896777d-27e6-4b6d-baab-1567317f3374
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3013
'clause' : clause may only appear once on OpenMP 'directive' directive  
  
 A clause appeared twice on the same directive. Delete one occurrence of the clause.  
  
 The following sample generates C3013:  
  
```  
// C3013.cpp  
// compile with: /openmp  
int main() {  
   int a, b, c, x, y, z;  
  
   #pragma omp parallel shared(a,b,c) private(x)  
  
   #pragma omp for nowait private(x) nowait   // C3013  
   // The previous line generates C3013, with two nowait clauses  
   // try the following line instead:  
   // #pragma omp for nowait private(x)  
   for (a = 0 ; a < 10 ; ++a) {  
   }  
}  
```