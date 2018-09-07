---
title: "Compiler Error C3004 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3004"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3004"]
ms.assetid: 819c2b57-8366-4ca7-9135-1f0c5e5b6bb6
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3004
'clause' : clause not valid on OpenMP 'directive' directive  
  
 An OpenMP clause was used on a directive for which it is not enabled.  
  
 The following sample generates C3004:  
  
```  
// C3004.c  
// compile with: /openmp  
int main()  
{  
   int x, y, z;  
  
   // Shared clause not allowed for 'single' directive.  
   #pragma omp single shared(x, y)   // C3004  
  
   x = y;  
}  
```