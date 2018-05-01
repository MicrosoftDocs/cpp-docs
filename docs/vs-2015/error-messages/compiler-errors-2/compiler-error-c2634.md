---
title: "Compiler Error C2634 | Microsoft Docs"
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
  - "C2634"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2634"
ms.assetid: 58c8f2db-ac95-4a81-9355-ef3cfb0ba7b3
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2634
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2634](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2634).  
  
  
class::member' : pointer to reference member is illegal  
  
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

