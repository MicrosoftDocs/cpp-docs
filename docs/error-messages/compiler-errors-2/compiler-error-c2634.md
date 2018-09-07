---
title: "Compiler Error C2634 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2634"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2634"]
ms.assetid: 58c8f2db-ac95-4a81-9355-ef3cfb0ba7b3
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2634
'&class::member' : pointer to reference member is illegal  
  
 A pointer to a reference member is declared.  
  
 The following sample generates C2634:  
  
```  
// C2634.cpp  
int mem;  
struct S {  
   S() : rf(mem) { }  
   int &rf;  
};  
int (S::*pdm) = &S::rf;   // C2634  
```