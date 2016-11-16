---
title: "Assembly-Language Comments | Microsoft Docs"
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
  - "assembly language [C++], comments"
  - "comments [C++], assembly language"
  - "macros [C++], assembly language"
  - "__asm keyword [C++], instructions"
ms.assetid: 0dc10850-77f5-426e-9dab-185ea28e06e4
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
# Assembly-Language Comments
## Microsoft Specific  
 Instructions in an `__asm` block can use assembly-language comments:  
  
```  
__asm mov ax, offset buff ; Load address of buff  
```  
  
 Because C macros expand into a single logical line, avoid using assembly-language comments in macros. (See [Defining __asm Blocks as C Macros](../../assembler/inline/defining-asm-blocks-as-c-macros.md).) An `__asm` block can also contain C-style comments; for more information, see [Using C or C++ in __asm Blocks](../../assembler/inline/using-c-or-cpp-in-asm-blocks.md).  
  
 **END Microsoft Specific**  
  
## See Also  
 [Using Assembly Language in __asm Blocks](../../assembler/inline/using-assembly-language-in-asm-blocks.md)