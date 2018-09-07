---
title: "Compiler Warning (level 1) C4405 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4405"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4405"]
ms.assetid: 155c64d6-58ae-4455-b61f-ccd711c5da96
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 1) C4405
'identifier' : identifier is reserved word  
  
 A word reserved for inline assembly is used as a variable name. This may cause unpredictable results. To fix this warning, avoid naming variables with words reserved for inline assembly. The following sample generates C4405:  
  
```  
// C4405.cpp  
// compile with: /W1  
// processor: x86  
void func1() {  
   int mov = 0, i = 0;  
   _asm {  
      mov mov, 0;   // C4405  
      // instead, try ..  
      // mov i, 0;  
   }  
}  
  
int main() {  
}  
```