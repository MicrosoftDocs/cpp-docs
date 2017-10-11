---
title: "Compiler Error C2353 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: ["C2353"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2353"]
ms.assetid: d57f8f77-d9b1-4bba-a940-87ec269ad183
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2353
exception specification is not allowed  
  
 Exception specifications are not allowed on member functions of managed classes.  
  
 The following sample generates C2353:  
  
```  
// C2353.cpp  
// compile with: /clr /c  
ref class X {  
   void f() throw(int);   // C2353  
   void f();   // OK  
};  
```