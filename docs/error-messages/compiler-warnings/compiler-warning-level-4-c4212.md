---
title: "Compiler Warning (level 4) C4212 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4212"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4212"]
ms.assetid: df781ea1-182d-4f9f-9a31-55b6ce80c711
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 4) C4212
nonstandard extension used : function declaration used ellipsis  
  
 The function prototype has a variable number of arguments. The function definition does not.  
  
 The following sample generates C4212:  
  
```  
// C4212.c  
// compile with: /W4 /Ze /c  
void f(int , ...);  
void f(int i, int j) {}  
```