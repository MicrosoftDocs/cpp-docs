---
title: "Compiler Error C2877 | Microsoft Docs"
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
  - "C2877"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2877"
ms.assetid: 0b54837e-fcae-4d90-9658-623250435e24
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2877
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2877](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2877).  
  
  
symbol' is not accessible from 'class'  
  
 All members derived from a base class must be accessible in the derived class.  
  
 The following sample generates C2877:  
  
```  
// C2877.cpp  
// compile with: /c  
class A {  
private:  
   int a;  
};  
  
class B : public A {  
   using A::a;   // C2877  
};  
```

