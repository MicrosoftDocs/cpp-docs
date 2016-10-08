---
title: "Compiler Error C3012"
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
ms.assetid: cc7040b1-b3fb-4da6-a474-877914d30332
caps.latest.revision: 9
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
# Compiler Error C3012
'intrinsic' : intrinsic function not allowed directly within a parallel region  
  
 A [compiler intrinsic](../VS_visualcpp/Compiler-Intrinsics.md) function is not allowed in an `omp``parallel` region.  
  
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