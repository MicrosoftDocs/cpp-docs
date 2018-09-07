---
title: "Compiler Error C2438 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2438"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2438"]
ms.assetid: 3a0ab3ba-d0e4-4d8f-971d-e503397cc827
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2438
'identifier' : cannot initialize static class data via constructor  
  
 A constructor is used to initialize a static member of a class. Static members must be initialized in a definition outside the class declaration.  
  
 The following sample generates C2438:  
  
```  
// C2438.cpp  
struct X {  
   X(int i) : j(i) {}   // C2438  
   static int j;  
};  
  
int X::j;  
  
int main() {  
   X::j = 1;  
}  
```