---
title: "Compiler Error C2232 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: ["C2232"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2232"]
ms.assetid: 76f302b7-30a7-4a81-9a39-b4edde33b54c
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2232
'->' : left operand has 'class-key' type, use '.'  
  
 The operand to the left of the `->` operator is not a pointer. Use the period (.) operator for a class, structure, or union.  
  
 The following sample generates C2232:  
  
```  
// C2232.c  
struct X {  
    int member;  
} x, *px;  
int main() {  
    x->member = 0;   // C2232, x is not a pointer  
  
    px->member = 0;  
    x.member = 0;  
}  
```