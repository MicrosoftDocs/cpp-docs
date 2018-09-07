---
title: "Compiler Error C2431 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2431"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2431"]
ms.assetid: 88a5b648-c89f-47d1-a20e-63231ab4f0f7
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2431
illegal index register in 'identifier'  
  
 The ESP register is scaled or used as both index and base register. The SIB encoding for the x86 processor does not allow either.  
  
 The following sample generates C2431:  
  
```  
// C2431.cpp  
// processor: x86  
int main() {  
   _asm mov ax, [ESI + 2*ESP]   // C2431  
   _asm mov ax, [esp + esp]   // C2431  
}  
```