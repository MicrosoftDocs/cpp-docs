---
title: "EVEN and ALIGN Directives | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "align"
  - "EVEN"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "EVEN directive"
  - "directives, MASM"
  - "MASM (Microsoft Macro Assembler), directives"
  - "NOP (no operation instruction)"
  - "ALIGN directive"
ms.assetid: 7357ab2d-4a5c-43ca-accb-a5f21cdfcde5
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# EVEN and ALIGN Directives
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [EVEN and ALIGN Directives](https://docs.microsoft.com/cpp/assembler/inline/even-and-align-directives).  
  
  
Microsoft Specific  
 Although the inline assembler doesn't support most MASM directives, it does support `EVEN` and **ALIGN**. These directives put **NOP** (no operation) instructions in the assembly code as needed to align labels to specific boundaries. This makes instruction-fetch operations more efficient for some processors.  
  
 **END Microsoft Specific**  
  
## See Also  
 [Using Assembly Language in __asm Blocks](../../assembler/inline/using-assembly-language-in-asm-blocks.md)

