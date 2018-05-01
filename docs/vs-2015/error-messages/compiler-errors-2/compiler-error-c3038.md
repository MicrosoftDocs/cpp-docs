---
title: "Compiler Error C3038 | Microsoft Docs"
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
  - "C3038"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3038"
ms.assetid: 140ada3e-5636-43ef-a4ee-22a9f66a771f
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3038
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3038](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3038).  
  
  
var' : variable in 'private' clause cannot be a reduction variable in enclosing context  
  
 Variables that appear in the [reduction](../../parallel/openmp/reference/reduction.md) clause of a parallel directive cannot be specified in a [private](../../parallel/openmp/reference/private-openmp.md) clause on a work-sharing directive that binds to the parallel construct.  
  
 The following sample generates C3038:  
  
```  
// C3038.cpp  
// compile with: /openmp /c  
int g_i, g_i2;  
  
int main() {  
   int i;  
  
   #pragma omp parallel reduction(+: g_i)  
   {  
      #pragma omp for private(g_i)   // C3038  
      // try the following line instead  
      // #pragma omp for private(g_i2)  
      for (i = 0; i < 10; ++i)  
         g_i += i;  
   }  
}  
```

