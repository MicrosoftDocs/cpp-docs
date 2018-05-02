---
title: "Compiler Error C3049 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3049"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3049"]
ms.assetid: 6ddf54f6-2c30-4d04-b637-98c6c922c533
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3049
'arg' : invalid argument in OpenMP 'default' clause  
  
 An incorrect value was passed to a [default](../../parallel/openmp/reference/default-openmp.md) clause.  
  
 The following sample generates C3049:  
  
```  
// C3049.cpp  
// compile with: /openmp /c  
int main() {  
   int n1 = 1;  
  
   #pragma omp parallel default(private)   // C3049   
   // try the following line instead  
   // #pragma omp parallel default(shared)  
   {  
      ++n1;  
   }  
}  
```