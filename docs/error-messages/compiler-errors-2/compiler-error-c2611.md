---
title: "Compiler Error C2611 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2611"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2611"]
ms.assetid: 3f2d5253-f24f-4724-83d0-6b2aa6a4e551
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2611
'token' : illegal following '~' (expected identifier)  
  
 The token is not an identifier.  
  
 The following sample generates C2611:  
  
```  
// C2611.cpp  
// compile with: /c  
class C {  
   C::~operator int();   // C2611  
   ~C();   // OK  
};  
```