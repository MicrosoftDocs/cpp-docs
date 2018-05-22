---
title: "Compiler Error C2193 | Microsoft Docs"
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
  - "C2193"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2193"
ms.assetid: 9813e853-d581-4f51-bb75-4e242298a844
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2193
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2193](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/compiler-error-c2193).  
  
  
identifier' : already in a segment  
  
 A function was placed in two different segments using `alloc_text` and `code_seg` pragmas.  
  
 The following sample generates C2193:  
  
```  
// C2193.cpp  
// compile with: /c  
extern "C" void MYFUNCTION();  
#pragma alloc_text(MYCODE, MYFUNCTION)  
#pragma code_seg("MYCODE2")  
extern "C" void MYFUNCTION() {}   // C2193  
extern "C" void MYFUNCTION2() {}  
```

