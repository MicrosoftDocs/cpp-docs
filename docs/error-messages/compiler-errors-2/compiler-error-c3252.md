---
title: "Compiler Error C3252 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: ["C3252"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3252"]
ms.assetid: aa9ad096-e9ac-41c7-8ad9-b966751c7c75
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# Compiler Error C3252
'method' : cannot reduce accessibility of a virtual method in a managed or WinRT type  
  
 A class that implements a virtual method from a base class or any method from an interface cannot reduce the access of that method.  
  
 Note that all methods in an interface are public.  
  
 The following sample generates C3252 and shows how to fix it:  
  
```  
// C3252.cpp  
// compile with: /clr /c  
ref class A {  
public:  
   virtual void f1() {}  
};  
  
ref class B : public A {  
// To fix, uncomment the following line:   
// public:      
   virtual void f1() override sealed {}   // C3252, make this method public  
};  
```