---
title: "Compiler Error C3001 | Microsoft Docs"
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
  - "C3001"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3001"
ms.assetid: d0e03478-1b44-47e5-8f5b-70415fa1f8bc
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3001
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3001](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3001).  
  
  
error_text' : expected an OpenMP directive name  
  
 The `omp` pragma must be followed by a directive.  
  
 The following sample generates C3001:  
  
```  
// C3001.c  
// compile with: /openmp  
int main()  
{  
   #pragma omp   // C3001 missing token  
}  
```

