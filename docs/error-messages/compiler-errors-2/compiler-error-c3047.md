---
title: "Compiler Error C3047 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: ["C3047"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3047"]
ms.assetid: 91c14566-5958-433d-8549-0e8bc3196f76
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3047
Structured block in an OpenMP 'sections' region must be preceded by '#pragma omp section'  
  
 Any code in a code block introduced by a [sections](../../parallel/openmp/reference/sections-openmp.md) directive must be in a code block introduced by a `section` directive.  
  
 The following sample generates C3047:  
  
```  
// C3047.cpp  
// compile with: /openmp /c  
#include "omp.h"  
  
int main() {  
   int n2 = 2, n3 = 3;  
  
   #pragma omp parallel  
   {  
      ++n2;  
  
      #pragma omp sections  
      {  
  
         #pragma omp section  
         {  
            ++n3;  
         }  
  
         ++n2;   // C3047 not enclosed in #pragma omp section  
      }  
   }  
}  
```