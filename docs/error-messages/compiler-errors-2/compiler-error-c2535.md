---
title: "Compiler Error C2535 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2535"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2535"]
ms.assetid: a958f83e-e2bf-4a59-b44b-d406ec325d7e
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2535
'identifier' : member function already defined or declared  
  
 This error could be caused by using the same formal parameter list in more than one definition or declaration of an overloaded function.  
  
 If you get C2535 because of the Dispose function, see [Destructors and finalizers](../../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Destructors_and_finalizers) for more information.  
  
 If you are compiling an ATL project, see Knowledge Base article Q241852.  
  
 The following sample generates C2535:  
  
```  
// C2535.cpp  
// compile with: /c  
class C {  
public:  
   void func();   // forward declaration  
   void func() {}   // C2535  
};  
```