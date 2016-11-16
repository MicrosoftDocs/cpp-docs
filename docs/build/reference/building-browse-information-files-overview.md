---
title: "Building Browse Information Files: Overview | Microsoft Docs"
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
  - ".bsc files, about .bsc files"
  - "bsc files, about bsc files"
  - "browse information files (.bsc)"
  - "browse information files (.bsc), creating"
ms.assetid: b5c12832-51f6-4953-8044-4264dd0fb242
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
# Building Browse Information Files: Overview
To create browse information for symbol browsing, the compiler creates an .sbr file for each source file in your project, then BSCMAKE.EXE concatenates the .sbr files into one .bsc file.  
  
 Generating .sbr and .bsc files takes time, so Visual C++ turns these functions off by default. If you want to browse current information, you must turn the browse options on and build your project again.  
  
 Use [/FR](../../build/reference/fr-fr-create-dot-sbr-file.md) or [/Fr](../../build/reference/fr-fr-create-dot-sbr-file.md) to tell the compiler to create .sbr files. To create .bsc files, you can call [BSCMAKE](../../build/reference/bscmake-command-line.md) from the command line. Using BSCMAKE from the command line gives you more precise control over the manipulation of browse information files. See [BSCMAKE Reference](../../build/reference/bscmake-reference.md) for more information.  
  
> [!TIP]
>  You can turn on .sbr file generation but leave .bsc file generation turned off. This provides fast builds but also enables you to create a fresh .bsc file quickly by turning on .bsc file generation and building the project.  
  
 You can reduce the time, memory, and disk space required to build a .bsc file by reducing the size of the .bsc file.  
  
 See [General Property Page (Project)](../../ide/general-property-page-project.md) for information on how to build a browser file in the development environment.  
  
### To create a smaller .bsc file  
  
1.  Use [BSCMAKE command-line options](../../build/reference/bscmake-options.md) to exclude information from the browse information file.  
  
2.  Omit local symbols in one or more .sbr files when compiling or assembling.  
  
3.  If an object file does not contain information needed for your current stage of debugging, omit its .sbr file from the BSCMAKE command when you rebuild the browse information file.  
  
### To combine the browse information from several projects into one browser file (.bsc)  
  
1.  Either don't build the .bsc file at the project level or use the /n switch to prevent the .sbr files from being truncated.  
  
2.  After all the projects are built, run BSCMAKE with all of the .sbr files as input. Wildcards are accepted. For instance, if you had project directories C:\X, C:\Y, and C:\Z with .sbr files in them and you wanted to combine them all into one .bsc file, then use BSCMAKE C:\X\\*.sbr C:\Y\\\*.sbr C:\Z\\\*.sbr /o c:\whatever_directory\combined.bsc to build the combined .bsc file.  
  
## See Also  
 [C/C++ Build Tools](../../build/reference/c-cpp-build-tools.md)   
 [BSCMAKE Reference](../../build/reference/bscmake-reference.md)