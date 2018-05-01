---
title: "Compiler Error C3200 | Microsoft Docs"
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
  - "C3200"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3200"
ms.assetid: 44bb5e77-f0ec-421c-a732-b9ee7c0a3529
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3200
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3200](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3200).  
  
  
template' : invalid template argument for template parameter 'parameter', expected a class template  
  
 You passed an invalid argument to a class template. The class template expects template as a parameter. In the following example, calling `Y<int, int> aY` will generate C3200. The first parameter needs to be a template, such as `Y<X, int> aY`.  
  
```  
// C3200.cpp  
template<typename T>  
class X  
{  
};  
  
template<template<typename U> class T1, typename T2>  
class Y  
{  
};  
  
int main()  
{  
   Y<int, int> y;   // C3200  
}  
```

