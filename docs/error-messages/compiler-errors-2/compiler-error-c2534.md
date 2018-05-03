---
title: "Compiler Error C2534 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2534"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2534"]
ms.assetid: 481f9f54-5b51-4aa0-8eea-218f10807705
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2534
'identifier' : constructor cannot return a value  
  
 A constructor cannot return a value or have a return type (not even a `void` return type).  
  
 This error may be fixed by removing the `return` statement from the constructor definition.  
  
 The following sample generates C2534:  
  
```  
// C2534.cpp  
class A {  
public:  
   int i;  
   A() { return i; }   // C2534  
};  
```