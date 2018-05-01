---
title: "Compiler Warning (level 1) C4537 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4537"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4537"
ms.assetid: 9454493c-d419-475e-8f35-9c00233c9329
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4537
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 1) C4537](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4537).  
  
  
object' : 'operator' applied to non-UDT type  
  
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

