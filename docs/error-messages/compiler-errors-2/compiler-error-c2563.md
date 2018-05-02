---
title: "Compiler Error C2563 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2563"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2563"]
ms.assetid: 54abba68-6458-4ca5-894d-3babdb7b3552
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2563
mismatch in formal parameter list  
  
 The formal parameter list of a function (or a pointer to a function) does not match those of another function (or pointer to a member function). As a result, the assignment of functions or pointers cannot be made.  
  
 The following sample generates C2563:  
  
```  
// C2563.cpp  
void func( int );  
void func( int, int );  
int main() {  
   void *fp();  
   fp = func;   // C2563  
}  
```