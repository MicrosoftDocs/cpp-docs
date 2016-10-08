---
title: "LINK Input Files"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: bb26fcc5-509a-4620-bc3e-b6c6e603a412
caps.latest.revision: 8
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# LINK Input Files
You provide the linker with files that contain objects, import and standard libraries, resources, module definitions, and command input. LINK does not use file extensions to make assumptions about the contents of a file. Instead, LINK examines each input file to determine what kind of file it is.  
  
 Object files on the command line are processed in the order they appear on the command line. Libraries are searched in command line order as well, with the following caveat: Symbols that are unresolved when bringing in an object file from a library are searched for in that library first, and then the following libraries from the command line and [/DEFAULTLIB (Specify Default Library)](../VS_visualcpp/-DEFAULTLIB--Specify-Default-Library-.md) directives, and then to any libraries at the beginning of the command line.  
  
> [!NOTE]
>  LINK no longer accepts a semicolon (or any other character) as the start of a comment in response files and order files. Semicolons are recognized only as the start of comments in module-definition files (.def).  
  
 LINK uses the following types of input files:  
  
-   [.obj files](../VS_visualcpp/.Obj-Files-as-Linker-Input.md)  
  
-   [.netmodule files](../VS_visualcpp/.netmodule-Files-as-Linker-Input.md)  
  
-   [.lib files](../VS_visualcpp/.Lib-Files-as-Linker-Input.md)  
  
-   [.exp files](../VS_visualcpp/.Exp-Files-as-Linker-Input.md)  
  
-   [.def files](../VS_visualcpp/.Def-Files-as-Linker-Input.md)  
  
-   [.pdb files](../VS_visualcpp/.Pdb-Files-as-Linker-Input.md)  
  
-   [.res files](../VS_visualcpp/.Res-Files-as-Linker-Input.md)  
  
-   [.exe files](../VS_visualcpp/.Exe-Files-as-Linker-Input.md)  
  
-   [.txt files](../VS_visualcpp/.Txt-Files-as-Linker-Input.md)  
  
-   [.ilk files](../VS_visualcpp/.Ilk-Files-as-Linker-Input.md)  
  
## See Also  
 [Setting Linker Options](../VS_visualcpp/Setting-Linker-Options.md)   
 [Linker Options](../VS_visualcpp/Linker-Options.md)