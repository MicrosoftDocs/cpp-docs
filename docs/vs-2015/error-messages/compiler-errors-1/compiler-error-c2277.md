---
title: "Compiler Error C2277 | Microsoft Docs"
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
  - "C2277"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2277"
ms.assetid: 15a83b07-8731-4524-810b-267f65a7844f
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2277
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2277](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/compiler-error-c2277).  
  
  
identifier' : cannot take address of this member function  
  
 You cannot take the address of a member function.  
  
 The following sample generates C2277:  
  
```  
// C2277.cpp  
class A {  
public:  
   A();  
};  
(*pctor)() = &A::A;   // C2277   
```

