---
title: "Compiler Error C3019 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3019"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3019"]
ms.assetid: 31a6d9b6-d29f-4499-9ad8-48dd751e87c7
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3019
increment in OpenMP 'for' statement has improper form  
  
 The increment part of an OpenMP `for` loop must use the index variable both on the left and right side of the operator.  
  
 The following sample generates C3019:  
  
```  
// C3019.cpp  
// compile with: /openmp  
int main()  
{  
   int i = 0, j = 1, n = 3;  
  
   #pragma omp parallel  
   {  
      #pragma omp for  
      for (i = 0; i < 10; i = j + n)   // C3019  
      // Try the following line instead:  
      // for (i = 0; i < 10; i++)  
         j *= 2;  
   }  
}  
```