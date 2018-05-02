---
title: "Compiler Error C2598 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2598"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2598"]
ms.assetid: 40777c62-39ba-441e-b081-f49f94b43547
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2598
linkage specification must be at global scope  
  
 The linkage specifier is declared at local scope.  
  
 The following sample generates C2598:  
  
```  
// C2598.cpp  
// compile with: /c  
void func() {  
   extern "C" int func2();   // C2598  
}  
  
extern "C" int func( int i );  
```