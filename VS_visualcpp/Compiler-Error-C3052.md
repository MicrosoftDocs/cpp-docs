---
title: "Compiler Error C3052"
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
ms.assetid: 87480c42-1ceb-4775-8d20-88c54a7bb6a6
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
# Compiler Error C3052
'var' : variable doesn't appear in a data-sharing clause under a default(none) clause  
  
 If [default(none)](../VS_visualcpp/default--OpenMP-.md) is used, any variable used in the structured block must be explicitly specified as either [shared](../VS_visualcpp/shared--OpenMP-.md) or [private](../VS_visualcpp/private--OpenMP-.md).  
  
 The following sample generates C3052:  
  
```  
// C3052.cpp  
// compile with: /openmp /c  
int main() {  
   int n1 = 1;  
  
   #pragma omp parallel default(none) // shared(n1) private(n1)  
   {  
      n1 = 0;   // C3052 use either a shared or private clause  
   }  
}  
```