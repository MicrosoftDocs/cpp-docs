---
title: "Compiler Error C2943 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2943"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2943"]
ms.assetid: ede6565e-d892-44c0-8eee-c69545f3be2e
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2943
'class' : type-class-id redefined as a type argument of a template  
  
 You cannot use a generic or template class, instead of a symbol, as a generic or template type argument.  
  
 The following sample generates C2943:  
  
```  
// C2943.cpp  
// compile with: /c  
template<class T>  
class List {};  
  
template<class List<int> > class MyList;   // C2943  
template<class T >  class MyList;  
```