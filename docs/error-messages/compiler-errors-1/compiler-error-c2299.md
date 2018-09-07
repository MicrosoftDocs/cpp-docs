---
title: "Compiler Error C2299 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2299"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2299"]
ms.assetid: d001c2bc-f6fd-47aa-8e42-0eb824d6441d
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2299
'function' : behavior change: an explicit specialization can not be a copy constructor or copy assignment operator  
  
 This error can also be generated as a result of compiler conformance work that was done for Visual C++ 2005: previous versions of Visual C++ allowed explicit specializations for a copy constructor or a copy assignment operator.  
  
 To resolve C2299, do not make the copy constructor or assignment operator a template function, but rather a non-template function that takes a class type. Any code that calls the copy constructor or assignment operator by explicitly specifying the template arguments needs to remove the template arguments.  
  
 The following sample generates C2299:  
  
```  
// C2299.cpp  
// compile with: /c  
class C {  
   template <class T>  
   C (T t);  
  
   template <> C (const C&);   // C2299  
   C (const C&);   // OK  
};  
```