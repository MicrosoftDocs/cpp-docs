---
title: "Compiler Error C3002 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3002"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3002"]
ms.assetid: 2d4241a7-c8eb-4d43-a128-dca255d137bc
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3002
'name1 name2' : multiple OpenMP directive names  
  
 Multiple directive names are not allowed.  
  
 The following sample generates C3002:  
  
```  
// C3002.c  
// compile with: /openmp  
int main()  
{  
   #pragma omp parallel single   // C3002  
}  
```