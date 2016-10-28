---
title: "Compiler Error C3055"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "C3055"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3055"
ms.assetid: 60446ee0-18dd-48fc-9059-f0a14229dce8
caps.latest.revision: 6
ms.author: "corob"
manager: "douge"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# Compiler Error C3055
'symbol' : symbol cannot be referenced before it is used in 'threadprivate' directive  
  
 A symbol was referenced and then used in a [threadprivate](../parallel/threadprivate.md) clause, which is not allowed.  
  
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