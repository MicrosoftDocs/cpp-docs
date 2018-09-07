---
title: "Compiler Error C2479 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2479"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2479"]
ms.assetid: c74c7869-e65b-4ca1-b6fa-eb39fed4458a
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2479
'identifier' : 'allocate( )' is only valid for data items of static extent  
  
 The `__declspec( allocate())` syntax can be used for static data only.  
  
 The following sample generates C2479:  
  
```  
// C2479.cpp  
// compile with: /c  
#pragma section("mycode", read)  
static __declspec(allocate("mycode")) void DoNothing() {}   // C2479  
__declspec(allocate("mycode"))  int i = 0;   // OK  
```