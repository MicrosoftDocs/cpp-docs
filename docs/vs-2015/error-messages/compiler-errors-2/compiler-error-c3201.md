---
title: "Compiler Error C3201 | Microsoft Docs"
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
  - "C3201"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3201"
ms.assetid: ec19cd64-1789-40a3-b2db-dff2852b9d98
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3201
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3201](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3201).  
  
  
the template parameter list for class template 'template' does not match the template parameter list for template parameter 'template'  
  
 You passed a class template in the argument to a class template that does not take a template parameter, or you passed a mismatched number of template arguments for the default template argument.  
  
```  
// C3201.cpp  
template<typename T1, typename T2>  
class X1  
{  
};  
  
template<template<typename T> class U = X1>   // C3201  
class X2  
{  
};  
  
template<template<typename T, typename V> class U = X1>   // OK  
class X3  
{  
};  
```

