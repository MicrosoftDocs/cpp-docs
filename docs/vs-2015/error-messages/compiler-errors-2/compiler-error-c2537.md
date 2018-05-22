---
title: "Compiler Error C2537 | Microsoft Docs"
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
  - "C2537"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2537"
ms.assetid: aee81d8e-300e-4a8b-b6c4-b3828398b34e
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2537
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2537](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2537).  
  
  
specifier' : illegal linkage specification  
  
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

