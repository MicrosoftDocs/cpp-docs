---
title: "Compiler Error C2575 | Microsoft Docs"
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
  - "C2575"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2575"
ms.assetid: 9eb45706-37ef-4481-b373-6d193ba13634
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2575
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2575](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2575).  
  
  
identifier' : only member functions and bases can be virtual  
  
 A global function or class is declared `virtual`. This is not allowed.  
  
 The following sample generates C2575:  
  
```  
// C2575.cpp  
// compile with: /c  
virtual void func() {}   // C2575  
  
void func2() {}  
struct A {  
   virtual void func2(){}  
};  
```

