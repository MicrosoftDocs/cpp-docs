---
title: "Compiler Error C3055 | Microsoft Docs"
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
  - "C3055"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3055"
ms.assetid: 60446ee0-18dd-48fc-9059-f0a14229dce8
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3055
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3055](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3055).  
  
  
symbol' : symbol cannot be referenced before it is used in 'threadprivate' directive  
  
 A symbol was referenced and then used in a [threadprivate](../../parallel/openmp/reference/threadprivate.md) clause, which is not allowed.  
  
 The following sample generates C3055:  
  
```  
// C3055.cpp  
// compile with: /openmp  
int x, y;  
int z = x;  
#pragma omp threadprivate(x, y)   // C3055  
  
void test() {  
   #pragma omp parallel copyin(x, y)  
   {  
      x = y;  
   }  
}  
```  
  
 Possible resolution:  
  
```  
// C3055b.cpp  
// compile with: /openmp /LD  
int x, y, z;  
#pragma omp threadprivate(x, y)  
  
void test() {  
   #pragma omp parallel copyin(x, y)  
   {  
      x = y;  
   }  
}  
```

