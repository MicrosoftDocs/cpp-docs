---
title: "Compiler Warning (level 1) C4215 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4215"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4215"]
ms.assetid: f2aab64d-1bab-4f75-95ee-89e1263047b1
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 1) C4215
nonstandard extension used : long float  
  
 The default Microsoft extensions (/Ze) treat **long float** as **double**. ANSI compatibility ([/Za](../../build/reference/za-ze-disable-language-extensions.md)) does not. Use **double** to maintain compatibility.  
  
 The following sample generates C4215:  
  
```  
// C4215.cpp  
// compile with: /W1 /LD  
long float a;   // C4215  
  
// use the line below to resolve the warning  
// double a;  
```