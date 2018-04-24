---
title: "Compiler Error C3049 | Microsoft Docs"
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
  - "C3049"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3049"
ms.assetid: 6ddf54f6-2c30-4d04-b637-98c6c922c533
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3049
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3049](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3049).  
  
  
arg' : invalid argument in OpenMP 'default' clause  
  
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

