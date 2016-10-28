---
title: "Compiler Options"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "cl.exe compiler"
  - "IPF Visual C++ compiler"
  - "Itanium Visual C++ compiler"
  - "compiler options, C++"
  - "x64 Visual C++ compiler"
ms.assetid: ed3376c8-bef4-4c9a-80e9-3b5da232644c
caps.latest.revision: 18
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
# Compiler Options
cl.exe is a tool that controls the Microsoft C and C++ compilers and linker. cl.exe can be run only on operating systems that support Microsoft Visual Studio.  
  
> [!NOTE]
>  You can start this tool only from the [!INCLUDE[vsprvs](../build/includes/vsprvs_md.md)] command prompt. You cannot start it from a system command prompt or from File Explorer.  
  
 The compilers produce Common Object File Format (COFF) object (.obj) files. The linker produces executable (.exe) files or dynamic-link libraries (DLLs).  
  
 Note that all compiler options are case sensitive.  
  
 To compile without linking, use [/c](../buildref/-c--compile-without-linking-.md).  
  
## Finding an Option  
 To find a particular compiler option, see one of the following lists:  
  
-   [Compiler Options Listed Alphabetically](../buildref/compiler-options-listed-alphabetically.md)  
  
-   [Compiler Options Listed by Category](../buildref/compiler-options-listed-by-category.md)  
  
## Specifying Options  
 The topic for each compiler option discusses how it can be set in the development environment. For information on specifying options outside the development environment, see:  
  
-   [Compiler Command-Line Syntax](../buildref/compiler-command-line-syntax.md)  
  
-   [CL Command Files](../buildref/cl-command-files.md)  
  
-   [CL Environment Variables](../buildref/cl-environment-variables.md)  
  
## Related Build Tools  
 Use [NMAKE](../build/nmake-reference.md) to build your output file.  
  
 Use [BSCMAKE](../buildref/bscmake-reference.md) to support class browsing.  
  
 [Linker options](../buildref/linker-options.md) also affect how your program is built.  
  
## See Also  
 [C/C++ Building Reference](../buildref/c-c---building-reference.md)   
 [Setting Compiler Options](../buildref/setting-compiler-options.md)   
 [Fast Compilation](../buildref/fast-compilation.md)   
 [CL Invokes the Linker](../buildref/cl-invokes-the-linker.md)