---
title: "Compiler Error C2990 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2990"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2990"]
ms.assetid: 674e9f6a-6743-4af0-a7ed-cbe11103a2f8
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2990
'class' : non-class type as already been declared as a class type  
  
 The non generic or template class redefines a generic or template class. Check header files for conflicts.  
  
 The following sample generates C2990:  
  
```  
// C2990.cpp  
// compile with: /c  
template <class T>  
class C{};  
class C{};   // C2990  
```  
  
 C2990 can also occur when using generics:  
  
```  
// C2990b.cpp  
// compile with: /clr /c  
generic <class T>  
ref struct GC;  
  
ref struct GC {};   // C2990  
```  
  
 C2990 can also occur due to a breaking change in the Visual C++ compiler for Visual C++ 2005; the compiler now requires that multiple declarations for the same type be identical with respect to template specification.  
  
 The following sample generates C2990:  
  
```  
// C2990c.cpp  
// compile with: /c  
template<class T>  
class A;  
  
template<class T>  
struct A2 {  
   friend class A;   // C2990  
};  
  
// OK  
template<class T>  
struct B {  
   template<class T>  
   friend class A;  
};  
```