---
title: "Using C or C++ in __asm Blocks | Microsoft Docs"
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
  - "inline assembly, mixing instructions with C/C++ statements"
  - "symbols, in __asm blocks"
  - "macros, __asm blocks"
  - "preprocessor directives, used in __asm blocks"
  - "type names, used in __asm blocks"
  - "preprocessor directives"
  - "preprocessor, directives"
  - "constants, in __asm blocks"
  - "comments, in __asm blocks"
  - "typedef names, used in __asm blocks"
  - "__asm keyword [C++], C/C++ elements in"
ms.assetid: ae8b2b52-6b75-42e3-ac0c-ad02d922ed97
caps.latest.revision: 8
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
# Using C or C++ in __asm Blocks
## Microsoft Specific  
 Because inline assembly instructions can be mixed with C or C++ statements, they can refer to C or C++ variables by name and use many other elements of those languages.  
  
 An `__asm` block can use the following language elements:  
  
-   Symbols, including labels and variable and function names  
  
-   Constants, including symbolic constants and `enum` members  
  
-   Macros and preprocessor directives  
  
-   Comments (both **/\* \*/** and **//** )  
  
-   Type names (wherever a MASM type would be legal)  
  
-   `typedef` names, generally used with operators such as **PTR** and **TYPE** or to specify structure or union members  
  
 Within an `__asm` block, you can specify integer constants with either C notation or assembler radix notation (0x100 and 100h are equivalent, for example). This allows you to define (using `#define`) a constant in C and then use it in both C or C++ and assembly portions of the program. You can also specify constants in octal by preceding them with a 0. For example, 0777 specifies an octal constant.  
  
## What do you want to know more about?  
  
-   [Using Operators in __asm Blocks](../../assembler/inline/using-operators-in-asm-blocks.md)  
  
-   [Using C or C++ Symbols_in __asm Blocks](../../assembler/inline/using-c-or-cpp-symbols-in-asm-blocks.md)  
  
-   [Accessing C or C++ Data in __asm Blocks](../../assembler/inline/accessing-c-or-cpp-data-in-asm-blocks.md)  
  
-   [Writing Functions with Inline Assembly](../../assembler/inline/writing-functions-with-inline-assembly.md)  
  
 **END Microsoft Specific**  
  
## See Also  
 [Inline Assembler](../../assembler/inline/inline-assembler.md)