---
title: "Compiler Error C3041 | Microsoft Docs"
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
  - "C3041"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3041"
ms.assetid: 9df1ae44-3ac7-4c6c-899f-f35ffe7ccf0d
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3041
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3041](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3041).  
  
  
var' : variable in 'copyprivate' clause must be private in enclosing context  
  
 A variable passed to [copyprivate](../../parallel/openmp/reference/copyprivate.md) cannot be shared in the enclosing context.  
  
 The following sample generates C3041:  
  
```  
// C3041.cpp  
// compile with: /openmp /c  
#include "omp.h"  
double d;  
int main() {  
   #pragma omp parallel shared(d)  
   // try the following line instead  
   // #pragma omp parallel private(d)  
   {  
      // or don't make d copyprivate  
      #pragma omp single copyprivate(d)   // C3041  
      {  
      }  
   }  
}  
```

