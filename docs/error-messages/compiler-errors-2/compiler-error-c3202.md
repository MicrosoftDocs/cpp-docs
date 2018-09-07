---
title: "Compiler Error C3202 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3202"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3202"]
ms.assetid: 23528a0c-5493-4804-9789-cd3c38e49fb9
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3202
'arg name' : invalid default argument for template parameter 'parameter', expected a class template  
  
 You passed an invalid default argument for a template parameter.  
  
 The following sample generates C3202:  
  
```  
// C3202.cpp  
template<typename T>  
class X  
{  
};  
  
class Z  
{  
};  
  
template<template<typename U> class T1 = Z, typename T2> // C3202  
class Y  
{  
};  
```