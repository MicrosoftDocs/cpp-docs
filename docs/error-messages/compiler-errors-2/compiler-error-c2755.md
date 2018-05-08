---
title: "Compiler Error C2755 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2755"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2755"]
ms.assetid: 8ee4eeb6-4757-4efe-9100-38ff4a96f1de
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2755
'param' : non-type parameter of a partial specialization must be a simple identifier  
  
 The non-type parameter needs to be a simple identifier, something the compiler can resolve at compile time to a single identifier or a constant value.  
  
 The following sample generates C2755:  
  
```  
// C2755.cpp  
template<int I, int J>  
struct A {};  
  
template<int I>   
struct A<I,I*5> {};   // C2755  
// try the following line instead  
// struct A<I,5> {};  
```