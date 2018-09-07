---
title: "Compiler Error C2334 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2334"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2334"]
ms.assetid: 36142855-e00b-4bbf-80f5-a301edeff46e
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2334
unexpected token(s) preceding ': or {'; skipping apparent function body  
  
 The following sample generates C2334. This error occurs after error C2059:  
  
```  
// C2334.cpp  
// compile with: /c  
// C2059 expected  
struct s1 {  
   s1   {}   // C2334  
   s1() {}   // OK  
};  
```