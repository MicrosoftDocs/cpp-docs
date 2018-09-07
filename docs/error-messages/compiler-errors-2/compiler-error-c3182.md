---
title: "Compiler Error C3182 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3182"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3182"]
ms.assetid: f3681266-308e-4990-a979-8eef8920e186
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3182
'class' : a member using-declaration or access declaration is illegal within a managed or WinRTtype  
  
 A [using](../../cpp/using-declaration.md) declaration is invalid within all forms of managed classes.  
  
 The following sample generates C3182 and shows how to fix it.  
  
```  
// C3182a.cpp  
// compile with: /clr /c  
ref struct B {  
   void mf(int) {  
   }  
};  
  
ref struct D : B {  
   using B::mf;   // C3182, delete to resolve  
   void mf(char) {  
   }  
};  
```  
