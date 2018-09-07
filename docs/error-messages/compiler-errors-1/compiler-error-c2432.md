---
title: "Compiler Error C2432 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2432"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2432"]
ms.assetid: 0e3326e8-cab1-45a5-b48d-61edd33793e8
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2432
illegal reference to 16-bit data in 'identifier'  
  
 A 16-bit register is used as an index or base register. The compiler does not support referencing 16-bit data. 16-bit registers cannot be used as index or base registers when compiling for 32-bit code.  
  
 The following sample generates C2432:  
  
```  
// C2432.cpp  
// processor: x86  
int main() {  
   _asm mov eax, DWORD PTR [bx]   // C2432  
}  
```