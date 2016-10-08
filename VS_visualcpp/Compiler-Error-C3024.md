---
title: "Compiler Error C3024"
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
ms.assetid: 1c031c28-ce37-4de3-aead-cfe76b261856
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
# Compiler Error C3024
'schedule(runtime)' : chunk_size expression is not allowed  
  
 A value cannot be passed to the run-time parameter of the schedule clause.  
  
 The following sample generates C3024:  
  
```  
// C3024.cpp  
// compile with: /openmp /link vcomps.lib  
#include <stdio.h>  
#include "omp.h"  
  
int main() {  
   int i;  
  
   #pragma omp parallel for schedule(runtime, 10)   // C3024  
   for (i = 0; i < 10; ++i) ;  
  
   #pragma omp parallel for schedule(runtime)   // OK  
   for (i = 0; i < 10; ++i) ;  
}  
```