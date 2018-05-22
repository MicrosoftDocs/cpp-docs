---
title: "Compiler Warning (level 4) C4127 | Microsoft Docs"
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
  - "C4127"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4127"
ms.assetid: f59ded9e-5227-45bd-ac43-2aa861581363
caps.latest.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 4) C4127
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 4) C4127](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4127).  
  
  
conditional expression is constant  
  
 The controlling expression of an `if` statement or `while` loop evaluates to a constant. Because of their common idiomatic usage, trivial constants such as 1 or `true` do not trigger the warning, unless they are the result of an operation in an expression. If the controlling expression of a `while` loop is a constant because the loop exits in the middle, consider replacing the `while` loop with a `for` loop. You can omit the initialization, termination test and loop increment of a `for` loop, which causes the loop to be infinite, just like `while(1)`, and you can exit the loop from the body of the `for` statement.  
  
 The following sample shows two ways C4127 is generated, and shows how to use a for loop to avoid the warning:  
  
```  
// C4127.cpp  
// compile with: /W4  
#include <stdio.h>  
int main() {  
   if (1 == 1) {}   // C4127  
   while (42) { break; }   // C4127  
  
   // OK  
   for ( ; ; ) {  
      printf("test\n");  
      break;  
   }  
}  
```

