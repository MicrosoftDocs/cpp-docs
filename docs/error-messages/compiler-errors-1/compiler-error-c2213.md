---
title: "Compiler Error C2213 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2213"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2213"]
ms.assetid: ff012278-7f3b-4d49-aaed-2349756f6225
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2213
'modifier' : illegal argument to __based  
  
 The argument modifying `__based` is invalid.  
  
 The following sample generates C2213:  
  
```  
// C2213.cpp  
// compile with: /c  
int i;  
int *j;  
char __based(i) *p;   // C2213  
char __based(j) *p2;   // OK  
```