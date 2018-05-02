---
title: "Compiler Error C2046 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2046"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2046"]
ms.assetid: f0c8f9dd-dbd7-4c4a-8838-fde54208ec71
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2046
illegal case  
  
 The keyword `case` can appear only in a `switch` statement.  
  
 The following sample generates C2046:  
  
```  
// C2046.cpp  
int main() {  
   case 0:   // C2046  
}  
```  
  
 Possible resolution:  
  
```  
// C2046b.cpp  
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