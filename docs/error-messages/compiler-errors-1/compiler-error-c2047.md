---
title: "Compiler Error C2047 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2047"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2047"]
ms.assetid: 686a5a81-3857-4753-84a0-5c2e7149cbee
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2047
illegal default  
  
 The keyword `default` can appear only in a `switch` statement.  
  
 The following sample generates C2047:  
  
```  
// C2047.cpp  
int main() {  
   int i = 0;  
   default:   // C2047  
   switch(i) {  
      case 0:  
      break;  
   }  
}  
```  
  
 Possible resolution:  
  
```  
// C2047b.cpp  
int main() {  
   int i = 0;  
   switch(i) {  
      case 0:  
      break;  
      default:  
      break;  
   }  
}  
```