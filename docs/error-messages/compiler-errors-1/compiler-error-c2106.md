---
title: "Compiler Error C2106 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2106"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2106"]
ms.assetid: d5c91a2e-04e4-4770-8478-788b98c52a53
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2106
'operator' : left operand must be l-value  
  
 The operator must have an l-value as its left operand.  
  
 The following sample generates C2106:  
  
```  
// C2106.cpp  
int main() {  
   int a;  
   1 = a;   // C2106  
   a = 1;   // OK  
}  
```