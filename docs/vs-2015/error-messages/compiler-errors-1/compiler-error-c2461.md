---
title: "Compiler Error C2461 | Microsoft Docs"
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
  - "C2461"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2461"
ms.assetid: e64ba651-f441-4fdb-b5cb-4209bbbe4db4
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2461
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2461](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/compiler-error-c2461).  
  
  
class' : constructor syntax missing formal parameters  
  
 The constructor for the class does not specify any formal parameters. The declaration of a constructor must specify a formal parameter. (The list can be null.)  
  
 Add a pair of parentheses after `class``::``class`.  
  
 The following sample generates C2461:  
  
```  
// C2461.cpp  
// compile with: /c  
class C {  
   C::C;   // C2461  
   C::C();   // OK  
};  
```

