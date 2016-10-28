---
title: "C-C++ Build Tools"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
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
  
-   [BSCMAKE.EXE](../buildref/bscmake-reference.md) builds a browse information file (.bsc) that contains information about the symbols (classes, functions, data, macros, and types) in your program. You view this information in browse windows within the development environment. (A .bsc file can also be built in the development environment.)  
  
-   [LIB.EXE](../buildref/lib-reference.md) is used to create and manage a library of Common Object File Format (COFF) object files. It can also be used to create export files and import libraries to reference exported definitions.  
  
-   [EDITBIN.EXE](../buildref/editbin-reference.md) is used to modify COFF binary files.  
  
-   [DUMPBIN.EXE](../buildref/dumpbin-reference.md) displays information (such as a symbol table) about COFF binary files.  
  
-   [NMAKE](../build/nmake-reference.md) reads and executes makefiles.  
  
-   [ERRLOOK](../buildref/value-edit-control.md), the Error Lookup utility, retrieves a system error message or module error message based on the value entered.  
  
## See Also  
 [C/C++ Building Reference](../buildref/c-c---building-reference.md)   
 [Decorated Names](../buildref/decorated-names.md)   
 [Compiler Options](../buildref/compiler-options.md)   
 [Linker Options](../buildref/linker-options.md)