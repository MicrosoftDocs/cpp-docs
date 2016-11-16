---
title: "Compiler Command-Line Syntax | Microsoft Docs"
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
  - "syntax, CL compiler command line"
  - "cl.exe compiler, command-line syntax"
ms.assetid: acba2c1c-0803-4a3a-af25-63e849b930a2
caps.latest.revision: 10
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
# Compiler Command-Line Syntax
The CL command line uses the following syntax:  
  
```  
CL [option...] file... [option | file]... [lib...] [@command-file] [/link link-opt...]  
```  
  
 The following table describes input to the CL command.  
  
|Entry|Meaning|  
|-----------|-------------|  
|*option*|One or more [CL options](../../build/reference/compiler-options.md). Note that all options apply to all specified source files. Options are specified by either a forward slash (/) or a dash (–). If an option takes an argument, the option's description documents whether a space is allowed between the option and the arguments. Option names (except for the /HELP option) are case sensitive. See [Order of CL Options](../../build/reference/order-of-cl-options.md) for more information.|  
|`file`|The name of one or more source files, .obj files, or libraries. CL compiles source files and passes the names of the .obj files and libraries to the linker. See [CL Filename Syntax](../../build/reference/cl-filename-syntax.md) for more information.|  
|*lib*|One or more library names. CL passes these names to the linker.|  
|*command-file*|A file that contains multiple options and filenames. See [CL Command Files](../../build/reference/cl-command-files.md) for more information.|  
|*link-opt*|One or more [linker options](../../build/reference/linker-options.md). CL passes these options to the linker.|  
  
 You can specify any number of options, filenames, and library names, as long as the number of characters on the command line does not exceed 1024, the limit dictated by the operating system.  
  
 For information about the return value of cl.exe, see [Return Value of cl.exe](../../build/reference/return-value-of-cl-exe.md) .  
  
> [!NOTE]
>  The command-line input limit of 1024 characters is not guaranteed to remain the same in future releases of Windows.  
  
## See Also  
 [Setting Compiler Options](../../build/reference/setting-compiler-options.md)   
 [Compiler Options](../../build/reference/compiler-options.md)