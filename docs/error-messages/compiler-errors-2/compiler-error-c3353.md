---
title: "Compiler Error C3353 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3353"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3353"]
ms.assetid: 5699c04b-d504-46ce-bf71-c200318fed71
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3353
'delegate' : a delegate can only be created from a global function or a member function of a managed or WinRT type  
  
 Delegates, declared with the [delegate](../../windows/delegate-cpp-component-extensions.md) keyword, can only be declared at global scope.  
  
 The following sample generates C3353:  
  
```  
// C3353.cpp  
// compile with: /clr  
delegate int f;   // C3353  
```