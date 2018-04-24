---
title: "Compiler Error C2603 | Microsoft Docs"
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
  - "C2603"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2603"
ms.assetid: 9ca520d0-f082-4b65-933d-17c3bcf8b02c
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2603
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2603](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2603).  
  
  
function' : Too many block scope static objects with constructor/destructors in function  
  
 There is a limit of 31 on the number of static objects you can have in an externally visible inline function.  
  
 The following code generates C2603:  
  
```  
// C2603.cpp  
struct C { C() {} };  
extern inline void f1() {  
   static C C1,C2,C3,C4,C5,C6,C7,C8,C9,C10,C11,C12,C14,C15,C16;  
   static C C17,C18,C19,C20,C21,C22,C23,C24,C25,C26,C27,C28,C29,C30,C31,C32;  
   static C C33;   // C2603 Comment this line out to avoid error  
}  
```

