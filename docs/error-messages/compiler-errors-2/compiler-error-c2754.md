---
title: "Compiler Error C2754 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2754"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2754"]
ms.assetid: 1cab66c5-da9d-4b81-b7fb-9cdc48ff1ccc
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2754
'specialization' : a partial specialization cannot have a dependent non-type template parameter  
  
 An attempt was made to partially specialize a template class that has a dependent non-type template parameter. This is not allowed.  
  
 The following sample generates C2754:  
  
```  
// C2754.cpp  
// compile with: /c  
  
template<class T, T t>  
struct A {};  
  
template<class T, int N>  
struct B {};  
  
template<class T> struct A<T,5> {};   // C2754  
template<> struct A<int,5> {};   // OK  
template<class T> struct B<T,5> {};   // OK  
```