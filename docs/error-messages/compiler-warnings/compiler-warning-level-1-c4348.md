---
title: "Compiler Warning (level 1) C4348 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4348"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4348"]
ms.assetid: 816010eb-6079-48d5-a41b-0fc4d67cfe4c
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 1) C4348
'type' : redefinition of default parameter : parameter number  
  
 A template parameter was redefined.  
  
 The following sample generates C4348:  
  
```  
// C4348.cpp  
// compile with: /LD /W1  
template <class T=int> struct A;   // forward declaration  
  
template <class T=int> struct A { };   
// C4348, redefinition of default parameter  
// try the following line instead  
// template <class T> struct A { };  
```