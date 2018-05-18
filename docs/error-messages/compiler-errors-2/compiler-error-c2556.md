---
title: "Compiler Error C2556 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2556"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2556"]
ms.assetid: fc4399ad-45b3-49fd-be1f-0b13956a595a
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2556
'identifier' : overloaded functions only differ by return type  
  
 The overloaded functions have different return types but the same parameter list. Each overloaded function must have a distinct formal parameter list.  
  
 The following sample generates C2556:  
  
```  
// C2556.cpp  
// compile with: /c  
class C {  
   int func();  
   double func();   // C2556  
   int func(int i);   // ok parameter lists differ  
};  
```