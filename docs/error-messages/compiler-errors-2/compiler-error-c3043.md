---
title: "Compiler Error C3043 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3043"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3043"]
ms.assetid: 0ef55e63-e82b-48eb-9d44-690950ac34c6
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3043
OpenMP 'critical' directive cannot be nested in 'critical' directive with same name  
  
 A [critical](../../parallel/openmp/reference/critical.md) directive cannot be nested in a `critical` directive that uses the same name.  
  
 The following sample generates C3043:  
  
```  
// C3043.cpp  
// compile with: /openmp /c  
#include "omp.h"  
  
int main() {  
   int n1 = 1, n2 = 2, n3 = 3;  
  
   #pragma omp parallel  
   {  
      ++n2;  
  
      #pragma omp critical(MyTest)  
      {  
         ++n2;  
  
         #pragma omp critical(MyTest)   // C3043  
         // try the following line instead  
         // #pragma omp critical(MyTest2)  
         {  
            ++n3;  
         }  
      }  
   }  
}  
```