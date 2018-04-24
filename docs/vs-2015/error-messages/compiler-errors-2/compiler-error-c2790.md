---
title: "Compiler Error C2790 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2790"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2790"
ms.assetid: 38d4fce1-ba00-413d-8bc1-e8aa43d7bc1f
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2790
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2790](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2790).  
  
  
super' : this keyword can only be used within the body of class member function  
  
 This error message appears if the user ever tries to uses the keyword [super](../../cpp/super.md) outside of the context of a member function.  
  
 The following sample generates C2790:  
  
```  
// C2790.cpp  
void f() {  
   __super::g();   // C2790  
}  
```

