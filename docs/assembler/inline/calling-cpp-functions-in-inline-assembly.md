---
title: "Calling C++ Functions in Inline Assembly | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["functions [C++], calling in inline assembly", "function calls, C++ functions", "function calls, in inline assembly", "Visual C++, functions", "inline assembly, calling functions", "__asm keyword [C++], calling functions"]
ms.assetid: 1f0d1eb3-54cf-45d5-838d-958188616b38
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Calling C++ Functions in Inline Assembly
## Microsoft Specific  
 An `__asm` block can call only global C++ functions that are not overloaded. If you call an overloaded global C++ function or a C++ member function, the compiler issues an error.  
  
 You can also call any functions declared with **extern "C"** linkage. This allows an `__asm` block within a C++ program to call the C library functions, because all the standard header files declare the library functions to have **extern "C"** linkage.  
  
 **END Microsoft Specific**  
  
## See Also  
 [Inline Assembler](../../assembler/inline/inline-assembler.md)