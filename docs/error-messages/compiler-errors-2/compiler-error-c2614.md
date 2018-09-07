---
title: "Compiler Error C2614 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2614"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2614"]
ms.assetid: a550c1d5-8718-4e17-a888-b2619e00fe11
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2614
'class1' : illegal member initialization: 'class2' is not a base or member  
  
 Only member or base classes can appear in the initialization list for a class or structure.  
  
## Example  
 The following sample generates C2614.  
  
```  
// C2614.cpp  
// compile with: /c  
struct A {  
   int i;  
   A( int ia ) : B( i ) {};   // C2614 B is not a member of A  
};  
  
struct A2 {  
   int B;  
   int i;  
   A2( int ia ) : B( i ) {};   // OK  
};  
```