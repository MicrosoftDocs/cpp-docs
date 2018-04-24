---
title: "Compiler Error C2533 | Microsoft Docs"
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
  - "C2533"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2533"
ms.assetid: 5b335652-076c-4824-87c8-a741f64a3ce0
caps.latest.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2533
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2533](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2533).  
  
  
identifier' : constructors not allowed a return type  
  
 A constructor cannot have a return type (not even a `void` return type).  
  
 A common source of this error is a missing semicolon between the end of a class definition and the first constructor implementation. The compiler sees the class as a definition of the return type for the constructor function, and generates C2533.  
  
 The following sample generates C2533, and shows how to fix it:  
  
```  
// C2533.cpp  
// compile with: /c  
class X {  
public:  
   X();     
};  
  
int X::X() {}   // C2533 - constructor return type not allowed  
X::X() {}   // OK - fix by using no return type  
```

