---
title: "Advantages of Inline Assembly | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "assembler [C++], advantages"
  - "inline assembly [C++], about inline assembly"
  - "inline assembly [C++], using"
ms.assetid: 94364d97-faa7-4bdf-8473-570956986c51
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Advantages of Inline Assembly
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Advantages of Inline Assembly](https://docs.microsoft.com/cpp/assembler/inline/advantages-of-inline-assembly).  
  
  
Microsoft Specific  
 Because the inline assembler doesn't require separate assembly and link steps, it is more convenient than a separate assembler. Inline assembly code can use any C variable or function name that is in scope, so it is easy to integrate it with your program's C code. Because the assembly code can be mixed inline with C or C++ statements, it can do tasks that are cumbersome or impossible in C or C++.  
  
 The uses of inline assembly include:  
  
-   Writing functions in assembly language.  
  
-   Spot-optimizing speed-critical sections of code.  
  
-   Making direct hardware access for device drivers.  
  
-   Writing prolog and epilog code for "naked" calls.  
  
 Inline assembly is a special-purpose tool. If you plan to port an application to different machines, you'll probably want to place machine-specific code in a separate module. Because the inline assembler doesn't support all of Microsoft Macro Assembler's (MASM) macro and data directives, you may find it more convenient to use MASM for such modules.  
  
 **END Microsoft Specific**  
  
## See Also  
 [Inline Assembler](../../assembler/inline/inline-assembler.md)

