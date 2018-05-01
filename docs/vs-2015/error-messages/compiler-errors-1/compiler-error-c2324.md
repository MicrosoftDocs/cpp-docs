---
title: "Compiler Error C2324 | Microsoft Docs"
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
  - "C2324"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2324"
ms.assetid: 215f0544-85b0-452d-825f-17a388b6a61c
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2324
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2324](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/compiler-error-c2324).  
  
  
identifier' : unexpected to the right of 'name'  
  
 A destructor is called using an incorrect identifier.  
  
 The following sample generates C2324:  
  
```  
// C2324.cpp  
class A {};  
typedef A* pA_t;  
int i;  
  
int main() {  
   pA_t * ppa = new pA_t;  
   ppa->~i;   // C2324  
   ppa->~pA_t();   // OK  
}  
```

