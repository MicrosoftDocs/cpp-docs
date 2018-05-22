---
title: "Compiler Error C3059 | Microsoft Docs"
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
  - "C3059"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3059"
ms.assetid: 57220324-8286-4cab-a1ab-45385eb1eae0
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3059
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3059](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3059).  
  
  
var' : 'threadprivate' symbol cannot be used in the 'clause' clause  
  
 A [threadprivate](../../parallel/openmp/reference/threadprivate.md) symbol was used in a clause.  
  
 The following sample generates C3059:  
  
```  
// C3059.cpp  
// compile with: /openmp  
#include "omp.h"  
int x, y;  
#pragma omp threadprivate(x, y)  
  
int main() {  
   #pragma omp parallel private(x, y)   // C3059  
   {  
      x = y;  
   }  
}  
```  
  
 Possible resolution:  
  
```  
// C3059b.cpp  
// compile with: /openmp  
#include "omp.h"  
int x = 0, y = 0;  
  
int main() {  
   #pragma omp parallel firstprivate(y) private(x)  
   {  
      x = y;  
   }  
}  
```

