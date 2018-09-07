---
title: "Compiler Error C2648 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2648"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2648"]
ms.assetid: ce338337-9154-4f85-bb61-b05fdbfad75d
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2648
'identifier' : use of member as default parameter requires static member  
  
 A non-static member is used as a default parameter.  
  
 The following sample generates C2648:  
  
```  
// C2648.cpp  
// compile with: /c  
class C {  
public:  
   int i;  
   static int j;  
   void func1( int i = i );  // C2648  i is not static  
   void func2( int i = j );  // OK  
};  
```