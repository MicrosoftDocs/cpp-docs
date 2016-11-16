---
title: "Linker Command-Line Syntax | Microsoft Docs"
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
  - "linker [C++], syntax"
  - "linker command line [C++]"
  - "LINK tool [C++], command-line syntax"
ms.assetid: e2a31e17-77bd-4e74-9305-75b105b26539
caps.latest.revision: 11
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
# Linker Command-Line Syntax
To run LINK.EXE, use the following command syntax:  
  
```  
LINK arguments  
```  
  
 The `arguments` include options and filenames and can be specified in any order. Options are processed first, then files. Use one or more spaces or tabs to separate arguments.  
  
> [!NOTE]
>  You can start this tool only from the [!INCLUDE[vsprvs](../../assembler/masm/includes/vsprvs_md.md)] command prompt. You cannot start it from a system command prompt or from File Explorer.  
  
 On the command line, an option consists of an option specifier, either a dash (–) or a forward slash (/), followed by the name of the option. Option names cannot be abbreviated. Some options take an argument, specified after a colon (:). No spaces or tabs are allowed within an option specification, except within a quoted string in the /COMMENT option. Specify numeric arguments in decimal or C-language notation. Option names and their keyword or filename arguments are not case sensitive, but identifiers as arguments are case sensitive.  
  
 To pass a file to the linker, specify the filename on the command line after the LINK command. You can specify an absolute or relative path with the filename, and you can use wildcards in the filename. If you omit the dot (.) and filename extension, LINK assumes .obj for the purpose of finding the file. LINK does not use filename extensions or the lack of them to make assumptions about the contents of files; it determines the type of file by examining it, and processes it accordingly.  
  
 link.exe returns zero for success (no errors).  Otherwise, the linker returns the error number that stopped the link.  For example, if the linker generates LNK1104, the linker returns 1104.  Accordingly, the lowest error number returned on an error by the linker is 1000.  A return value of 128 represents a configuration problem with either the operating system or a .config file; the loader didn’t load either link.exe or c2.dll.  
  
## See Also  
 [Setting Linker Options](../../build/reference/setting-linker-options.md)   
 [Linker Options](../../build/reference/linker-options.md)