---
title: "Debugging and Listings for Inline Assembly"
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
ms.assetid: 69266930-6f9a-433d-b704-f4f44e7b2583
caps.latest.revision: 7
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
# Debugging and Listings for Inline Assembly
## Microsoft Specific  
 Programs containing inline assembly code can be debugged with a source-level debugger if you compile with the [/Zi](../VS_visualcpp/-Z7---Zi---ZI--Debug-Information-Format-.md) option.  
  
 Within the debugger, you can set breakpoints on both C or C++ and assembly-language lines. If you enable mixed assembly and source mode, you can display both the source and disassembled form of the assembly code.  
  
 Note that putting multiple assembly instructions or source language statements on one line can hamper debugging. In source mode, you can use the debugger to set breakpoints on a single line but not on individual statements on the same line. The same principle applies to an `__asm` block defined as a C macro, which expands to a single logical line.  
  
 If you create a mixed source and assembly listing with the [/FAs](../VS_visualcpp/-FA---Fa--Listing-File-.md) compiler option, the listing contains both the source and assembly forms of each assembly-language line. Macros are not expanded in listings, but they are expanded during compilation.  
  
 **END Microsoft Specific**  
  
## See Also  
 [Using Assembly Language in __asm Blocks](../VS_visualcpp/Using-Assembly-Language-in-__asm-Blocks.md)