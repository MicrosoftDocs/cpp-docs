---
title: "Compiler Error C3366 | Microsoft Docs"
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
  - "C3366"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3366"
ms.assetid: efc55bcf-c16d-43c1-a36f-87a6165fa2a8
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3366
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3366](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3366).  
  
  
variable' : static data members of managed or WinRTtypes must be defined within the class definition  
  
 You attempted to reference a static member of a WinRT or .NET class or interface outside the definition of that class or interface.  
  
 The compiler needs to know the full definition of the class (to emit the meta-data after one pass) and requires static data members to be initialized within the class.  
  
 For example, the following example generates C3366 and shows how to fix it:  
  
```  
// C3366.cpp  
// compile with: /clr /c  
ref class X {  
   public:  
   static int i;   // initialize i here to avoid C3366  
};  
  
int X::i = 5;      // C3366  
```  
  
 The following example generates C3366 and shows how to fix it:  
  
```  
// C3366_b.cpp  
// compile with: /clr:oldSyntax /c  
__gc struct X {  
   static int i;   // initialize i here to avoid C3366  
};  
  
int X::i = 5;      // C3366  
```

