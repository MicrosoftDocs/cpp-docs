---
title: "Compiler Error C3037 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C3037"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3037"
ms.assetid: 9ba8a890-d3c7-4cce-93c5-d358e2bfad28
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
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
# Compiler Error C3037
'var' : variable in 'reduction' clause must be shared in enclosing context  
  
 A variable specified in a [reduction](../../parallel/openmp/reference/reduction.md) clause may not be private to each thread in the context.  
  
 The following sample generates C3037:  
  
```  
// C3037.cpp  
// compile with: /openmp /c  
int g_i;  
  
int main() {  
   int i;  
  
   #pragma omp parallel private(g_i)  
   // try the following line instead  
   // #pragma omp parallel   
   {  
      #pragma omp for reduction(+:g_i)   // C3037  
      for (i = 0 ; i < 10 ; ++i) {  
         g_i += i;  
      }  
   }  
}  
```