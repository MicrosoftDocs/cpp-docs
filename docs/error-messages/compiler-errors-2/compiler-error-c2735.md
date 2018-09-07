---
title: "Compiler Error C2735 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2735"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2735"]
ms.assetid: 6ce45600-7148-4bc0-8699-af0ef137571e
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2735
'keyword' keyword is not permitted in formal parameter type specifier  
  
 The keyword is invalid in this context.  
  
 The following sample generates C2735:  
  
```  
// C2735.cpp  
void f(inline int){}   // C2735  
```