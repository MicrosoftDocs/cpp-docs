---
title: "Compiler Error C3025 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3025"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3025"]
ms.assetid: 4442f5a3-d9ea-4873-b1fb-e7e5bd3cbe5e
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3025
'clause' : integral expression expected  
  
 A clause requires an integer expression but was given a noninteger expression.  
  
## Example  
 The following sample generates C3025.  
  
```  
// C3025.cpp  
// compile with: /openmp /link vcomps.lib  
#include <stdio.h>  
#include "omp.h"  
  
float f = 2.0F;  
  
int main()   
{  
    int i = 0;  
  
    // OK  
    puts("Test with int");  
    #pragma omp parallel for num_threads(i)  
    for (i = 1; i <= 2; ++i)  
        printf_s("Hello World - thread %d - iteration %d\n",  
                 omp_get_thread_num(), i);  
  
    puts("Test with float");  
    #pragma omp parallel for num_threads(f)   // C3025  
    for (i = 1; i <= 2; ++i)  
        printf_s("Hello World - thread %d - iteration %d\n",  
                 omp_get_thread_num(), i);  
}  
```