---
title: "Compiler Error C3046 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3046"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3046"]
ms.assetid: 2e53d835-faa1-4ec0-9807-41f3dc552635
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3046
Missing structured block in an OpenMP '#pragma omp sections' region  
  
 A [sections](../../parallel/openmp/reference/sections-openmp.md) directive has an empty code block.  
  
 The following sample generates C3046:  
  
```  
// C3046.cpp  
// compile with: /openmp /c  
#include "omp.h"  
  
int main() {  
   int n2 = 2, n3 = 3;  
  
   #pragma omp parallel  
   {  
      ++n2;  
  
      #pragma omp sections  
      {  
/*  
         ++n2;  
  
         #pragma omp section  
         {  
            ++n3;  
         }  
*/  
       }   // C3046 uncomment code to resolve this C3046  
   }  
}  
```