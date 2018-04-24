---
title: "Compiler Error C3056 | Microsoft Docs"
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
  - "C3056"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3056"
ms.assetid: 9500173d-870b-49b3-8e88-0ee93586d19a
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3056
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3056](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3056).  
  
  
symbol' : symbol is not in the same scope with 'threadprivate' directive  
  
 A symbol used in a [threadprivate](../../parallel/openmp/reference/threadprivate.md) clause must be in the same scope as the `threadprivate` clause.  
  
 The following sample generates C3056:  
  
```  
// C3056.cpp  
// compile with: /openmp  
int x, y;  
void test() {  
   #pragma omp threadprivate(x, y)   // C3056  
   #pragma omp parallel copyin(x, y)  
   {  
      x = y;  
   }  
}  
```  
  
 Possible resolution:  
  
```  
// C3056b.cpp  
// compile with: /openmp /LD  
int x, y;  
#pragma omp threadprivate(x, y)  
void test() {  
   #pragma omp parallel copyin(x, y)  
   {  
      x = y;  
   }  
}  
```

