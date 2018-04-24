---
title: "Compiler Error C3018 | Microsoft Docs"
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
  - "C3018"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3018"
ms.assetid: 685be45f-f116-43a8-a88d-05ab6616e2f1
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3018
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3018](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3018).  
  
  
var1' : OpenMP 'for' test or increment must use index variable 'var2'  
  
 A `for` loop in an OpenMP statement must use the same variable for its test and increment as it uses for its index.  
  
 The following sample generates C3018:  
  
```  
// C3018.cpp  
// compile with: /openmp  
int main()  
{  
   int i = 0, j = 5;  
  
   #pragma omp parallel  
   {  
      #pragma omp for  
      for (i = 0; j < 10; ++i)   // C3018  
      // try the the following line instead  
      // for (i = 0; i < 10; ++i)  
         j *= 2;  
  
      #pragma omp for  
      for (i = 0; i < 10; j = j + i)   // C3018  
      // try the the following line instead  
      // for (i = 0; i < 10; i = j + i)  
         j *= 2;  
   }  
}  
```

