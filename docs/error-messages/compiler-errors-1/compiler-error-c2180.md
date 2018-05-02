---
title: "Compiler Error C2180 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2180"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2180"]
ms.assetid: ea71b39e-b977-48a7-b7bd-af68ef5e263b
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2180
controlling expression has type 'type'  
  
 The controlling expression in an `if`, `while`, `for`, or `do` statement is an expression cast to `void`. To fix this issue, change the controlling expression to one that produces a `bool` or a type that can be converted to `bool`.  
  
 The following sample generates C2180:  
  
```  
// C2180.c  
  
int main() {  
   while ((void)1)   // C2180  
      return 1;  
   while (1)         // OK  
      return 0;  
}  
```