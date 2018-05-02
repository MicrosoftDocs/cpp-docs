---
title: "Compiler Error C2199 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2199"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2199"]
ms.assetid: 6a92a1b7-7906-49e6-a31f-e8bffbc7706a
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2199
syntax error : found 'identifier (' at global scope (was a declaration intended?)  
  
 The specified context caused a syntax error. There may be incorrect declaration syntax.  
  
 The following sample generates C2199:  
  
```  
// C2199.cpp  
// compile with: /c  
int j = int(1) int(1);   // C2199  
int j = 1;   // OK  
```