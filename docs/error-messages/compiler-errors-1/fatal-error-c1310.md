---
title: "Fatal Error C1310 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C1310"]
dev_langs: ["C++"]
helpviewer_keywords: ["C1310"]
ms.assetid: ac48aa51-8023-42fe-b844-3f8bf228fbef
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Fatal Error C1310
profile guided optimizations are not available with OpenMP  
  
 You will not be able to link with [/LTCG:PGI](../../build/reference/ltcg-link-time-code-generation.md) any module that was compiled with [/GL](../../build/reference/gl-whole-program-optimization.md).  
  
 The following sample generates C1310:  
  
```  
// C1310.cpp  
// compile with: /openmp /GL /link /LTCG:PGI  
// C1310 expected  
int main()  
{  
   int i = 0, j = 10;  
  
   #pragma omp parallel  
   {  
      #pragma omp for  
      for (i = 0; i < 0; i++)   
         --j;  
   }  
}  
```