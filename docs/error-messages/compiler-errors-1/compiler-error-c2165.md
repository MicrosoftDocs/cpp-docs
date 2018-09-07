---
title: "Compiler Error C2165 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2165"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2165"]
ms.assetid: b108313b-b8cb-4dce-b2ec-f2b31c9cdc87
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2165
'keyword' : cannot modify pointers to data  
  
 The `__stdcall`, `__cdecl`, or `__fastcall` keyword attempts to modify a pointer to data.  
  
 The following sample generates C2165:  
  
```  
// C2165.cpp  
// compile with: /c  
char __cdecl *p;   // C2165  
char *p;   // OK  
```