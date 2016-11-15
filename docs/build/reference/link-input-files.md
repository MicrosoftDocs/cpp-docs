---
title: "LINK Input Files | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "link"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "files [C++], LINK"
  - "module definition files"
  - "resources [C++], linker files"
  - "LINK tool [C++], input files"
  - "module definition files, linker files"
  - "input files [C++], LINK"
  - "linker [C++], input files"
  - "import libraries [C++], linker files"
  - "command input to linker files [C++]"
ms.assetid: bb26fcc5-509a-4620-bc3e-b6c6e603a412
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
# LINK Input Files
You provide the linker with files that contain objects, import and standard libraries, resources, module definitions, and command input. LINK does not use file extensions to make assumptions about the contents of a file. Instead, LINK examines each input file to determine what kind of file it is.  
  
 Object files on the command line are processed in the order they appear on the command line. Libraries are searched in command line order as well, with the following caveat: Symbols that are unresolved when bringing in an object file from a library are searched for in that library first, and then the following libraries from the command line and [/DEFAULTLIB (Specify Default Library)](../../build/reference/defaultlib-specify-default-library.md) directives, and then to any libraries at the beginning of the command line.  
  
> [!NOTE]
>  LINK no longer accepts a semicolon (or any other character) as the start of a comment in response files and order files. Semicolons are recognized only as the start of comments in module-definition files (.def).  
  
 LINK uses the following types of input files:  
  
-   [.obj files](../../build/reference/dot-obj-files-as-linker-input.md)  
  
-   [.netmodule files](../../build/reference/netmodule-files-as-linker-input.md)  
  
-   [.lib files](../../build/reference/dot-lib-files-as-linker-input.md)  
  
-   [.exp files](../../build/reference/dot-exp-files-as-linker-input.md)  
  
-   [.def files](../../build/reference/dot-def-files-as-linker-input.md)  
  
-   [.pdb files](../../build/reference/dot-pdb-files-as-linker-input.md)  
  
-   [.res files](../../build/reference/dot-res-files-as-linker-input.md)  
  
-   [.exe files](../../build/reference/dot-exe-files-as-linker-input.md)  
  
-   [.txt files](../../build/reference/dot-txt-files-as-linker-input.md)  
  
-   [.ilk files](../../build/reference/dot-ilk-files-as-linker-input.md)  
  
## See Also  
 [Setting Linker Options](../../build/reference/setting-linker-options.md)   
 [Linker Options](../../build/reference/linker-options.md)