---
title: "Compiler Error C2161 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2161"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2161"]
ms.assetid: d6798821-13bb-4e60-924f-85f7bf955387
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2161
'##' cannot occur at the end of a macro definition  
  
 A macro definition ended with a token-pasting operator (##).  
  
 The following sample generates C2161:  
  
```  
// C2161.cpp  
// compile with: /c  
#define mac(a,b) a   // OK  
#define mac(a,b) a##   // C2161  
```