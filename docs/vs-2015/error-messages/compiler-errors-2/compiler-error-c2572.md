---
title: "Compiler Error C2572 | Microsoft Docs"
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
  - "C2572"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2572"
ms.assetid: f1a42d69-727d-4ce5-88c8-d5f55dea66ac
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2572
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2572](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2572).  
  
  
class::member' : redefinition of default parameter : parameter param  
  
 Default parameters cannot be redefined. If you require another value for the parameter, the default parameter should be left undefined.  
  
 The following sample generates C2572:  
  
```  
// C2572.cpp  
// compile with: /c  
void f(int i = 1);   // function declaration  
  
// function definition  
void f(int i = 1) {}   // C2572  
  
// try the following line instead  
// void f(int i) {}  
```

