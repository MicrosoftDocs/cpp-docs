---
title: "CL Command Files | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "cl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "cl.exe compiler, command files"
  - "command files"
  - "command files, CL compiler"
ms.assetid: ec3cea06-2af0-4fe9-a94c-119c9d31b3a9
caps.latest.revision: 7
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
# CL Command Files
A command file is a text file that contains options and filenames you would otherwise type on the [command line](../../build/reference/compiler-command-line-syntax.md) or specify using the [CL environment variable](../../build/reference/cl-environment-variables.md). CL accepts a compiler command file as an argument in the CL environment variable or on the command line. Unlike either the command line or the CL environment variable, a command file allows you to use multiple lines of options and filenames.  
  
 Options and filenames in a command file are processed according to the location of a command filename within the CL environment variable or on the command line. However, if the /link option appears in the command file, all options on the rest of the line are passed to the linker. Options in subsequent lines in the command file and options on the command line after the command file invocation are still accepted as compiler options. For more information on how the order of options affects their interpretation, see [Order of CL Options](../../build/reference/order-of-cl-options.md).  
  
 A command file must not contain the CL command. Each option must begin and end on the same line; you cannot use the backslash (\\) to combine an option across two lines.  
  
 A command file is specified by an at sign (@) followed by a filename; the filename can specify an absolute or relative path.  
  
 For example, if the following command is in a file named RESP:  
  
```  
/Og /link LIBC.LIB  
```  
  
 and you specify the following CL command:  
  
```  
CL /Ob2 @RESP MYAPP.C  
```  
  
 the command to CL is as follows:  
  
```  
CL /Ob2 /Og MYAPP.C /link LIBC.LIB  
```  
  
 Note that the command line and the command-file commands are effectively combined.  
  
## See Also  
 [Setting Compiler Options](../../build/reference/setting-compiler-options.md)   
 [Compiler Options](../../build/reference/compiler-options.md)