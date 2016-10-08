---
title: "Compiler Error C3046"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-csharp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 2e53d835-faa1-4ec0-9807-41f3dc552635
caps.latest.revision: 7
manager: douge
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# Compiler Error C3046
Missing structured block in an OpenMP '#pragma omp sections' region  
  
 A [sections](../VS_visualcpp/sections--OpenMP-.md) directive has an empty code block.  
  
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