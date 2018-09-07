---
title: "Compiler Error C2733 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2733"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2733"]
ms.assetid: 67f83561-c633-407c-a2ee-f9fd16e165bf
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2733
second C linkage of overloaded function 'function' not allowed  
  
 More than one overloaded function is declared with C linkage. When using C linkage, only one form of a specified function can be external. Since overloaded functions have the same undecorated name, they cannot be used with C programs.  
  
 The following sample generates C2733:  
  
```  
// C2733.cpp  
extern "C" {  
   void F1(int);  
}  
  
extern "C" {  
   void F1();   // C2733  
   // try the following line instead  
   // void F2();  
}  
```