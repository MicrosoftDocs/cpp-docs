---
title: "Compiler Error C3003"
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
ms.assetid: 22e74f99-bb7f-4518-ab0d-934d5d49bcc7
caps.latest.revision: 6
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
# Compiler Error C3003
'directive' : OpenMP directive name not allowed after directive clauses  
  
 An OpenMP directive name cannot follow an OpenMP directive clause.  
  
 The following sample generates C3003:  
  
```  
// C3003.c  
// compile with: /openmp  
int main()  
{  
   int x, y, z;  
   #pragma omp parallel shared(x, y, z) for   // C3003  
}  
```