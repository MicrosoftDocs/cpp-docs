---
title: "Compiler Error C2199 | Microsoft Docs"
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
  - "C2199"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2199"
ms.assetid: 6a92a1b7-7906-49e6-a31f-e8bffbc7706a
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2199
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2199](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/compiler-error-c2199).  
  
  
syntax error : found 'identifier (' at global scope (was a declaration intended?)  
  
 The specified context caused a syntax error. There may be incorrect declaration syntax.  
  
 The following sample generates C2199:  
  
```  
// C2199.cpp  
// compile with: /c  
int j = int(1) int(1);   // C2199  
int j = 1;   // OK  
```

