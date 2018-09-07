---
title: "Compiler Error C2333 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2333"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2333"]
ms.assetid: 2636fc1e-d3e7-4e68-8628-3c81a99ba813
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2333
'function' : error in function declaration; skipping function body  
  
 This error occurs after another error, for member functions defined inside their class.  
  
 The following sample generates C2333:  
  
```  
// C2333.cpp  
struct s1 {  
   s1(s1) {}   // C2333  
};  
```