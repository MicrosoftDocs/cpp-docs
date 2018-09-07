---
title: "Compiler Error C2231 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2231"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2231"]
ms.assetid: 677c5c66-d30f-4c3b-bbb9-760858d56477
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2231
'.' : left operand points to 'class-key', use '->'  
  
 The operand to the left of the member-selection operation (.) is a pointer instead of a class, structure, or union.  
  
 The following sample generates C2231:  
  
```  
// C2231.c  
struct S {  
   int member;  
} s, *ps = &s;  
int main() {  
   ps.member = 0;   // C2231  
  
   // OK  
   ps->member = 0;   // crash  
   s.member = 0;  
}  
```