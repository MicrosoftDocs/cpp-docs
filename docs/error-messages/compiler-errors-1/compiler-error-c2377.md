---
title: "Compiler Error C2377 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2377"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2377"]
ms.assetid: f7660965-bf4c-4cd9-8307-1bd7016678a1
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2377
'identifier' : redefinition; typedef cannot be overloaded with any other symbol  
  
 A `typedef` identifier is redefined.  
  
 The following sample generates C2377:  
  
```  
// C2377.cpp  
// compile with: /c  
typedef int i;  
int i;   // C2377  
int j;   // OK  
```