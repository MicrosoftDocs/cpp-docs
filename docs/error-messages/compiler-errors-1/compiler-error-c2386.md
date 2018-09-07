---
title: "Compiler Error C2386 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2386"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2386"]
ms.assetid: aaaa1284-34a0-4da2-8547-9fcbb559dae0
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2386
'symbol' : a symbol with this name already exists in the current scope  
  
 You tried to create a namespace alias, but the name you chose already exists.  
  
 The following sample generates C2386:  
  
```  
// C2386.cpp  
namespace A {  
   int k;  
}  
  
int i;  
namespace i = A;   // C2386, i already exists  
```