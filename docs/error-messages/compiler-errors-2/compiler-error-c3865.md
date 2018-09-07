---
title: "Compiler Error C3865 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3865"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3865"]
ms.assetid: 9bc62bb0-4fb8-4856-a5cf-c7cb4029a596
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3865
'calling_convention' : can only be used on native member functions  
  
 A calling convention was used on a function that was either a global function or on a managed member function. The calling convention can only be used on a native (not managed) member function.  
  
 For more information, see [Calling Conventions](../../cpp/calling-conventions.md).  
  
 The following sample generates C3865:  
  
```  
// C3865.cpp  
// compile with: /clr  
// processor: x86  
void __thiscall Func(){}   // C3865  
  
// OK  
struct MyType {  
   void __thiscall Func(){}  
};  
```