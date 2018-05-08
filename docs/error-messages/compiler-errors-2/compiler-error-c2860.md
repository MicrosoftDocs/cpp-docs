---
title: "Compiler Error C2860 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2860"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2860"]
ms.assetid: ccc83553-90ed-4e94-b5e9-38b58ae38e31
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2860
'void' cannot be an argument type, except for '(void)'  
  
 Type `void` cannot be used as an argument type with other arguments.  
  
 The following sample generates C2860:  
  
```  
// C2860.cpp  
// compile with: /c  
void profunc1(void, int i);   // C2860  
void func10(void);   // OK  
```