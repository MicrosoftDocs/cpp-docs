---
title: "Compiler Error C2055 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2055"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2055"]
ms.assetid: 6cec79cc-6bec-443f-9897-fbf5452718c7
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2055
expected formal parameter list, not a type list  
  
 A function definition contains a parameter type list instead of a formal parameter list. ANSI C requires formal parameters to be named unless they are void or an ellipsis (`...`).  
  
 The following sample generates C2055:  
  
```  
// C2055.c  
// compile with: /c  
void func(int, char) {}  // C2055  
void func (int i, char c) {}   // OK  
```