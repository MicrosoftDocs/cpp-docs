---
title: "Compiler Error C3009 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C3009"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3009"
ms.assetid: aded5985-f5fd-4c3e-a157-16be55ec1313
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3009
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3009](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3009).  
  
  
label' : jump into OpenMP structured block not allowed  
  
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

