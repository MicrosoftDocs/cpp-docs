---
title: "Compiler Error C3366 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3366"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3366"]
ms.assetid: efc55bcf-c16d-43c1-a36f-87a6165fa2a8
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3366
'variable' : static data members of managed or WinRTtypes must be defined within the class definition  
  
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
