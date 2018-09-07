---
title: "Compiler Error C2944 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2944"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2944"]
ms.assetid: f209e668-e72f-442a-a438-8c4ff43a404a
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2944
'class' : type-class-id redefined as a value argument of a template  
  
 You cannot use a generic or template class, instead of a symbol, as a template value argument.  
  
 The following sample generates C2944:  
  
```  
// C2944.cpp  
// compile with: /c  
template<class T>  
class TC { };   
  
template <int TC<int> > struct X1 { };   // C2944  
  
template <class T > struct X2 {};  
```  
  
 C2944 can also occur when using generics:  
  
```  
// C2944b.cpp  
// compile with: /clr /c  
generic<class T>  
ref class GC {};  
  
template <int GC<int> > struct X2 { };   // C2944  
template <class T> struct X3 {};   // OK  
```