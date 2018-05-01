---
title: "Compiler Error C2502 | Microsoft Docs"
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
  - "C2502"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2502"
ms.assetid: affa0b86-15fc-4e17-b7f2-6aad4a3771c4
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2502
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2502](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2502).  
  
  
identifier' : too many access modifiers on the base class  
  
 The base class has more than one access modifier. Only one access modifier (`public`, `private`, or `protected`) is allowed.  
  
 The following sample generates C2502:  
  
```  
// C2502.cpp  
// compile with: /c  
class A { };  
class B { };  
class C : private public A { };   // C2502  
  
// OK  
class D : private A {};  
class E : public A, private B {};  
```

