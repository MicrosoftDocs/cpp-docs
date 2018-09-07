---
title: "Compiler Error C2317 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2317"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2317"]
ms.assetid: e44d129b-8d3e-4ce9-9d79-6791ee77f25e
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2317
'try' block starting on line 'number' has no catch handlers  
  
 A `try` block must have at least one catch handler.  
  
 The following sample generates C2317:  
  
```  
// C2317.cpp  
// compile with: /EHsc  
#include <eh.h>  
int main() {  
   try {  
      throw "throw an exception";  
   }  
   // C2317, no catch handler  
}  
```  
  
 Possible resolution:  
  
```  
// C2317b.cpp  
// compile with: /EHsc  
#include <eh.h>  
int main() {  
   try {  
      throw "throw an exception";  
   }  
   catch(char*) {}  
}  
```