---
title: "Compiler Error C2100 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2100"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2100"]
ms.assetid: 9ed5ea11-9d55-4ddf-8b1a-162c74f3c390
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2100
illegal indirection  
  
 Indirection operator ( `*` ) is applied to a nonpointer value.  
  
 The following sample generates C2100:  
  
```  
// C2100.cpp  
int main() {  
   int r = 0, *s = 0;  
   s = &r;  
   *r = 200;   // C2100  
   *s = 200;   // OK  
}  
```