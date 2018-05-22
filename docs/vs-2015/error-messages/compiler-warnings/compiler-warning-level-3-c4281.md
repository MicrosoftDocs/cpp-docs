---
title: "Compiler Warning (level 3) C4281 | Microsoft Docs"
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
  - "C4281"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4281"
ms.assetid: a9771261-5725-4fc6-87b6-16cf92113a25
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 3) C4281
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 3) C4281](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4281).  
  
  
operator –>' recursion occurred through type 'type'  
  
 Your code allows **operator–>** to call itself.  
  
 The following sample generates C4281:  
  
```  
// C4281.cpp  
// compile with: /W3 /WX  
struct A;  
struct B;  
struct C;  
  
struct A  
{  
   int z;  
   B& operator->();  
};  
  
struct B  
{  
   C& operator->();  
};  
  
struct C  
{  
   A& operator->();  
};  
  
void f(A p)  
{  
   int i = p->z; // C4281  
}  
```

