---
title: "Compiler Error C2477 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2477"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2477"]
ms.assetid: 60bc324b-6605-4833-8099-a291efc712e7
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2477
'member' : static data member cannot be initialized via derived class  
  
 A static data member of a template class was initialized incorrectly. This is a breaking change with versions of the Visual C++ compiler prior to Visual Studio .NET 2003, in order to conform to the ISO C++ standard.  
  
 The following sample generates C2477:  
  
```  
// C2477.cpp  
// compile with: /Za /c  
template <class T>  
struct S {  
   static int n;  
};  
  
struct X {};  
struct A: S<X> {};  
  
int A::n = 0;   // C2477  
  
template<>  
int S<X>::n = 0;  
```