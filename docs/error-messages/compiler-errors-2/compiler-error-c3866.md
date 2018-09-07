---
title: "Compiler Error C3866 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3866"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3866"]
ms.assetid: 685870af-2440-4cdf-a6cb-284a5b96ef9d
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3866
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