---
title: "Compiler Error C3027 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3027"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3027"]
ms.assetid: 6562a5c2-2f28-4b36-91ca-2a64c0f0501a
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3027
'clause' : arithmetic or pointer expression expected  
  
 A clause that requires an arithmetic or pointer expression was passed another kind of expression.  
  
## Example  
 The following sample generates C3027:  
  
```  
// C3027.cpp  
// compile with: /openmp /link vcomps.lib  
#include <stdio.h>  
#include "omp.h"  
  
struct MyStruct   
{  
    int x;  
} m_MyStruct;  
  
int main()   
{  
    int i;  
  
    puts("Test with class MyStruct:\n");  
    #pragma omp parallel for if(m_MyStruct)   // C3027  
    for (i = 1; i <= 2; ++i)  
        printf_s("Hello World - thread %d - iteration %d\n",  
                 omp_get_thread_num(), i);  
  
    puts("Test with int:\n");  
    #pragma omp parallel for if(9)   // OK  
    for (i = 1; i <= 2; ++i)  
        printf_s("Hello World - thread %d - iteration %d\n",  
                 omp_get_thread_num(), i);  
}  
```