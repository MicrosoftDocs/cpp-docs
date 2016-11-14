---
title: "Compiler Error C3054 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C3054"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3054"
ms.assetid: 6f4b7ac5-0d12-474b-b611-76ff26ee41ac
caps.latest.revision: 7
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
# Compiler Error C3054
'#pragma omp parallel' is currently not supported in a generic class or function  
  
 For more information, see [Generics](../../windows/generics-cpp-component-extensions.md) and [OpenMP](../../parallel/openmp/openmp-in-visual-cpp.md).  
  
## Example  
 The following sample generates C3054.  
  
```  
// C3054.cpp  
// compile with: /openmp /clr /c  
#include <omp.h>  
  
ref struct MyBaseClass {  
   // Delete the following 7 lines to resolve.  
   generic <class ItemType>  
   void Test(ItemType i) {   // C3054  
      #pragma omp parallel num_threads(4)  
      {  
         int i = omp_get_thread_num();  
      }  
   }  
  
   // OK  
   void Test2() {  
      #pragma omp parallel num_threads(4)  
      {  
         int i = omp_get_thread_num();  
      }  
   }  
};  
```