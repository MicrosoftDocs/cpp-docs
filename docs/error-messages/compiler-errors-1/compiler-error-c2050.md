---
title: "Compiler Error C2050 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2050"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2050"]
ms.assetid: 66aaed7d-00db-4ce1-a9d6-4447c1cf07ce
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2050
switch expression not integral  
  
 The `switch` expression evaluates to a noninteger value. To resolve the error, use only integral values in switch statements.  
  
 The following sample generates C2050:  
  
```  
// C2050.cpp  
int main() {  
   int a = 1;  
   switch ("a") {   // C2050  
      case 1:  
         a = 0;  
      default:  
         a = 2;  
   }  
}  
```  
  
 Possible resolution:  
  
```  
// C2050b.cpp  
int main() {  
   int a = 1;  
   switch (a) {  
      case 1:  
         a = 0;  
      default:  
         a = 2;  
   }  
}  
```