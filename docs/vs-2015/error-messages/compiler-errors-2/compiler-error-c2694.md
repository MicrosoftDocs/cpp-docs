---
title: "Compiler Error C2694 | Microsoft Docs"
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
  - "C2694"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2694"
ms.assetid: 8dc2cec2-67ae-4e16-8c0c-374425aca8bc
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2694
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2694](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2694).  
  
  
override': overriding virtual function has less restrictive exception specification than base class virtual member function 'base'  
  
 A virtual function was overridden, but under [/Za](../../build/reference/za-ze-disable-language-extensions.md), the overriding function had a less restrictive [exception specification](../../cpp/exception-specifications-throw-cpp.md).  
  
 The following sample generates C2694:  
  
```  
// C2694.cpp  
// compile with: /Za /c  
class MyBase {  
public:  
   virtual void f(void) throw(int) {  
   }  
};  
  
class Derived : public MyBase {  
public:  
   void f(void) throw(...) {}   // C2694  
   void f2(void) throw(int) {}   // OK  
};  
```

