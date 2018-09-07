---
title: "Compiler Error C2236 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2236"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2236"]
ms.assetid: 0b6771a7-a783-4729-9c3d-7a3339c432cc
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2236
unexpected token 'identifier'. Did you forget a ';'?  
  
 The identifier is already defined as a type and cannot be overridden by a user-defined type.  
  
 The following sample generates C2236:  
  
```  
// C2236.cpp  
// compile with: /c  
int class A {};  // C2236 "int class" is unexpected  
int i;  
class B {};  
```