---
title: "Inline Assembler"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "assembler [C++]"
  - "assembler [C++], inline"
  - "assembly language [C++], inline"
  - "inline assembler [C++]"
  - "inline assembly [C++]"
ms.assetid: 7e13f18f-3628-4306-8b81-4a6d09c043fe
caps.latest.revision: 11
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Inline Assembler
**Microsoft Specific**  
  
 Assembly language serves many purposes, such as improving program speed, reducing memory needs, and controlling hardware. You can use the inline assembler to embed assembly-language instructions directly in your C and C++ source programs without extra assembly and link steps. The inline assembler is built into the compiler, so you don't need a separate assembler such as the Microsoft Macro Assembler (MASM).  
  
> [!NOTE]
>  Programs with inline assembler code are not fully portable to other hardware platforms. If you are designing for portability, avoid using inline assembler.  
  
 Inline assembly is not supported on the ARM and [!INCLUDE[vcprx64](../build/includes/vcprx64_md.md)] processors.  The following topics explain how to use the Visual C/C++ inline assembler with x86 processors:  
  
-   [Inline Assembler Overview](../intrinsics/inline-assembler-overview.md)  
  
-   [Advantages of Inline Assembly](../intrinsics/advantages-of-inline-assembly.md)  
  
-   [__asm](../intrinsics/__asm.md)  
  
-   [Using Assembly Language in __asm Blocks](../intrinsics/using-assembly-language-in-__asm-blocks.md)  
  
-   [Using C or C++ in __asm Blocks](../intrinsics/using-c-or-c---in-__asm-blocks.md)  
  
-   [Using and Preserving Registers in Inline Assembly](../intrinsics/using-and-preserving-registers-in-inline-assembly.md)  
  
-   [Jumping to Labels in Inline Assembly](../intrinsics/jumping-to-labels-in-inline-assembly.md)  
  
-   [Calling C Functions in Inline Assembly](../intrinsics/calling-c-functions-in-inline-assembly.md)  
  
-   [Calling C++ Functions in Inline Assembly](../intrinsics/calling-c---functions-in-inline-assembly.md)  
  
-   [Defining __asm Blocks as C Macros](../intrinsics/defining-__asm-blocks-as-c-macros.md)  
  
-   [Optimizing Inline Assembly](../intrinsics/optimizing-inline-assembly.md)  
  
 **END Microsoft Specific**  
  
## See Also  
 [Compiler Intrinsics and Assembly Language](../intrinsics/compiler-intrinsics-and-assembly-language.md)   
 [C++ Language Reference](../cpp/c---language-reference.md)