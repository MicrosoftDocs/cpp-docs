---
title: "How to: Enable a 64-Bit Visual C++ Toolset on the Command Line | Microsoft Docs"
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
  - "x64 [C++]"
  - "64-bit compiler [C++], command line usage"
  - "64-bit compiler [C++], toolset enabling at command line"
  - "command line [C++], 64-bit compiler"
  - "Itanium [C++], command-line compiler"
  - "IPF"
  - "Itanium [C++]"
  - "IPF, command-line compiler"
  - "x64 [C++], command-line compiler"
ms.assetid: 4da93a19-e20d-4778-902a-5eee9a6a90b5
caps.latest.revision: 30
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
# How to: Enable a 64-Bit Visual C++ Toolset on the Command Line
Visual C++ includes compilers that you can use to create apps that can run on a 32-bit, 64-bit, or ARM-based Windows operating system.  
  
> [!NOTE]
>  For information about the specific tools that are included with each Visual C++ edition, see [Visual C++ Tools and Features in Visual Studio Editions](../ide/visual-cpp-tools-and-features-in-visual-studio-editions.md).  
>   
>  For information about how to use the Visual Studio IDE to create 64-bit applications, see [How to: Configure Visual C++ Projects to Target 64-Bit Platforms](../build/how-to-configure-visual-cpp-projects-to-target-64-bit-platforms.md).  
  
 [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] includes 32-bit, x86-hosted, native and cross compilers for x86, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)], and ARM targets. When [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] is installed on a 64-bit Windows operating system, 32-bit, x86-hosted native and cross compilers, and also 64-bit, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]-hosted native and cross compilers, are installed for each target (x86, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)], and ARM). The 32-bit and 64-bit compilers for each target generate identical code, but the 64-bit compilers support more memory for precompiled header symbols and the Whole Program Optimization ([/GL](../build/reference/gl-whole-program-optimization.md), [/LTCG](../build/reference/ltcg-link-time-code-generation.md)) options. If you run into memory limits when you use a 32-bit compiler, try the 64-bit compiler.  
  
 When Visual Studio is installed on a 64-bit Windows operating system, additional Command Prompt shortcuts for the 64-bit [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]-native and x86 cross compilers are available. To access these command prompts on Windows 8, on the **Start** screen, open **All apps**. Under the installed version of **[!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)]**, open **Visual Studio Tools**, and then choose one of the native-tool or cross-tool command prompts. On earlier versions of Windows, choose **Start**, expand **All Programs**, **[!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)]**, **Visual Studio Tools**, and then choose a command prompt.  
  
## Vcvarsall.bat  
 Any of the compilers can be used on the command line by running the vcvarsall.bat command file to configure the path and environment variables that enable the compiler toolset. Because there are no Command Prompt shortcuts to enable a 64-bit toolset to target x86 or ARM platforms, use vcvarsall.bat in a Command Prompt window to use the 64-bit toolset instead. For more information, see [Setting the Path and Environment Variables for Command-Line Builds](../build/setting-the-path-and-environment-variables-for-command-line-builds.md).  
  
 The following steps show how to configure a Command Prompt to use the 64-bit native toolset to target x86, x64, and ARM platforms.  
  
#### To run vcvarsall.bat to use a 64-bit toolset  
  
1.  At the command prompt, change to the [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] installation directory. (The location depends on the system and the [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] installation, but a typical location is C:\Program Files (x86)\Microsoft Visual Studio *version*\VC\\.) For example, enter:  
  
     **cd "Program Files (x86)Microsoft Visual Studio 12.0VC"**  
  
2.  To configure this Command Prompt window for 64-bit command-line builds that target x64 platforms, at the command prompt, enter:  
  
     `vcvarsall amd64`  
  
3.  To configure this Command Prompt window for 64-bit command-line builds that target x86 platforms, at the command prompt, enter:  
  
     `vcvarsall amd64_x86`  
  
4.  To configure this Command Prompt window for 64-bit command-line builds that target ARM platforms, at the command prompt, enter:  
  
     `vcvarsall amd64_arm`  
  
## See Also  
 [Configuring Programs for 64-Bit](../build/configuring-programs-for-64-bit-visual-cpp.md)