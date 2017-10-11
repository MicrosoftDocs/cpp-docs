---
title: "Compiler Error C2272 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: ["C2272"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2272"]
ms.assetid: 1517706a-9c27-452e-9b10-3424b3d232bc
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2272
'function' : modifiers not allowed on static member functions  
  
 A `static` member function is declared with a memory-model specifier, such as [const](../../cpp/const-cpp.md) or [volatile](../../cpp/volatile-cpp.md), and such modifiers are not allowed on `static` member functions.  
  
 The following sample generates C2272:  
  
```  
// C2272.cpp  
// compile with: /c  
class CMyClass {  
public:  
   static void func1() const volatile;   // C2272  func1 is static  
   void func2() const volatile;   // OK  
};  
```