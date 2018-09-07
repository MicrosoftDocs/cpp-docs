---
title: "Compiler Error C2391 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2391"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2391"]
ms.assetid: 63a9c6b9-03cc-4517-885c-bdcd048643b3
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2391
'identifier' : 'friend' cannot be used during type definition  
  
 The `friend` declaration includes a complete class declaration. A `friend` declaration can specify a member function or an elaborated type specifier, but not a complete class declaration.  
  
 The following sample generates C2326:  
  
```  
// C2391.cpp  
// compile with: /c  
class D {   
   void func( int );   
};  
  
class A {  
   friend class B { int i; };   // C2391  
  
   // OK  
   friend class C;  
   friend void D::func(int);  
};  
```