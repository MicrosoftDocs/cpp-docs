---
title: "Inline Assembler"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 7e13f18f-3628-4306-8b81-4a6d09c043fe
caps.latest.revision: 11
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# Inline Assembler
**Microsoft Specific**  
  
 Assembly language serves many purposes, such as improving program speed, reducing memory needs, and controlling hardware. You can use the inline assembler to embed assembly-language instructions directly in your C and C++ source programs without extra assembly and link steps. The inline assembler is built into the compiler, so you don't need a separate assembler such as the Microsoft Macro Assembler (MASM).  
  
> [!NOTE]
>  Programs with inline assembler code are not fully portable to other hardware platforms. If you are designing for portability, avoid using inline assembler.  
  
 Inline assembly is not supported on the ARM and x64 processors.  The following topics explain how to use the Visual C/C++ inline assembler with x86 processors:  
  
-   [Inline Assembler Overview](../VS_visualcpp/Inline-Assembler-Overview.md)  
  
-   [Advantages of Inline Assembly](../VS_visualcpp/Advantages-of-Inline-Assembly.md)  
  
-   [__asm](../VS_visualcpp/__asm.md)  
  
-   [Using Assembly Language in __asm Blocks](../VS_visualcpp/Using-Assembly-Language-in-__asm-Blocks.md)  
  
-   [Using C or C++ in __asm Blocks](../VS_visualcpp/Using-C-or-C---in-__asm-Blocks.md)  
  
-   [Using and Preserving Registers in Inline Assembly](../VS_visualcpp/Using-and-Preserving-Registers-in-Inline-Assembly.md)  
  
-   [Jumping to Labels in Inline Assembly](../VS_visualcpp/Jumping-to-Labels-in-Inline-Assembly.md)  
  
-   [Calling C Functions in Inline Assembly](../VS_visualcpp/Calling-C-Functions-in-Inline-Assembly.md)  
  
-   [Calling C++ Functions in Inline Assembly](../VS_visualcpp/Calling-C---Functions-in-Inline-Assembly.md)  
  
-   [Defining __asm Blocks as C Macros](../VS_visualcpp/Defining-__asm-Blocks-as-C-Macros.md)  
  
-   [Optimizing Inline Assembly](../VS_visualcpp/Optimizing-Inline-Assembly.md)  
  
 **END Microsoft Specific**  
  
## See Also  
 [Compiler Intrinsics and Assembly Language](../VS_visualcpp/Compiler-Intrinsics-and-Assembly-Language.md)   
 [C++ Language Reference](../VS_visualcpp/C---Language-Reference.md)