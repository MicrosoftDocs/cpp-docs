---
title: "Compiler Error C2160 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2160"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2160"]
ms.assetid: a1f694a7-fb16-4437-b7f5-a1af6da94bc5
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2160
'##' cannot occur at the beginning of a macro definition  
  
 A macro definition began with a token-pasting operator (##).  
  
 The following sample generates C2160:  
  
```  
// C2160.cpp  
// compile with: /c  
#define mac(a,b) #a   // OK  
#define mac(a,b) ##a   // C2160  
```