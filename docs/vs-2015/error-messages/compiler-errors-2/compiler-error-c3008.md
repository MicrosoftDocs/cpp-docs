---
title: "Compiler Error C3008 | Microsoft Docs"
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
  - "C3008"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3008"
ms.assetid: 04d93201-28e5-4be0-945c-aad616376f4b
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3008
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3008](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3008).  
  
  
arg' : argument is missing closing ')' on OpenMP 'directive' directive  
  
 An OpenMP directive that takes an argument did not have a closing parenthesis.  
  
 The following sample generates C3008:  
  
```  
// C3008.c  
// compile with: /openmp  
int main()  
{  
   int x, y, z;  
   #pragma omp parallel shared(x   // C3008  
   // Try the following line instead:  
   #pragma omp parallel shared(x)  
   {  
   }  
}  
```

