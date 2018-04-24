---
title: "Compiler Error C2483 | Microsoft Docs"
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
  - "C2483"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2483"
ms.assetid: 5762b325-914b-442d-a604-e4617ba04038
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2483
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2483](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/compiler-error-c2483).  
  
  
identifier' : object with constructor or destructor cannot be declared 'thread'  
  
 Variables declared with the `thread` attribute cannot be initialized with a constructor or other expression that requires run-time evaluation. A static expression is required to initialize `thread` data.  
  
## Example  
 The following sample generates C2483.  
  
```  
// C2483.cpp  
// compile with: /c  
__declspec(thread) struct A {  
   A(){}  
   ~A(){}  
} aa;   // C2483 error  
  
__declspec(thread) struct B {} b;   // OK  
```  
  
## See Also  
 [thread](../../cpp/thread.md)

