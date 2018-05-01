---
title: "Data Directives and Operators in Inline Assembly | Microsoft Docs"
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
  - "data directives [C++]"
  - "__asm keyword [C++], referencing limitations"
  - "MASM (Microsoft Macro Assembler), directives"
  - "directives [C++], MASM"
  - "MASM (Microsoft Macro Assembler), structures"
  - "operators [MASM]"
  - "inline assembly, operators"
  - "inline assembly, data directives"
  - "MASM (Microsoft Macro Assembler), operators"
  - "structures [C++], MASM"
ms.assetid: fb7410c7-156a-4131-bcfc-211aa70533e3
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Data Directives and Operators in Inline Assembly
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Data Directives and Operators in Inline Assembly](https://docs.microsoft.com/cpp/assembler/inline/data-directives-and-operators-in-inline-assembly).  
  
  
Microsoft Specific  
 Although an `__asm` block can reference C or C++ data types and objects, it cannot define data objects with MASM directives or operators. Specifically, you cannot use the definition directives **DB**, `DW`, **DD**, `DQ`, `DT`, and `DF`, or the operators `DUP` or **THIS**. MASM structures and records are also unavailable. The inline assembler doesn't accept the directives `STRUC`, `RECORD`, **WIDTH**, or **MASK**.  
  
 **END Microsoft Specific**  
  
## See Also  
 [Using Assembly Language in __asm Blocks](../../assembler/inline/using-assembly-language-in-asm-blocks.md)

