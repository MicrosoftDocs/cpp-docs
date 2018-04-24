---
title: "Expression Evaluator Error CXX0064 | Microsoft Docs"
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
  - "CXX0064"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CAN0064"
  - "CXX0064"
ms.assetid: aa509e71-0616-41ca-a94e-6c376b041e57
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Expression Evaluator Error CXX0064
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Expression Evaluator Error CXX0064](https://docs.microsoft.com/cpp/error-messages/tool-errors/expression-evaluator-error-cxx0064).  
  
  
can't set breakpoint on bound virtual member function  
  
 A breakpoint was set on a virtual member function through a pointer to an object, such as:  
  
```  
pClass->vfunc( int );  
```  
  
 A breakpoint can be set on a virtual function by entering the class, such as:  
  
```  
Class::vfunc( int );  
```  
  
 This error is identical to CAN0064.

