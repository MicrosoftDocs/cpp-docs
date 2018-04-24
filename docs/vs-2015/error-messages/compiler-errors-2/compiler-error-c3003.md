---
title: "Compiler Error C3003 | Microsoft Docs"
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
  - "C3003"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3003"
ms.assetid: 22e74f99-bb7f-4518-ab0d-934d5d49bcc7
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3003
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3003](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3003).  
  
  
directive' : OpenMP directive name not allowed after directive clauses  
  
 An OpenMP directive name cannot follow an OpenMP directive clause.  
  
 The following sample generates C3003:  
  
```  
// C3003.c  
// compile with: /openmp  
int main()  
{  
   int x, y, z;  
   #pragma omp parallel shared(x, y, z) for   // C3003  
}  
```

