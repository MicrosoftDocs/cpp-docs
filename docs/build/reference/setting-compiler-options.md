---
title: "Setting Compiler Options | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
dev_langs: ["C++"]
helpviewer_keywords: ["compiler options, setting", "cl.exe compiler, setting options"]
ms.assetid: 4b079f5b-0017-4124-aad6-0d2b58e427e0
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Setting Compiler Options
C and C++ compiler options can be set either in the development environment or on the command line.  
  
## In the Development Environment  
 You can set compiler options for each project in its **Property Pages** dialog box. In the left pane, select **Configuration Properties**, **C/C++** and then choose the compiler option category. The topic for each compiler option describes how it can be set and where it is found in the development environment. See [Compiler Options](../../build/reference/compiler-options.md) for a complete list.  
  
## Outside the Development Environment  
 You can set compiler (CL.exe) options:  
  
-   [On the command line](../../build/reference/compiler-command-line-syntax.md)  
  
-   [In command files](../../build/reference/cl-command-files.md)  
  
-   [In the CL environment variable](../../build/reference/cl-environment-variables.md)  
  
 Options specified in the CL environment variable are used every time you invoke CL. If a command file is named in the CL environment variable or on the command line, the options specified in the command file are used. Unlike either the command line or the CL environment variable, a command file allows you to use multiple lines of options and filenames.  
  
 Compiler options are processed "left to right," and when a conflict is detected, the last (rightmost) option wins. The CL environment variable is processed before the command line, so in any conflicts between CL and the command line, the command line takes precedence.  
  
## Additional Compiler Topics  
  
-   [Fast Compilation](../../build/reference/fast-compilation.md)  
  
-   [CL Invokes the Linker](../../build/reference/cl-invokes-the-linker.md)  
  
## See Also  
 [C/C++ Building Reference](../../build/reference/c-cpp-building-reference.md)   
 [Compiler Options](../../build/reference/compiler-options.md)