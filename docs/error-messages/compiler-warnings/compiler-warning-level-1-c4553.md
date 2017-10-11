---
title: "Compiler Warning (level 1) C4553 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: ["C4553"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4553"]
ms.assetid: d8aacbe0-3cb5-4367-a6e5-fd7e28f0ff9d
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4553
'operator' : operator has no effect; did you intend 'operator'?  
  
 If an expression statement has an operator with no side effect as the top of the expression, it's probably a mistake.  
  
 The following sample generates C4553:  
  
```  
// C4553.cpp  
// compile with: /W1  
int func()  
{  
   return 0;  
}  
  
int main()  
{  
   int i;  
   i == func();   // C4553  
   // try the following line instead  
   // i = func();  
}  
```