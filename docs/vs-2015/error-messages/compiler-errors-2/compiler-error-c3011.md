---
title: "Compiler Error C3011 | Microsoft Docs"
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
  - "C3011"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3011"
ms.assetid: 24c3a917-ebff-4deb-9155-23adf6468531
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3011
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3011](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3011).  
  
  
inline assembly not allowed directly within a parallel region  
  
 An `omp` parallel region cannot contain inline assembly instructions.  
  
 The following sample generates C3011:  
  
```  
// C3011.cpp  
// compile with: /openmp  
// processor: /x86  
int main() {  
   int   n = 0;  
  
   #pragma omp parallel  
   {  
      _asm mov eax, n   // Delete this line to resolve this error.  
   }   // C3011  
}  
```

