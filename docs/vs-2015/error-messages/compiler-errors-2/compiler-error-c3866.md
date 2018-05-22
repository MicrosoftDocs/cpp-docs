---
title: "Compiler Error C3866 | Microsoft Docs"
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
  - "C3866"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3866"
ms.assetid: 685870af-2440-4cdf-a6cb-284a5b96ef9d
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3866
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3866](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3866).  
  
  
function call missing argument list  
  
 Inside a nonstatic member function, a destructor or finalizer call did not have an argument list.  
  
 The following sample generates C3866:  
  
```  
// C3866.cpp  
// compile with: /c  
class C {  
   ~C();  
   void f() {  
      this->~C;   // C3866  
      this->~C();   // OK  
   }  
};  
```

