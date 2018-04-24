---
title: "Compiler Error C3353 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3353"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3353"
ms.assetid: 5699c04b-d504-46ce-bf71-c200318fed71
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3353
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3353](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3353).  
  
  
delegate' : a delegate can only be created from a global function or a member function of a managed or WinRT type  
  
 Delegates, declared with the [__delegate](../../misc/delegate.md) or [delegate  (C++ Component Extensions)](../../windows/delegate-cpp-component-extensions.md) keyword, can only be declared at global scope.  
  
 The following sample generates C3353:  
  
```  
// C3353.cpp  
// compile with: /clr  
delegate int f;   // C3353  
```

