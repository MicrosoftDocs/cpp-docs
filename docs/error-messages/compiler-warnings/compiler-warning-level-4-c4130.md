---
title: "Compiler Warning (level 4) C4130 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4130"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4130"]
ms.assetid: 45e4c7b2-6b51-41c7-ba5e-941aa5c7d3dc
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 4) C4130
'operator' : logical operation on address of string constant  
  
 Using the operator with the address of a string literal produces unexpected code.  
  
 The following sample generates C4130:  
  
```  
// C4130.cpp  
// compile with: /W4  
int main()  
{  
   char *pc;  
   pc = "Hello";  
   if (pc == "Hello") // C4130  
   {  
   }  
}  
```  
  
 The **if** statement compares the value stored in the pointer `pc` to the address of the string "Hello", which is allocated separately each time the string occurs in code. The **if** statement does not compare the string pointed to by `pc` with the string "Hello".  
  
 To compare strings, use the `strcmp` function.