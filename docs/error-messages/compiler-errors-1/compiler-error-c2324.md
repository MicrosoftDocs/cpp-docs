---
title: "Compiler Error C2324 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2324"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2324"]
ms.assetid: 215f0544-85b0-452d-825f-17a388b6a61c
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2324
'identifier' : unexpected to the right of 'name'  
  
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