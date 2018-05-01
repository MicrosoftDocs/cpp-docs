---
title: "Compiler Error C3910 | Microsoft Docs"
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
  - "C3910"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3910"
ms.assetid: cfcbe620-b463-463b-95ea-2d60ad33ebb5
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3910
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3910](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3910).  
  
  
event': must define member 'method'  
  
 An event was defined, but did not contain the specified, required accessor method.  
  
 For more information, see [event](../../windows/event-cpp-component-extensions.md).  
  
 The following sample generates C3910:  
  
```  
// C3910.cpp  
// compile with: /clr /c  
delegate void H();  
ref class X {  
   event H^ E {  
      // uncomment the following lines  
      // void add(H^) {}  
      // void remove( H^ h ) {}  
      // void raise( ) {}  
   };   // C3910  
  
   event H^ E2; // OK data member  
};  
```

