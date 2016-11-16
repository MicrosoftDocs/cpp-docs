---
title: "C-C++ Build Tools | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "c.build"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "builds [C++], C/C++ tools"
  - "tools [C++], build"
ms.assetid: 48d9daf4-6bbf-473a-8ce2-bf2923b69f80
caps.latest.revision: 6
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
# C/C++ Build Tools
Visual C++ provides the following command-line tools for viewing or manipulating build output:  
  
-   [BSCMAKE.EXE](../../build/reference/bscmake-reference.md) builds a browse information file (.bsc) that contains information about the symbols (classes, functions, data, macros, and types) in your program. You view this information in browse windows within the development environment. (A .bsc file can also be built in the development environment.)  
  
-   [LIB.EXE](../../build/reference/lib-reference.md) is used to create and manage a library of Common Object File Format (COFF) object files. It can also be used to create export files and import libraries to reference exported definitions.  
  
-   [EDITBIN.EXE](../../build/reference/editbin-reference.md) is used to modify COFF binary files.  
  
-   [DUMPBIN.EXE](../../build/reference/dumpbin-reference.md) displays information (such as a symbol table) about COFF binary files.  
  
-   [NMAKE](../../build/nmake-reference.md) reads and executes makefiles.  
  
-   [ERRLOOK](../../build/reference/value-edit-control.md), the Error Lookup utility, retrieves a system error message or module error message based on the value entered.  
  
## See Also  
 [C/C++ Building Reference](../../build/reference/c-cpp-building-reference.md)   
 [Decorated Names](../../build/reference/decorated-names.md)   
 [Compiler Options](../../build/reference/compiler-options.md)   
 [Linker Options](../../build/reference/linker-options.md)