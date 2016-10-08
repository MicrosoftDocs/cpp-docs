---
title: "Compiler Error C3022"
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
ms.assetid: 9f1d444c-6c6e-48d9-9346-69128390aa33
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
# Compiler Error C3022
'clause' : invalid schedule kind of 'value' on OpenMP 'directive' directive  
  
 An unsupported value was passed to a clause.  
  
 The following sample generates C3022:  
  
```  
// C3022.cpp  
// compile with: /openmp /link vcomps.lib  
#include <stdio.h>  
#include "omp.h"  
  
int main() {  
   int i;  
  
   #pragma omp parallel for schedule(10)   // C3022  
   for (i = 0; i < 10; ++i) ;  
  
   #pragma omp parallel for schedule(x)   // C3022  
   for (i = 0; i < 10; ++i) ;  
  
   // OK  
   #pragma omp parallel for schedule(runtime)  
   for (i = 0; i < 10; ++i)  
   ;  
}  
```