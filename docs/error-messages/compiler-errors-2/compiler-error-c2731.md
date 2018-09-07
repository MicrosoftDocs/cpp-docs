---
title: "Compiler Error C2731 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2731"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2731"]
ms.assetid: 9b563999-febd-4582-9147-f355083c091e
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2731
'identifier' : function cannot be overloaded  
  
 The functions `main`, `WinMain`, `DllMain`, and `LibMain` cannot be overloaded.  
  
 The following sample generates C2731:  
  
```  
// C2731.cpp  
extern "C" void WinMain(int, char *, char *);  
void WinMain(int, short, char *, char*);   // C2731  
```