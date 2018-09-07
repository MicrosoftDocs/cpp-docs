---
title: "Compiler Error C2537 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2537"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2537"]
ms.assetid: aee81d8e-300e-4a8b-b6c4-b3828398b34e
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2537
'specifier' : illegal linkage specification  
  
 Possible causes:  
  
1.  The linkage specifier is not supported. Only the "C" linkage specifier is supported.  
  
2.  "C" linkage is specified for more than one function in a set of overloaded functions. This is not allowed.  
  
 The following sample generates C2537:  
  
```  
// C2537.cpp  
// compile with: /c  
extern "c" void func();   // C2537  
extern "C" void func2();   // OK  
```