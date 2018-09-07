---
title: "Compiler Error C2436 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2436"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2436"]
ms.assetid: ca4cc813-bc1d-4c0a-9a2c-3a5fe673d084
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2436
'identifier' : member function or nested class in constructor initializer list  
  
 Member functions or local classes in the constructor initializer list cannot be initialized.  
  
 The following sample generates C2436:  
  
```  
// C2436.cpp  
struct S{  
   int f();  
   struct Inner{  
      int i;  
   };  
   S():f(10), Inner(0){}   // C2436  
};  
```