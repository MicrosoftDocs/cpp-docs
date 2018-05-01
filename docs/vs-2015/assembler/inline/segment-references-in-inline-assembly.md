---
title: "Segment References in Inline Assembly | Microsoft Docs"
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
  - "references, inline assembly"
  - "segment references in inline assembly"
  - "inline assembly, segment references"
  - "registers"
  - "inline assembly, registers"
  - "registers, inline assembly"
ms.assetid: c63e6bb4-49d9-4fa1-bb22-eea21b5cbc0f
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Segment References in Inline Assembly
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Segment References in Inline Assembly](https://docs.microsoft.com/cpp/assembler/inline/segment-references-in-inline-assembly).  
  
  
Microsoft Specific  
 You must refer to segments by register rather than by name (the segment name `_TEXT` is invalid, for instance). Segment overrides must use the register explicitly, as in ES:[BX].  
  
 **END Microsoft Specific**  
  
## See Also  
 [Using Assembly Language in __asm Blocks](../../assembler/inline/using-assembly-language-in-asm-blocks.md)

