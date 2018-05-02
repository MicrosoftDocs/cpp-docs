---
title: "Compiler Error C2311 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2311"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2311"]
ms.assetid: 1aff9bd5-ed0b-4db6-bbc0-01ac89850cf2
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2311
'exception' : is caught by '...' on line number  
  
 The catch handler for the ellipsis (...) must be the last handler for a throw.  
  
 The following sample generates C2311:  
  
```  
// C2311.cpp  
// compile with: /EHsc  
#include <eh.h>  
int main() {  
   try {  
      throw "ooops!";  
   }  
   catch( ... ) {}  
   catch( int ) {}   // C2311  ellipsis handler not last catch  
}  
```