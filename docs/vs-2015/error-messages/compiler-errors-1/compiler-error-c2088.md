---
title: "Compiler Error C2088 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2088"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2088"
ms.assetid: b93f7094-185b-423d-8bb9-507cd757dbf5
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2088
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2088](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/compiler-error-c2088).  
  
  
operator' : illegal for 'class-key'  
  
 The operator was not defined for the structure or union. This error is only valid for C code.  
  
 The following sample generates C2088 three times:  
  
```  
// C2088.c  
struct S {  
   int m_i;   
} s;  
  
int main() {  
   int i = s * 1;   // C2088  
   struct S s2 = +s;   // C2088  
   s++;   // C2088  
}  
```

