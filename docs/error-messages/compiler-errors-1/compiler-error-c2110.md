---
title: "Compiler Error C2110 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2110"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2110"]
ms.assetid: 48fd76ed-90d6-4a60-9c7b-f6ce9355b4ca
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2110
'+' : cannot add two pointers  
  
 An attempt was made to add two pointer values using the plus ( `+` ) operator.  
  
 The following sample generates C2110:  
  
```  
// C2110.cpp  
int main() {  
   int a = 0;  
   int *pa;  
   int *pb;  
   a = pa + pb;   // C2110  
}  
```