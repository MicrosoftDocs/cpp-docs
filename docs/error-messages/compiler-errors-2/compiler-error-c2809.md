---
title: "Compiler Error C2809 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2809"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2809"]
ms.assetid: ce796b8e-1a8c-4074-995d-1ad09afd0e93
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2809
'operator operator' has no formal parameters  
  
 The operator lacks required parameters.  
  
 The following sample generates C2809:  
  
```  
// C2809.cpp  
// compile with: /c  
class A{};  
int operator+ ();   // C2809  
int operator+ (A);   // OK  
```