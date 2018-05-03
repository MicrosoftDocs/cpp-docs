---
title: "Compiler Error C2630 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2630"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2630"]
ms.assetid: 7a655a9c-bab4-495b-97a3-a3f34cf5369a
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2630
'symbol' found in what should be a comma-separated list  
  
 The symbol appears in a context that requires a comma.  
  
 The following sample generates C2630:  
  
```  
// C2630.cpp  
// compile with: /c  
struct D {  
   D(int);  
};  
  
struct E {  
   E(int);  
};  
  
class C : public D, public E {  
   C();  
};  
  
C::C() : D(0) ; E(0) { }   // C2630  
C::C() : D(0), E(0) {}   // OK  
```