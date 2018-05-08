---
title: "Compiler Error C2369 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2369"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2369"]
ms.assetid: 2a3933f6-2313-40ff-800f-921b296fdbbf
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2369
'array' : redefinition; different subscripts  
  
 The array is already declared with a different subscript.  
  
 The following sample generates C2369:  
  
```  
// C2369.cpp  
// compile with: /c  
int a[10];  
int a[20];   // C2369  
int b[20];   // OK  
```