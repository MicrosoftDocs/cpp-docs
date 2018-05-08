---
title: "Compiler Error C2586 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2586"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2586"]
ms.assetid: dae703c7-5c38-4db6-8411-4d1b22713eb5
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2586
incorrect user-defined conversion syntax : illegal indirections  
  
 Indirection of a conversion operator is not allowed.  
  
 The following sample generates C2586:  
  
```  
// c2586.cpp  
// compile with: /c  
struct C {  
   * operator int();   // C2586  
   operator char();   // OK  
};  
```