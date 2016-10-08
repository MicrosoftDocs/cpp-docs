---
title: "Setting Compiler Options"
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
ms.assetid: 4b079f5b-0017-4124-aad6-0d2b58e427e0
caps.latest.revision: 7
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
# Setting Compiler Options
C and C++ compiler options can be set either in the development environment or on the command line.  
  
## In the Development Environment  
 You can set compiler options for each project in its **Property Pages** dialog box. In the left pane, select **Configuration Properties**, **C/C++** and then choose the compiler option category. The topic for each compiler option describes how it can be set and where it is found in the development environment. See [Compiler Options](../VS_visualcpp/Compiler-Options.md) for a complete list.  
  
## Outside the Development Environment  
 You can set compiler (CL.exe) options:  
  
-   [On the command line](../VS_visualcpp/Compiler-Command-Line-Syntax.md)  
  
-   [In command files](../VS_visualcpp/CL-Command-Files.md)  
  
-   [In the CL environment variable](../VS_visualcpp/CL-Environment-Variables.md)  
  
 Options specified in the CL environment variable are used every time you invoke CL. If a command file is named in the CL environment variable or on the command line, the options specified in the command file are used. Unlike either the command line or the CL environment variable, a command file allows you to use multiple lines of options and filenames.  
  
 Compiler options are processed "left to right," and when a conflict is detected, the last (rightmost) option wins. The CL environment variable is processed before the command line, so in any conflicts between CL and the command line, the command line takes precedence.  
  
## Additional Compiler Topics  
  
-   [Fast Compilation](../VS_visualcpp/Fast-Compilation.md)  
  
-   [CL Invokes the Linker](../VS_visualcpp/CL-Invokes-the-Linker.md)  
  
## See Also  
 [C/C++ Building Reference](../VS_visualcpp/C-C---Building-Reference.md)   
 [Compiler Options](../VS_visualcpp/Compiler-Options.md)