---
title: "Compiler Warning (level 1) C4558 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4558"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4558"]
ms.assetid: 52bb0324-7bec-468c-b35b-13a08d38e578
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 1) C4558
value of operand 'value' is out of range 'lowerbound - upperbound'  
  
 The value passed to an assembly language instruction is out of the range specified for the parameter. The value will be truncated.  
  
 The following sample generates C4558:  
  
```  
// C4558.cpp  
// compile with: /W1  
// processor: x86  
void asm_test() {  
   __asm pinsrw   mm1, eax, 8;   // C4558  
}  
  
int main() {  
}  
```