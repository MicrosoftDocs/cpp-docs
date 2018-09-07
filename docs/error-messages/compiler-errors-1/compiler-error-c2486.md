---
title: "Compiler Error C2486 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2486"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2486"]
ms.assetid: 436da349-6461-4e32-bfca-4f3e620108e2
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2486
'__LOCAL_SIZE' only allowed in function with the 'naked' attribute  
  
 In inline assembly functions, the name `__LOCAL_SIZE` is reserved for functions declared with the [naked](../../cpp/naked-cpp.md) attribute.  
  
 The following sample generates C2486:  
  
```  
// C2486.cpp  
// processor: x86  
void __declspec(naked) f1() {  
   __asm {  
      mov   eax,   __LOCAL_SIZE  
   }  
}  
void f2() {  
   __asm {  
      mov   eax,   __LOCAL_SIZE   // C2486  
   }  
}  
```