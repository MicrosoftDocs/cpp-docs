---
title: "Compiler Warning (level 1) C4537 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4537"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4537"]
ms.assetid: 9454493c-d419-475e-8f35-9c00233c9329
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 1) C4537
'object' : 'operator' applied to non-UDT type  
  
 A reference was passed where an object (user-defined type) was expected. A reference is not an object, but inline assembler code is not able to make the distinction. The compiler generates code as though ***object*** were an instance.  
  
 The following sample generates C4537:  
  
```  
// C4537.cpp  
// compile with: /W1 /c  
// processor: x86  
struct S {  
   int member;  
};  
  
void f1(S &s) {  
   __asm mov eax, s.member;   // C4537  
   // try the following code instead  
   // or, make the declaration "void f1(S s)"  
   /*  
   mov eax, s  
   mov eax, [eax]s.member  
   */  
}  
```