---
title: "Compiler Error C3009 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: ["C3009"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3009"]
ms.assetid: aded5985-f5fd-4c3e-a157-16be55ec1313
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3009
'label' : jump into OpenMP structured block not allowed  
  
 Code cannot jump into or out of an OpenMP block.  
  
 The following sample generates C3009:  
  
```  
// C3009.c  
// compile with: /openmp  
int main() {  
   #pragma omp parallel   
   {  
   lbl2:;  
   }  
   goto lbl2;   // C3009  
}  
```