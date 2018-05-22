---
title: "Compiler Warning (level 3) C4280 | Microsoft Docs"
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
  - "C4280"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4280"
ms.assetid: 153fb639-3ee1-4fee-baf9-71420abcf3f6
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 3) C4280
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 3) C4280](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4280).  
  
  
operator –>' was self recursive through type 'type'  
  
 Your code incorrectly allows **operator–>** to call itself.  
  
 The following sample generates C4280:  
  
```  
// C4280.cpp  
// compile with: /W3 /WX  
struct A  
{  
   int z;  
   A& operator ->();  
};  
  
void f(A y)  
{  
   int i = y->z; // C4280  
}  
```

