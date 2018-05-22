---
title: "Compiler Error C2503 | Microsoft Docs"
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
  - "C2503"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2503"
ms.assetid: da86cc89-fd04-400b-aa8d-a5ffaf7e3918
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2503
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2503](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2503).  
  
  
class' : base classes cannot contain zero-sized arrays  
  
 A base class or structure contains a zero-sized array. An array in a class must have at least one element.  
  
 The following sample generates C2503:  
  
```  
// C2503.cpp  
// compile with: /c  
class A {  
   public:  
   int array [];  
};  
  
class B : A {};    // C2503  
  
class C {  
public:  
   int array [10];  
};  
  
class D : C {};  
```

