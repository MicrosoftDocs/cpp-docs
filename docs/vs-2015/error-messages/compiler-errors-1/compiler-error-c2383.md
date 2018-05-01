---
title: "Compiler Error C2383 | Microsoft Docs"
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
  - "C2383"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2383"
ms.assetid: 6696221d-879c-477a-a0f3-a6edc15fd3d7
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2383
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2383](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/compiler-error-c2383).  
  
  
symbol' : default-arguments are not allowed on this symbol  
  
 The C++ compiler does not allow default arguments on pointers to functions.  
  
 This code was accepted by the previous version's compiler but now gives an error. For code that works in all versions of Visual C++, do not assign a default value to a pointer-to-function argument.  
  
 The following line generates C2383:  
  
```  
// C2383.cpp  
// compile with: /c   
void (*pf)(int = 0);   // C2383  
void (*pf)(int);   // OK  
```

