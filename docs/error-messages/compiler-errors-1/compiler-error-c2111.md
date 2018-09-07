---
title: "Compiler Error C2111 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2111"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2111"]
ms.assetid: 38fd42ec-1480-4a44-aaca-ae4593ed5f50
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2111
'+' : pointer addition requires integral operand  
  
 An attempt was made to add a nonintegral value to a pointer using the plus ( `+` ) operator.  
  
 The following sample generates C2111:  
  
```  
// C2111.cpp  
int main() {  
   int *a = 0, *pa = 0, b = 0;  
   double d = 0.00;  
  
   a = pa + d;   // C2111  
   a = pa + b;   // OK  
}  
```