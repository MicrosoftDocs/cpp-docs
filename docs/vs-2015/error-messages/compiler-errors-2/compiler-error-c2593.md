---
title: "Compiler Error C2593 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2593"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2593"
ms.assetid: 4a0fe9bb-2163-447d-91f6-1890ed8250f6
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2593
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2593](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2593).  
  
  
operator identifier' is ambiguous  
  
 More than one possible operator is defined for an overloaded operator.  
  
 This error may be fixed if you use an explicit cast on one or more actual parameters.  
  
 The following sample generates C2593:  
  
```  
// C2593.cpp  
struct A {};  
struct B : A {};  
struct X {};  
struct D : B, X {};  
void operator+( X, X );  
void operator+( A, B );  
D d;  
  
int main() {  
   d +  d;         // C2593, D has an A, B, and X   
   (X)d + (X)d;    // OK, uses operator+( X, X )  
}  
```  
  
 This error can be caused by serializing a floating-point variable using a `CArchive` object. The compiler identifies the `<<` operator as ambiguous. The only primitive C++ types that `CArchive` can serialize are the fixed-size types `BYTE`, `WORD`, `DWORD`, and `LONG`. All integer types must be cast to one of these types for serialization. Floating-point types must be archived using the `CArchive::Write()` member function.  
  
 The following example shows how to archive a floating-point variable (`f`) to archive `ar`:  
  
```  
ar.Write(&f, sizeof( float ));  
```

