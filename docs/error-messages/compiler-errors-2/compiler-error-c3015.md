---
title: "Compiler Error C3015 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3015"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3015"]
ms.assetid: d5e8e50b-7542-4b2d-8665-1b22072a5bc6
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3015
initialization in OpenMP 'for' statement has improper form  
  
 A `for` loop in an OpenMP statement must be fully and explicitly specified.  
  
 The following sample generates C3015:  
  
```  
// C3015.cpp  
// compile with: /openmp  
int main()  
{  
   int i = 0, j = 10;  
  
   #pragma omp parallel  
   {  
      #pragma omp for  
      for (; i < 0; i += j)   // C3015  
      // Try the following line instead:  
      // for (i = 0; i < 0; i++)   
         --j;  
   }  
}  
```