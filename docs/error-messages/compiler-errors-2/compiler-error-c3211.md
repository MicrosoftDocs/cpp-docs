---
title: "Compiler Error C3211 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3211"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3211"]
ms.assetid: 85e33fed-3b59-4315-97e6-20d31c6a985a
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3211
'explicit specialization' : explicit specialization is using partial specialization syntax, use template <> instead  
  
 An explicit specialization was ill formed.  
  
 The following sample generates C3211:  
  
```  
// C3211.cpp  
// compile with: /LD  
template<class T>  
struct s;  
  
template<class T>  
// use the following line instead  
// template<>  
struct s<int>{};   // C3211  
```