---
title: "Compiler Warning (level 1) C4508 | Microsoft Docs"
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
  - "C4508"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4508"
ms.assetid: c05f113b-b789-4df0-a4ef-78bce4767021
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4508
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 1) C4508](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4508).  
  
  
function' : function should return a value; 'void' return type assumed  
  
 The function has no return type specified. In this case, C4430 should also fire and the compiler implements the fix reported by C4430 (default value is int).  
  
 To resolve this warning, explicitly declare the return type of functions.  
  
 The following sample generates C4508:  
  
```  
// C4508.cpp  
// compile with: /W1 /c  
#pragma warning (disable : 4430)  
func() {}   // C4508  
void func2() {}   // OK  
```

