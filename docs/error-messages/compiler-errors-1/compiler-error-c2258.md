---
title: "Compiler Error C2258 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2258"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2258"]
ms.assetid: 105eaa87-befb-4ecb-9a3f-e09e14d2f5bf
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2258
illegal pure syntax, must be '= 0'  
  
 A pure virtual function is declared with incorrect syntax.  
  
 The following sample generates C2258:  
  
```  
// C2258.cpp  
// compile with: /c  
class A {  
public:  
   void virtual func1() = 1; // C2258  
   void virtual func2() = 0;   // OK  
};  
```