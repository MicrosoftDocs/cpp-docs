---
title: "Compiler Warning (level 1) C4552 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4552"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4552"]
ms.assetid: ebbbb5ee-1c19-45bd-b386-41a19630fc76
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 1) C4552
'operator' : operator has no effect; expected operator with side-effect  
  
 If an expression statement has an operator with no side effect as the top of the expression, it's probably a mistake.  
  
 To override this warning, put the expression in parentheses.  
  
 The following sample generates C4552:  
  
```  
// C4552.cpp  
// compile with: /W1  
int main() {  
   int i, j;  
   i + j;   // C4552  
   // try the following line instead  
   // (i + j);  
}  
```