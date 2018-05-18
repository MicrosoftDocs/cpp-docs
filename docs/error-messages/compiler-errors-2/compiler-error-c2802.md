---
title: "Compiler Error C2802 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2802"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2802"]
ms.assetid: 08b68c0e-9382-40ac-8949-39a7a2749e05
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2802
static member 'operator operator' has no formal parameters  
  
 An operator declared by a `static` member function must have at least one parameter.  
  
 The following sample generates C2802:  
  
```  
// C2802.cpp  
// compile with: /clr /c  
ref class A {  
   static operator+ ();   // C2802  
   static operator+ (A^, A^);   // OK  
};  
```