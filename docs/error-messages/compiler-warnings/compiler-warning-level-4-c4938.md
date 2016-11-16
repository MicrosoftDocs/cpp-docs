---
title: "Compiler Warning (level 4) C4938 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C4938"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4938"
ms.assetid: 6acac81a-9d23-465e-b700-ed4b6e8edcd0
caps.latest.revision: 8
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
# Compiler Warning (level 4) C4938
'var' : Floating point reduction variable may cause inconsistent results under /fp:strict or #pragma fenv_access  
  
 You should not use [/fp:strict](../../build/reference/fp-specify-floating-point-behavior.md) or [fenv_access](../../preprocessor/fenv-access.md) with OpenMP floating-point reductions, because the sum is computed in a different order. Thus, results can differ from the results without /openmp.  
  
 The following sample generates C4938:  
  
```  
// C4938.cpp  
// compile with: /openmp /W4 /fp:strict /c  
// #pragma fenv_access(on)  
extern double *a;   
  
double test(int first, int last) {   
   double sum = 0.0;   
   #pragma omp parallel for reduction(+: sum)   // C4938  
   for (int i = first ; i <= last ; ++i)   
      sum += a[i];   
   return sum;   
}  
```  
  
 Without explicit parallelization, the sum is computed as follows:  
  
```  
sum = a[first] + a[first + 1] + ... + a[last];   
```  
  
 With explicit parallelization (and two threads), the sum is computed as follows:  
  
```  
sum1 = a[first] + ... a[first + last / 2];   
sum2 = a[(first + last / 2) + 1] + ... a[last];   
sum = sum1 + sum2;  
```