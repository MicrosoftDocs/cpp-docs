---
title: "Compiler Error C3230 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3230"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3230"]
ms.assetid: 5ec53f25-59f6-4801-81e7-7b68bf04994d
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3230
'function' : template type argument for 'template' cannot contain a generic type parameter: 'param'  
  
 Templates are instantiated at compile time, but generics are instantiated at run time. Therefore, it is not possible to generate generic code that can call the template because the template cannot be instantiated at run time when the generic type is finally known.  
  
 The following sample generates C3230:  
  
```  
// C3230.cpp  
// compile with: /clr /LD  
template <class S>   
void f(S t);  
  
generic <class U>  
ref class C {  
   void f1(U x) {  
      f(x);   // C3230  
   }  
};  
```