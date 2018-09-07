---
title: "Compiler Error C2319 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2319"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2319"]
ms.assetid: 25263e6e-f5ba-4d2c-8727-8c2d8ca2e5ce
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2319
'try/catch' must be followed by a compound statement. Missing '{'  
  
 A `try` or `catch` block is not found following the `try` or `catch` statement. The block must be enclosed in curly braces.  
  
 The following sample generates C2319:  
  
```  
// C2319.cpp  
// compile with: /EHsc  
#include <eh.h>  
class C {};  
int main() {  
   try {  
      throw "ooops!";  
   }  
   catch( C ) ;    // C2319  
   // try the following line instead  
   // catch( C ) {}  
}  
```