---
title: "Compiler Error C2669 | Microsoft Docs"
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
  - "C2669"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2669"
ms.assetid: f9cb8111-bcdc-484b-a863-2c42e15a0496
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2669
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2669](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2669).  
  
  
member function not allowed in anonymous union  
  
 Anonymous unions cannot have member functions.  
  
 The following sample generates C2669:  
  
```  
// C2669.cpp  
struct X {  
   union {  
      int i;  
      void f() {   // C2669, remove function  
         i = 0;   
      }  
   };  
};  
```  
  
## See Also  
 [Anonymous Unions](../../misc/anonymous-unions.md)

