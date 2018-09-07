---
title: "Compiler Error C2790 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2790"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2790"]
ms.assetid: 38d4fce1-ba00-413d-8bc1-e8aa43d7bc1f
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2790
'super' : this keyword can only be used within the body of class member function  
  
 This error message appears if the user ever tries to uses the keyword [super](../../cpp/super.md) outside of the context of a member function.  
  
 The following sample generates C2790:  
  
```  
// C2790.cpp  
void f() {  
   __super::g();   // C2790  
}  
```