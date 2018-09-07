---
title: "Compiler Error C2995 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2995"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2995"]
ms.assetid: a57cdfe0-b40b-4a67-a95c-1a49ace4842b
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2995
'function' : function template has already been defined  
  
 Make sure that there is only one definition for each member function of a templated class.  
  
 The following sample generates C2995:  
  
```  
// C2995.cpp  
// compile with: /c  
template <class T>  
void Test(T x){}  
  
template <class T> void Test(T x){}   // C2995  
template <class T> void Test2(T x){}   // OK  
```