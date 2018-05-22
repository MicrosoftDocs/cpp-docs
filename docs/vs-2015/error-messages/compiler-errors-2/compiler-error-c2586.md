---
title: "Compiler Error C2586 | Microsoft Docs"
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
  - "C2586"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2586"
ms.assetid: dae703c7-5c38-4db6-8411-4d1b22713eb5
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2586
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2586](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2586).  
  
  
incorrect user-defined conversion syntax : illegal indirections  
  
 Indirection of a conversion operator is not allowed.  
  
 The following sample generates C2586:  
  
```  
// c2586.cpp  
// compile with: /c  
struct C {  
   * operator int();   // C2586  
   operator char();   // OK  
};  
```

