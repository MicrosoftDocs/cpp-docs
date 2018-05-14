---
title: "Compiler Error C2640 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2640"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2640"]
ms.assetid: e4d137ab-ed1d-457c-9eec-b70d97f1b0b4
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2640
'identifier' : __based modifier illegal on reference  
  
 The `__based` modifier can be used on pointers only.  
  
 The following sample generates C2640:  
  
```  
// C2640.cpp  
void f(int i) {  
    void *vp;  
    int _based(vp) &vr = I;  // C2640  
}  
```