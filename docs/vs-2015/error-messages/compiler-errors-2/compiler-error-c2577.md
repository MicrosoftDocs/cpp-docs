---
title: "Compiler Error C2577 | Microsoft Docs"
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
  - "C2577"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2577"
ms.assetid: fc79ef83-8362-40a2-9257-8037c3195ce4
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2577
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2577](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2577).  
  
  
member' : destructor/finalizer cannot have a return type  
  
 A destructor or finalizer cannot return a value of `void` or any other type. Remove the `return` statement from the destructor definition.  
  
## Example  
 The following sample generates C2577.  
  
```  
// C2577.cpp  
// compile with: /c  
class A {  
public:  
   A() {}  
   ~A(){  
      return 0;   // C2577  
   }  
};  
```

