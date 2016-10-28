---
title: "MASM Macro Directives in Inline Assembly"
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
  - "directives, macros"
  - "inline assembly, macro directives"
  - "macros, directives"
  - "MASM (Microsoft Macro Assembler), inline assembly macro directives"
ms.assetid: 83643a09-1699-40a8-8ef2-13502bc4ac2c
caps.latest.revision: 8
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
# MASM Macro Directives in Inline Assembly
## Microsoft Specific  
 The inline assembler is not a macro assembler. You cannot use MASM macro directives (**MACRO**, `REPT`, **IRC**, `IRP`, and `ENDM`) or macro operators (**<>**, **!**, **&**, `%`, and `.TYPE`). An `__asm` block can use C preprocessor directives, however. See [Using C or C++ in __asm Blocks](../intrinsics/using-c-or-c---in-__asm-blocks.md) for more information.  
  
 **END Microsoft Specific**  
  
## See Also  
 [Using Assembly Language in __asm Blocks](../intrinsics/using-assembly-language-in-__asm-blocks.md)