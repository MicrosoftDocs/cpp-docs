---
title: "Compiler Error C3012 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
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
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3012
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3012](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3012).  
  
  
intrinsic' : intrinsic function not allowed directly within a parallel region  
  
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

