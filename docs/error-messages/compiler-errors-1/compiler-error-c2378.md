---
title: "Compiler Error C2378 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2378"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2378"]
ms.assetid: 507a91c6-ca72-48df-b3a4-2cf931c86806
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2378
'identifier' : redefinition; symbol cannot be overloaded with a typedef  
  
 The identifier was redefined as a `typedef`.  
  
 The following sample generates C2378:  
  
```  
// C2378.cpp  
// compile with: /c  
int i;  
typedef int i;   // C2378  
typedef int b;   // OK  
```