---
title: "Compiler Error C3911 | Microsoft Docs"
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
  - "C3911"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3911"
ms.assetid: b786da59-0e99-479d-bc0d-551126e940f2
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3911
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3911](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3911).  
  
  
event_accessor_method': function must have type 'signature'  
  
 An event's accessor method was not properly declared.  
  
 For more information, see [event](../../windows/event-cpp-component-extensions.md).  
  
 The following sample generates C3911:  
  
```  
// C3911.cpp  
// compile with: /clr  
using namespace System;  
delegate void H(String^, int);  
  
ref class X {  
   event H^ E1 {  
      void add() {}   // C3911  
      // try the following line instead  
      // void add(H ^ h) {}  
  
      void remove(){}  
      // try the following line instead  
      // void remove(H ^ h) {}  
  
      void raise(){}  
      // try the following line instead  
      // void raise(String ^ s, int i) {}  
   };  
};  
```

