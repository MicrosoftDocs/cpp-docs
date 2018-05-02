---
title: "Compiler Error C2691 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2691"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2691"]
ms.assetid: 6925f8f3-ea60-4909-91e6-b781492c645d
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2691
'data type' : a managed or WinRTarray cannot have this element type  
  
 The type of a managed or WinRT array element can be a value type or a reference type.  
  
 The following sample generates C2691:  
  
```  
// C2691a.cpp  
// compile with: /clr  
class A {};  
  
int main() {  
   array<A>^ a1 = gcnew array<A>(20);   // C2691  
   array<int>^ a2 = gcnew array<int>(20);   // value type OK  
}  
```  
