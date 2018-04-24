---
title: "Compiler Warning (level 1) C4722 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C4722"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4722"
ms.assetid: d8660710-f67b-4f59-a5fd-59259475529e
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4722
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 1) C4722](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4722).  
  
  
function' : destructor never returns, potential memory leak  
  
 The flow of control terminates in a destructor. The thread or the entire program will terminate and allocated resources may not be released.  Furthermore, if a destructor will be called for stack unwinding during exception processing, the behavior of executable is undefined.  
  
 To resolve, remove the function call that causes the destructor to not return.  
  
## Example  
 The following sample generates C4722:  
  
```  
// C4722.cpp  
// compile with: /O1 /W1 /c  
#include <stdlib.h>  
class C {  
public:  
   C();  
   ~C() { exit(1); };   // C4722  
};  
  
extern void func (C*);  
  
void Test(){  
   C x;  
   func(&x);  
   // control will not leave Test because destructor will exit  
}  
```

