---
title: "Compiler Error C2695 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2695"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2695"]
ms.assetid: 3f6f2091-c38b-40ea-ab6c-f1846f5702d7
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2695
'function1': overriding virtual function differs from 'function2' only by calling convention  
  
 The signature of a function in a derived class cannot override a function in a base class and change the calling convention.  
  
 The following sample generates C2695:  
  
```  
// C2695.cpp  
class C {  
   virtual void __fastcall func();  
};  
  
class D : public C {  
   virtual void __clrcall func();   // C2695  
};  
```