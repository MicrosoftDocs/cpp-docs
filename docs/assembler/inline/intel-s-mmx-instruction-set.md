---
title: "Intel&#39;s MMX Instruction Set | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "MMX instruction set"
ms.assetid: 705deb2d-c3fd-4696-9e22-8bcf25866daf
caps.latest.revision: 7
author: "corob-msft"
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
# Intel&#39;s MMX Instruction Set
## Microsoft Specific  
 The Visual C++ compiler allows you to use Intel's MMX (multimedia extension) instruction set in the inline assembler. The MMX instructions are also supported by the debugger disassembly. The compiler generates a warning message if the function contains MMX instructions but does not contain an EMMS instruction to empty the multimedia state. For more information, see the Intel Web site.  
  
 **END Microsoft Specific**  
  
## See Also  
 [Using Assembly Language in __asm Blocks](../../assembler/inline/using-assembly-language-in-asm-blocks.md)