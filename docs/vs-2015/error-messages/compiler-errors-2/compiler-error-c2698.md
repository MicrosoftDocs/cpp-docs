---
title: "Compiler Error C2698 | Microsoft Docs"
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
  - "C2698"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2698"
ms.assetid: 3ebfe395-c20b-4c56-9980-ca9ed8653382
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2698
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2698](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2698).  
  
  
the using-declaration for 'declaration 1' cannot co-exist with the existing using-declaration for 'declaration 2'  
  
 Once you have a [using declaration](../../cpp/using-declaration.md) for a data member, any using declaration in the same scope that uses the same name is not permitted, as only functions can be overloaded.  
  
 The following sample generates C2698:  
  
```  
// C2698.cpp  
struct A {  
   int x;  
};  
  
struct B {  
   int x;  
};  
  
struct C : A, B {  
   using A::x;  
   using B::x;   // C2698  
}  
```

