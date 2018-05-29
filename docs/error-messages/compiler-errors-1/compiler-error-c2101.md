---
title: "Compiler Error C2101 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2101"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2101"]
ms.assetid: 42f0136f-8cc1-4f2b-be1c-721ec9278e66
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2101
'&' on constant  
  
 The address-of operator ( `&` ) must have an l-value as operand.  
  
 The following sample generates C2101:  
  
```  
// C2101.cpp  
int main() {  
   char test;  
   test = &'a';   // C2101  
   test = 'a';   // OK  
}  
```