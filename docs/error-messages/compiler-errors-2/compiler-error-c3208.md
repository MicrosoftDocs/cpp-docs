---
title: "Compiler Error C3208 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3208"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3208"]
ms.assetid: 6d060bfe-52cf-4599-8f70-bdeb5a670df3
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3208
'function' : template parameter list for class template 'class' does not match template parameter list for template template parameter 'parameter'  
  
 A template template parameter does not have the same number of template parameters as the provided class template.  
  
 The following sample generates C3208:  
  
```  
// C3208.cpp  
template <template <class T> class TT >  
int f();  
  
template <class T1, class T2>  
struct S;  
  
template <class T1>  
struct R;  
  
int i = f<S>();   // C3208  
// try the following line instead  
// int i = f<R>();  
```