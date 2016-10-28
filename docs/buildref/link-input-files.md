---
title: "LINK Input Files"
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
  
 Object files on the command line are processed in the order they appear on the command line. Libraries are searched in command line order as well, with the following caveat: Symbols that are unresolved when bringing in an object file from a library are searched for in that library first, and then the following libraries from the command line and [/DEFAULTLIB (Specify Default Library)](../buildref/-defaultlib--specify-default-library-.md) directives, and then to any libraries at the beginning of the command line.  
  
> [!NOTE]
>  LINK no longer accepts a semicolon (or any other character) as the start of a comment in response files and order files. Semicolons are recognized only as the start of comments in module-definition files (.def).  
  
 LINK uses the following types of input files:  
  
-   [.obj files](../buildref/.obj-files-as-linker-input.md)  
  
-   [.netmodule files](../buildref/.netmodule-files-as-linker-input.md)  
  
-   [.lib files](../buildref/.lib-files-as-linker-input.md)  
  
-   [.exp files](../buildref/.exp-files-as-linker-input.md)  
  
-   [.def files](../buildref/.def-files-as-linker-input.md)  
  
-   [.pdb files](../buildref/.pdb-files-as-linker-input.md)  
  
-   [.res files](../buildref/.res-files-as-linker-input.md)  
  
-   [.exe files](../buildref/.exe-files-as-linker-input.md)  
  
-   [.txt files](../buildref/.txt-files-as-linker-input.md)  
  
-   [.ilk files](../buildref/.ilk-files-as-linker-input.md)  
  
## See Also  
 [Setting Linker Options](../buildref/setting-linker-options.md)   
 [Linker Options](../buildref/linker-options.md)