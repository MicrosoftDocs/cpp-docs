---
title: "Compiler Error C3012 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C3012"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3012"
ms.assetid: cc7040b1-b3fb-4da6-a474-877914d30332
caps.latest.revision: 9
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
# Compiler Error C3012
'intrinsic' : intrinsic function not allowed directly within a parallel region  
  
 A [compiler intrinsic](../../intrinsics/compiler-intrinsics.md) function is not allowed in an `omp``parallel` region.  
  
 The following sample generates C3012:  
  
```  
// C3012.cpp  
// compile with: /openmp  
#ifdef __cplusplus  
extern "C"  
{  
#endif  
  
void* _ReturnAddress();  
  
#ifdef __cplusplus  
}  
#endif  
  
int main()  
{  
   _ReturnAddress();   // OK  
  
   #pragma omp parallel  
   {  
      _ReturnAddress();   // C3012  
   }  
}  
```