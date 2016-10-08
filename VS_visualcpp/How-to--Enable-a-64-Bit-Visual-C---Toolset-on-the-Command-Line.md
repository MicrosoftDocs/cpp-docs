---
title: "How to: Enable a 64-Bit Visual C++ Toolset on the Command Line"
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
ms.assetid: 4da93a19-e20d-4778-902a-5eee9a6a90b5
caps.latest.revision: 30
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
# How to: Enable a 64-Bit Visual C++ Toolset on the Command Line
Visual C++ includes compilers that you can use to create apps that can run on a 32-bit, 64-bit, or ARM-based Windows operating system.  
  
> [!NOTE]
>  For information about the specific tools that are included with each Visual C++ edition, see [Visual C++ Tools and Templates in Visual Studio Editions](../VS_visualcpp/Visual-C---Tools-and-Templates-in-Visual-Studio-Editions.md).  
>   
>  For information about how to use the Visual Studio IDE to create 64-bit applications, see [How to: Configure Visual C++ Projects to Target 64-Bit Platforms](../VS_visualcpp/How-to--Configure-Visual-C---Projects-to-Target-64-Bit-Platforms.md).  
  
 Visual Studio includes 32-bit, x86-hosted, native and cross compilers for x86, x64, and ARM targets. When Visual Studio is installed on a 64-bit Windows operating system, 32-bit, x86-hosted native and cross compilers, and also 64-bit, x64-hosted native and cross compilers, are installed for each target (x86, x64, and ARM). The 32-bit and 64-bit compilers for each target generate identical code, but the 64-bit compilers support more memory for precompiled header symbols and the Whole Program Optimization ([/GL](../VS_visualcpp/-GL--Whole-Program-Optimization-.md), [/LTCG](../VS_visualcpp/-LTCG--Link-time-Code-Generation-.md)) options. If you run into memory limits when you use a 32-bit compiler, try the 64-bit compiler.  
  
 When Visual Studio is installed on a 64-bit Windows operating system, additional Command Prompt shortcuts for the 64-bit x64-native and x86 cross compilers are available. To access these command prompts on Windows 8, on the **Start** screen, open **All apps**. Under the installed version of **Visual Studio**, open **Visual Studio Tools**, and then choose one of the native-tool or cross-tool command prompts. On earlier versions of Windows, choose **Start**, expand **All Programs**, **Visual Studio**, **Visual Studio Tools**, and then choose a command prompt.  
  
## Vcvarsall.bat  
 Any of the compilers can be used on the command line by running the vcvarsall.bat command file to configure the path and environment variables that enable the compiler toolset. Because there are no Command Prompt shortcuts to enable a 64-bit toolset to target x86 or ARM platforms, use vcvarsall.bat in a Command Prompt window to use the 64-bit toolset instead. For more information, see [Setting the Path and Environment Variables for Command-Line Builds](../VS_visualcpp/Setting-the-Path-and-Environment-Variables-for-Command-Line-Builds.md).  
  
 The following steps show how to configure a Command Prompt to use the 64-bit native toolset to target x86, x64, and ARM platforms.  
  
#### To run vcvarsall.bat to use a 64-bit toolset  
  
1.  At the command prompt, change to the Visual C++ installation directory. (The location depends on the system and the Visual Studio installation, but a typical location is C:\Program Files (x86)\Microsoft Visual Studio *version*\VC\\.) For example, enter:  
  
     **cd "Program Files (x86)Microsoft Visual Studio 12.0VC"**  
  
2.  To configure this Command Prompt window for 64-bit command-line builds that target x64 platforms, at the command prompt, enter:  
  
     `vcvarsall amd64`  
  
3.  To configure this Command Prompt window for 64-bit command-line builds that target x86 platforms, at the command prompt, enter:  
  
     `vcvarsall amd64_x86`  
  
4.  To configure this Command Prompt window for 64-bit command-line builds that target ARM platforms, at the command prompt, enter:  
  
     `vcvarsall amd64_arm`  
  
## See Also  
 [Configuring Programs for 64-Bit](../VS_visualcpp/Configuring-Programs-for-64-Bit--Visual-C---.md)