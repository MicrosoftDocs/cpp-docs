---
title: "Fatal Error C1076 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C1076"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C1076"
ms.assetid: 84ac1180-3e8a-48e8-9f77-7f18a778b964
caps.latest.revision: 12
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
# Fatal Error C1076
compiler limit : internal heap limit reached; use /Zm to specify a higher limit  
  
 This error can be caused by too many symbols, or too many template instantiations.  
  
 To resolve this error:  
  
1.  Use the [/Zm](../../build/reference/zm-specify-precompiled-header-memory-allocation-limit.md) option to set the compiler memory limit to the value specified in the [C3859](../../error-messages/compiler-errors-2/compiler-error-c3859.md) error message. For more information that includes how to set this value in [!INCLUDE[vsprvs](../../assembler/masm/includes/vsprvs_md.md)], see the Remarks section in [/Zm (Specify Precompiled Header Memory Allocation Limit)](../../build/reference/zm-specify-precompiled-header-memory-allocation-limit.md).  
  
2.  If you are using the 32-bit hosted compilers on a 64-bit operating system, use the 64-bit hosted compilers instead. For more information, see [How to: Enable a 64-Bit Visual C++ Toolset on the Command Line](../../build/how-to-enable-a-64-bit-visual-cpp-toolset-on-the-command-line.md).  
  
3.  Eliminate unnecessary include files.  
  
4.  Eliminate unnecessary global variables—for example, by allocating memory dynamically instead of declaring a large array.  
  
5.  Eliminate unused declarations.  
  
6.  Split large functions into smaller functions.  
  
7.  Split large classes into smaller classes.  
  
8.  Split the current file into smaller files.  
  
 If C1076 occurs immediately after the build starts, the value specified for **/Zm** is probably too high for your program. Reduce the **/Zm** value.