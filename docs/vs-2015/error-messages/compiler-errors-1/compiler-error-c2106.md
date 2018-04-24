---
title: "Compiler Error C2106 | Microsoft Docs"
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
  - "C2106"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2106"
ms.assetid: d5c91a2e-04e4-4770-8478-788b98c52a53
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2106
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2106](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/compiler-error-c2106).  
  
  
operator' : left operand must be l-value  
  
 The operator must have an l-value as its left operand.  
  
 The following sample generates C2106:  
  
```  
// C2106.cpp  
int main() {  
   int a;  
   1 = a;   // C2106  
   a = 1;   // OK  
}  
```

